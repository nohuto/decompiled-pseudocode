/*
 * XREFs of ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00ECFB0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A0970 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A90B8 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SuspendCpuAccess(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  char *v3; // r14
  char *v5; // rbx
  char *v6; // rbp
  _QWORD **v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // r12
  _QWORD **v10; // r12
  _QWORD *v11; // rsi
  VIDMM_DEVICE **v12; // rdx
  int v13; // edi
  VIDMM_SEGMENT *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  int v17; // eax
  VIDMM_SEGMENT *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // eax
  int v23; // [rsp+20h] [rbp-C8h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-98h] BYREF
  struct _KAPC_STATE v25; // [rsp+80h] [rbp-68h] BYREF

  v3 = (char *)this + 136;
  v5 = (char *)*((_QWORD *)this + 17);
  while ( 1 )
  {
    v6 = v5;
    if ( v5 == v3 )
      break;
    v5 = *(char **)v5;
    v7 = (_QWORD **)(v6 + 16);
    v8 = *v7;
    while ( 1 )
    {
      v9 = v8;
      if ( v8 == v7 )
        break;
      v8 = (_QWORD *)*v8;
      v10 = (_QWORD **)(v9 + 2);
      v11 = *v10;
      while ( v11 != v10 )
      {
        v12 = (VIDMM_DEVICE **)(v11 - 7);
        v11 = (_QWORD *)*v11;
        a3 = *(_QWORD *)*v12;
        if ( *(_DWORD *)(*(_QWORD *)(a3 + 528) + 12LL) || (**(_DWORD **)(a3 + 528) & 0x20000) != 0 )
        {
          if ( *(_DWORD *)(a3 + 360) )
            return (unsigned int)-1071775486;
        }
        else if ( *(_DWORD *)(a3 + 360) )
        {
          VIDMM_GLOBAL::FaultOneAllocation(*((VIDMM_GLOBAL **)this + 1), v12);
        }
      }
    }
  }
  v13 = 0;
  v14 = (VIDMM_SEGMENT *)*((_QWORD *)this + 20);
  if ( v14 == (VIDMM_SEGMENT *)((char *)this + 160) )
    goto LABEL_23;
  do
  {
    v15 = (__int64)v14 - 400;
    v14 = *(VIDMM_SEGMENT **)v14;
    v16 = *(_QWORD *)(v15 + 88);
    if ( v16 && (*(_BYTE *)(v16 + 32) & 1) != 0 )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v15 + 296));
      KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v15 + 88) + 8LL), &ApcState);
      v17 = VIDMM_GLOBAL::Rotate(
              *((_QWORD *)this + 1),
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 88) + 8LL) + 24LL),
              *(_QWORD *)(*(_QWORD *)(v15 + 88) + 24LL),
              3u,
              0LL,
              0LL,
              0LL,
              0LL,
              1,
              v15);
      v13 = v17;
      if ( v17 < 0 )
      {
        if ( v17 == -1073741558 )
        {
          *(_DWORD *)(v15 + 68) |= 0x200000u;
          v13 = 0;
        }
        else
        {
          WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v17, 0LL);
        }
      }
      *(_BYTE *)(*(_QWORD *)(v15 + 88) + 32LL) &= ~1u;
      KeUnstackDetachProcess(&ApcState);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v15 + 296));
    }
  }
  while ( v14 != (VIDMM_SEGMENT *)((char *)this + 160) );
  if ( v13 >= 0 )
  {
LABEL_23:
    v18 = (VIDMM_SEGMENT *)*((_QWORD *)this + 22);
    while ( v18 != (VIDMM_SEGMENT *)((char *)this + 176) )
    {
      v19 = (__int64)v18 - 400;
      v18 = *(VIDMM_SEGMENT **)v18;
      if ( *(_DWORD *)(v19 + 360) )
      {
        LOBYTE(a3) = 1;
        LOBYTE(v23) = 0;
        (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v19 + 120) + 48LL))(
          *(_QWORD *)(v19 + 120),
          v19,
          a3,
          0LL,
          v23,
          0LL);
      }
      else
      {
        v20 = *(_QWORD *)(v19 + 88);
        if ( v20 && (*(_BYTE *)(v20 + 32) & 1) != 0 )
        {
          memset(&v25, 0, sizeof(v25));
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v19 + 296));
          KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v19 + 88) + 8LL), &v25);
          v21 = VIDMM_GLOBAL::Rotate(
                  *((_QWORD *)this + 1),
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 88) + 8LL) + 24LL),
                  *(_QWORD *)(*(_QWORD *)(v19 + 88) + 24LL),
                  3u,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  1,
                  v19);
          v13 = v21;
          if ( v21 < 0 )
          {
            if ( v21 == -1073741558 )
            {
              *(_DWORD *)(v19 + 68) |= 0x200000u;
              v13 = 0;
            }
            else
            {
              WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v21, 0LL);
            }
          }
          *(_BYTE *)(*(_QWORD *)(v19 + 88) + 32LL) &= ~1u;
          KeUnstackDetachProcess(&v25);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v19 + 296));
        }
      }
    }
  }
  return (unsigned int)v13;
}
