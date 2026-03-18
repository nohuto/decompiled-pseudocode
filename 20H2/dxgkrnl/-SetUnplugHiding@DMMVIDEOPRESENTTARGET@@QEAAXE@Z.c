/*
 * XREFs of ?SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02E5554
 * Callers:
 *     ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C0174A44 (-ProcessHPDFiltering@VIDPN_MGR@@QEAA-AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEA.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E3854 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetUnplugHiding(DMMVIDEOPRESENTTARGET *this, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  v3 = (unsigned __int8)a2;
  *(_BYTE *)(*((_QWORD *)this + 67) + 172LL) = a2;
  v4 = WdLogNewEntry5_WdDmmEvent(this, a2);
  *(_QWORD *)(v4 + 24) = *((unsigned int *)this + 6);
  *(_QWORD *)(v4 + 32) = v3;
  WdLogEvent5_WdDmmEvent(v4);
}
