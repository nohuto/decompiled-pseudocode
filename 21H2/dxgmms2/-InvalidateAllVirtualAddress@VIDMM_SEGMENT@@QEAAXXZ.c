/*
 * XREFs of ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00EAD60
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A140 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A5B0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A90B8 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 */

void __fastcall VIDMM_SEGMENT::InvalidateAllVirtualAddress(VIDMM_SEGMENT *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rbp
  char *v6; // rsi
  char *v7; // r12
  _QWORD **v8; // r12
  _QWORD *v9; // r14
  _QWORD *v10; // rax
  _QWORD **v11; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // rbp
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  VIDMM_CPU_HOST_APERTURE *v21; // rbx
  _QWORD **v22; // [rsp+58h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  v5 = (char *)this + 136;
  v6 = (char *)*((_QWORD *)this + 17);
  while ( v6 != v5 )
  {
    v7 = v6;
    v6 = *(char **)v6;
    v8 = (_QWORD **)(v7 + 16);
    v22 = v8;
    v9 = *v8;
    if ( *v8 != v8 )
    {
      do
      {
        v10 = v9;
        v9 = (_QWORD *)*v9;
        v11 = (_QWORD **)(v10 + 2);
        v12 = *v11;
        if ( *v11 != v11 )
        {
          v13 = v11;
          do
          {
            v14 = (__int64 *)*(v12 - 7);
            v12 = (_QWORD *)*v12;
            v15 = *v14;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v15 + 496, 0LL);
            DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v15 + 296));
            v19 = *(_QWORD *)(v15 + 88);
            if ( v19 && (*(_BYTE *)(v19 + 32) & 1) != 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v16, v17, v18) + 24) = v15;
                v19 = *(_QWORD *)(v15 + 88);
              }
              KeStackAttachProcess(**(PRKPROCESS **)(v19 + 8), &ApcState);
              v20 = VIDMM_GLOBAL::Rotate(
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
              if ( ((v20 + 0x80000000) & 0x80000000) == 0 && v20 != -1073741558 )
                WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v20, 0LL);
              *(_BYTE *)(*(_QWORD *)(v15 + 88) + 32LL) &= ~1u;
              *(_DWORD *)(v15 + 68) |= 0x200000u;
              KeUnstackDetachProcess(&ApcState);
            }
            if ( *(_QWORD *)(v15 + 464) )
            {
              v21 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 63);
              VIDMM_CPU_HOST_APERTURE::UnmapRange(v21, (struct _VIDMM_GLOBAL_ALLOC *)v15);
              VIDMM_CPU_HOST_APERTURE::ReleaseRange(v21, (struct _VIDMM_GLOBAL_ALLOC *)v15);
            }
            ExReleasePushLockExclusiveEx(v15 + 496, 0LL);
            KeLeaveCriticalRegion();
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v15 + 296));
          }
          while ( v12 != v13 );
          v8 = v22;
        }
      }
      while ( v9 != v8 );
      v5 = (char *)this + 136;
    }
  }
}
