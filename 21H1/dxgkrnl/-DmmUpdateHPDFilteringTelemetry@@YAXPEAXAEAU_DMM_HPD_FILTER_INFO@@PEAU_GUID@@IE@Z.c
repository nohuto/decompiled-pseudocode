/*
 * XREFs of ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C01656B4
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0020060 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C016573C (-UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 */

void __fastcall DmmUpdateHPDFilteringTelemetry(
        PERESOURCE *a1,
        struct _DMM_HPD_FILTER_INFO *a2,
        struct _GUID *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  VIDPN_MGR *Address; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v13);
  }
  Address = (VIDPN_MGR *)a1[334]->Address;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v14, (__int64)Address);
  VIDPN_MGR::UpdateHPDFilteringTelemetry(Address, a2, a3, a4, a5);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 40), v12);
}
