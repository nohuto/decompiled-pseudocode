/*
 * XREFs of ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00C5390
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0065C20 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00295C0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029668 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00B2634 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B379C (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B9B18 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(__int64 a1, unsigned int a2, _QWORD *a3)
{
  _QWORD *v3; // rbp
  _QWORD *v6; // rdi
  DXGFASTMUTEX **v7; // rdx
  DXGFASTMUTEX *v8; // rax
  _QWORD *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // [rsp+40h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-70h] BYREF

  v3 = a3;
  if ( (*(_DWORD *)(a1 + 80) & 0x6004) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
    v6 = *(_QWORD **)(a1 + 160);
    while ( v6 != (_QWORD *)(a1 + 160) )
    {
      v7 = (DXGFASTMUTEX **)(v6 - 49);
      v6 = (_QWORD *)*v6;
      v8 = v7[12];
      if ( v8 && (*((_BYTE *)v8 + 32) & 1) != 0 )
        VIDMM_WORKER_THREAD::SuspendAccessToAllocation(**(VIDMM_GLOBAL ****)(a1 + 8), v7);
    }
    v9 = *(_QWORD **)(a1 + 176);
    while ( v9 != (_QWORD *)(a1 + 176) )
    {
      v10 = (__int64)(v9 - 49);
      v9 = (_QWORD *)*v9;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v10 + 488, 0LL);
      if ( *(_DWORD *)(v10 + 336) )
      {
        ExReleasePushLockExclusiveEx(v10 + 488, 0LL);
        KeLeaveCriticalRegion();
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v13) + 24) = v10;
        if ( (*(_DWORD *)(v10 + 76) & 0x100) != 0 )
        {
          if ( g_IsInternalRelease )
          {
            v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12);
            v14[3] = 270LL;
            v14[4] = 9LL;
            v14[5] = 0LL;
            v14[6] = 0LL;
            v14[7] = 0LL;
            WdLogEvent5_WdCriticalError(v14);
          }
        }
        VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v10, a2, v3);
      }
      else
      {
        v15 = *(_QWORD *)(v10 + 96);
        if ( v15 && (*(_BYTE *)(v15 + 32) & 1) != 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v10;
            v15 = *(_QWORD *)(v10 + 96);
          }
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(**(PRKPROCESS **)(v15 + 8), &ApcState);
          LODWORD(v21) = 1;
          v16 = VIDMM_GLOBAL::Rotate(
                  *(_QWORD *)(a1 + 8),
                  *(_QWORD *)(*(_QWORD *)(v15 + 8) + 24LL),
                  *(_QWORD *)(v15 + 24),
                  3u,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v21,
                  v10);
          v18 = v16;
          v19 = v16 + 0x80000000;
          if ( (int)v19 >= 0 && v16 != -1073741558 )
          {
            v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17);
            v20[6] = v18;
            v20[7] = 0LL;
            v20[3] = 270LL;
            v20[4] = 4LL;
            v20[5] = 3LL;
            WdLogEvent5_WdCriticalError(v20);
          }
          *(_BYTE *)(v15 + 32) &= ~1u;
          KeUnstackDetachProcess(&ApcState);
          if ( *(_QWORD *)(v10 + 456) )
          {
            VIDMM_CPU_HOST_APERTURE::UnmapRange(
              *(VIDMM_CPU_HOST_APERTURE **)(a1 + 488),
              (struct _VIDMM_GLOBAL_ALLOC *)v10);
            VIDMM_CPU_HOST_APERTURE::ReleaseRange(
              *(VIDMM_CPU_HOST_APERTURE **)(a1 + 488),
              (struct _VIDMM_GLOBAL_ALLOC *)v10);
          }
        }
        ExReleasePushLockExclusiveEx(v10 + 488, 0LL);
        KeLeaveCriticalRegion();
        v3 = a3;
      }
    }
  }
}
