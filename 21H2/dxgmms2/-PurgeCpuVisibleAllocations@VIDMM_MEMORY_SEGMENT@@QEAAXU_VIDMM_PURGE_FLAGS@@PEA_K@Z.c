/*
 * XREFs of ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00E914C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A140 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A5B0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A90B8 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00D8ECC (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DF33C (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  _QWORD *v7; // rdi
  struct _VIDMM_GLOBAL_ALLOC *v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbp
  int v21; // eax
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  v5 = a2;
  if ( (*(_DWORD *)(a1 + 80) & 0x6004) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
    v7 = *(_QWORD **)(a1 + 160);
    while ( v7 != (_QWORD *)(a1 + 160) )
    {
      v8 = (struct _VIDMM_GLOBAL_ALLOC *)(v7 - 50);
      v7 = (_QWORD *)*v7;
      v9 = *((_QWORD *)v8 + 11);
      if ( v9 && (*(_BYTE *)(v9 + 32) & 1) != 0 )
        VIDMM_WORKER_THREAD::SuspendAccessToAllocation(**(VIDMM_GLOBAL ****)(a1 + 8), v8);
    }
    v10 = *(_QWORD **)(a1 + 176);
    while ( v10 != (_QWORD *)(a1 + 176) )
    {
      v11 = (__int64)(v10 - 50);
      v10 = (_QWORD *)*v10;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v11 + 496, 0LL);
      if ( *(_DWORD *)(v11 + 360) )
      {
        ExReleasePushLockExclusiveEx(v11 + 496, 0LL);
        KeLeaveCriticalRegion();
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = v11;
        if ( (*(_DWORD *)(v11 + 68) & 0x100) != 0 )
        {
          if ( g_IsInternalRelease )
            WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        }
        VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v11, v5, a3);
      }
      else
      {
        v20 = *(_QWORD *)(v11 + 88);
        if ( v20 && (*(_BYTE *)(v20 + 32) & 1) != 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = v11;
            v20 = *(_QWORD *)(v11 + 88);
          }
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(**(PRKPROCESS **)(v20 + 8), &ApcState);
          v21 = VIDMM_GLOBAL::Rotate(
                  *(_QWORD *)(a1 + 8),
                  *(_QWORD *)(*(_QWORD *)(v20 + 8) + 24LL),
                  *(_QWORD *)(v20 + 24),
                  3u,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  1,
                  v11);
          if ( (int)(v21 + 0x80000000) >= 0 && v21 != -1073741558 )
            WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v21, 0LL);
          *(_BYTE *)(v20 + 32) &= ~1u;
          KeUnstackDetachProcess(&ApcState);
          if ( *(_QWORD *)(v11 + 464) )
          {
            VIDMM_CPU_HOST_APERTURE::UnmapRange(
              *(VIDMM_CPU_HOST_APERTURE **)(a1 + 504),
              (struct _VIDMM_GLOBAL_ALLOC *)v11);
            VIDMM_CPU_HOST_APERTURE::ReleaseRange(
              *(VIDMM_CPU_HOST_APERTURE **)(a1 + 504),
              (struct _VIDMM_GLOBAL_ALLOC *)v11);
          }
        }
        ExReleasePushLockExclusiveEx(v11 + 496, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
}
