/*
 * XREFs of ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DA104
 * Callers:
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00D9940 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00E8E3C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00EB2B0 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2E24 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdx
  __int64 **v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD **v7; // rbp
  _QWORD *v8; // rbx
  _QWORD *v9; // r15
  _QWORD **v10; // r15
  _QWORD *v11; // rdi
  __int64 v12; // r14
  __int64 *v13; // rsi
  __int64 v14; // rax

  WdLogSingleEntry1(4LL, a2);
  v7 = (_QWORD **)((char *)a2 + 272);
  v8 = *v7;
  while ( v8 != v7 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
    v10 = (_QWORD **)(v9 - 2);
    v11 = *v10;
    while ( v11 != v10 )
    {
      v12 = *(v11 - 4);
      v11 = (_QWORD *)*v11;
      if ( (*(_DWORD *)(v12 + 60) & 7) == 0 )
      {
        v13 = (__int64 *)(v12 + 304);
        if ( !*(_QWORD *)(v12 + 304) )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, v3, v5, v6) + 24) = v12;
          VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v12);
          v14 = *(_QWORD *)v12 + 44680LL;
          v4 = *(__int64 ***)(*(_QWORD *)v12 + 44688LL);
          if ( *v4 != (__int64 *)v14 )
            __fastfail(3u);
          *v13 = v14;
          *(_QWORD *)(v12 + 312) = v4;
          *v4 = v13;
          *(_QWORD *)(v14 + 8) = v13;
        }
      }
    }
  }
}
