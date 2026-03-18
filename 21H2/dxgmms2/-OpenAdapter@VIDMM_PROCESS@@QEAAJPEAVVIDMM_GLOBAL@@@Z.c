/*
 * XREFs of ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C009A5E0
 * Callers:
 *     VidMmOpenAdapter @ 0x1C0014AF0 (VidMmOpenAdapter.c)
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C00472D0 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C0099438 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C009ABBC (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C009CBCC (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00B8348 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C009A720 (-ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C009CD60 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C009D530 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C009D66C (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 */

__int64 __fastcall VIDMM_PROCESS::OpenAdapter(struct _KTHREAD **this, struct VIDMM_GLOBAL *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rbp
  struct _KTHREAD *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v12; // rax
  VIDMM_GLOBAL *v13; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v14; // rbp
  unsigned int v15; // r15d
  _DWORD *v16; // r12
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v19; // [rsp+28h] [rbp-30h]
  int v20; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v7 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 240LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v17 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = a2;
    *(_QWORD *)(v17 + 32) = this;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, this + 32, 0);
  DXGPUSHLOCK::AcquireExclusive(v19);
  v8 = this[2];
  v9 = v7;
  v20 = 2;
  v10 = *((_QWORD *)v8 + v7);
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  }
  else
  {
    v12 = VIDMM_PROCESS::InitializeProcessAdapterInfo((VIDMM_PROCESS *)this, a2);
    v14 = v12;
    if ( v12 )
    {
      *((_QWORD *)this[2] + v9) = v12;
      _InterlockedIncrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v9);
      v15 = 0;
      if ( *((_DWORD *)a2 + 926) )
      {
        v16 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
        do
          VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8LL * v15++), v16[v9]);
        while ( v15 < *((_DWORD *)a2 + 926) );
      }
      if ( bTracingEnabled )
      {
        VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
          v13,
          this[4],
          (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v14 + 400),
          (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v14 + 392));
        VIDMM_GLOBAL::ReportProcessAdapterBudget(a2, v14);
      }
    }
    else
    {
      v4 = -1073741801;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return v4;
}
