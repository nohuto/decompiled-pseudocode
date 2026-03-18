/*
 * XREFs of ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C00DF3FC
 * Callers:
 *     ?ProcessFrozenProcesses@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z @ 0x1C00DF030 (-ProcessFrozenProcesses@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEAPEAV3@@Z @ 0x1C00DF4E0 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_.c)
 * Callees:
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A08E8 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00A28BC (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00AABA4 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ @ 0x1C00DEF1C (-IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ.c)
 */

char __fastcall VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(
        VIDMM_PROCESS_ADAPTER_INFO *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r15
  char v6; // r8
  unsigned int v7; // esi
  __int64 v8; // rbp
  _QWORD *v9; // rcx
  _QWORD *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  VIDMM_GLOBAL **v15; // rcx

  v4 = a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  v6 = 0;
  v7 = 0;
  if ( *((_DWORD *)this + 3) )
  {
    while ( 1 )
    {
      v8 = 184LL * v7;
      v9 = (_QWORD *)(v8 + *((_QWORD *)this + 2) + 40LL);
      v10 = (_QWORD *)*v9;
      if ( (_QWORD *)*v9 != v9 )
        break;
LABEL_14:
      if ( ++v7 >= *((_DWORD *)this + 3) )
        return v6;
    }
    while ( 1 )
    {
      v11 = v10[4];
      v10 = (_QWORD *)*v10;
      if ( !v4 )
        break;
      if ( *(_QWORD *)(v11 + 24) )
      {
        VIDMM_DEVICE::IndefinitelySuspend((__int64 **)v11, 1);
LABEL_12:
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v11, v12, v13, v14);
        v6 = 1;
      }
LABEL_13:
      if ( v10 == (_QWORD *)(v8 + *((_QWORD *)this + 2) + 40LL) )
        goto LABEL_14;
    }
    if ( !*(_QWORD *)(v11 + 24)
      || (*(_DWORD *)(v11 + 60) & 7) != 0
      || VIDMM_DEVICE::IsResumedRecently((VIDMM_DEVICE *)v11) )
    {
      goto LABEL_13;
    }
    VIDMM_DEVICE::FullySuspend(v15);
    goto LABEL_12;
  }
  return v6;
}
