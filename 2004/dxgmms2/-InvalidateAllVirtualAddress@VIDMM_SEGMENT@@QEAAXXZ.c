/*
 * XREFs of ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C853C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0074C34 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00295A0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029648 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B49BC (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 */

void __fastcall VIDMM_SEGMENT::InvalidateAllVirtualAddress(VIDMM_SEGMENT *this)
{
  char *v2; // r15
  char *v3; // rsi
  char *v4; // r12
  _QWORD **v5; // r12
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  _QWORD **v8; // rax
  _QWORD *v9; // rbp
  _QWORD *v10; // r15
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  VIDMM_CPU_HOST_APERTURE *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // [rsp+40h] [rbp-88h]
  _QWORD **v22; // [rsp+58h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v2 = (char *)this + 136;
  v3 = (char *)*((_QWORD *)this + 17);
  while ( v3 != v2 )
  {
    v4 = v3;
    v3 = *(char **)v3;
    v5 = (_QWORD **)(v4 + 16);
    v22 = v5;
    v6 = *v5;
    if ( *v5 != v5 )
    {
      do
      {
        v7 = v6;
        v6 = (_QWORD *)*v6;
        v8 = (_QWORD **)(v7 + 2);
        v9 = *v8;
        if ( *v8 != v8 )
        {
          v10 = v8;
          do
          {
            v11 = (__int64 *)*(v9 - 7);
            v9 = (_QWORD *)*v9;
            v12 = *v11;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v12 + 472, 0LL);
            DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v12 + 312));
            v13 = *(_QWORD *)(v12 + 96);
            if ( v13 && (*(_BYTE *)(v13 + 32) & 1) != 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v13) + 24) = v12;
                v13 = *(_QWORD *)(v12 + 96);
              }
              KeStackAttachProcess(**(PRKPROCESS **)(v13 + 8), &ApcState);
              LODWORD(v21) = 1;
              v14 = VIDMM_GLOBAL::Rotate(
                      *((_QWORD *)this + 1),
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 96) + 8LL) + 24LL),
                      *(_QWORD *)(*(_QWORD *)(v12 + 96) + 24LL),
                      3u,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      v21,
                      v12);
              v16 = v14;
              v17 = v14 + 0x80000000;
              if ( (v17 & 0x80000000) == 0 && v14 != -1073741558 )
              {
                v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v15);
                v18[7] = 0LL;
                v18[3] = 270LL;
                v18[4] = 4LL;
                v18[5] = 3LL;
                v18[6] = v16;
                WdLogEvent5_WdCriticalError(v18);
              }
              *(_BYTE *)(*(_QWORD *)(v12 + 96) + 32LL) &= ~1u;
              *(_DWORD *)(v12 + 76) |= 0x100000u;
              KeUnstackDetachProcess(&ApcState);
            }
            if ( *(_QWORD *)(v12 + 440) )
            {
              v19 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 61);
              VIDMM_CPU_HOST_APERTURE::UnmapRange(v19, (struct _VIDMM_GLOBAL_ALLOC *)v12);
              VIDMM_CPU_HOST_APERTURE::ReleaseRange(v19, (struct _VIDMM_GLOBAL_ALLOC *)v12);
            }
            ExReleasePushLockExclusiveEx(v12 + 472, 0LL);
            KeLeaveCriticalRegion();
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 312), v20);
          }
          while ( v9 != v10 );
          v5 = v22;
        }
      }
      while ( v6 != v5 );
      v2 = (char *)this + 136;
    }
  }
}
