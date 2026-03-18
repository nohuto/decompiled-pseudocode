/*
 * XREFs of ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00828A8
 * Callers:
 *     VidMmOpenAdapter @ 0x1C0011C70 (VidMmOpenAdapter.c)
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003E6F4 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C0081988 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C0083EA0 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C00842EC (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0095EF8 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0080E04 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C00829E8 (-ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C0082B54 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C0082C90 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 */

__int64 __fastcall VIDMM_PROCESS::OpenAdapter(struct _KTHREAD **this, struct VIDMM_GLOBAL *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  __int64 v6; // r8
  struct _KTHREAD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v11; // rax
  VIDMM_GLOBAL *v12; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v13; // rbp
  unsigned int v14; // r15d
  _DWORD *v15; // r12
  __int64 v16; // rax
  _BYTE v17[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+30h] [rbp-28h]

  v2 = 0;
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 232LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v16 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v16 + 24) = a2;
    *(_QWORD *)(v16 + 32) = this;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, this + 32, 0);
  DXGPUSHLOCK::AcquireExclusive(v18);
  v7 = this[2];
  v8 = v5;
  v19 = 2;
  v9 = *((_QWORD *)v7 + v5);
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  }
  else
  {
    v11 = VIDMM_PROCESS::InitializeProcessAdapterInfo(this, a2, v6);
    v13 = v11;
    if ( v11 )
    {
      *((_QWORD *)this[2] + v8) = v11;
      _InterlockedIncrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v8);
      v14 = 0;
      if ( *((_DWORD *)a2 + 926) )
      {
        v15 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
        do
          VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8LL * v14++), v15[v8]);
        while ( v14 < *((_DWORD *)a2 + 926) );
      }
      if ( bTracingEnabled )
      {
        VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
          v12,
          this[4],
          (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v13 + 400),
          (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v13 + 392));
        VIDMM_GLOBAL::ReportProcessAdapterBudget(a2, v13);
      }
    }
    else
    {
      v2 = -1073741801;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v2;
}
