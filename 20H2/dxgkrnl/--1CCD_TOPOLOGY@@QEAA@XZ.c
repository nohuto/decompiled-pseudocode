/*
 * XREFs of ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0131FF4
 * Callers:
 *     DxgkPersistPathsModality @ 0x1C00DF1A0 (DxgkPersistPathsModality.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C012E940 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkGetPathsModality @ 0x1C0131D50 (DxgkGetPathsModality.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0132DA4 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0133708 (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01366A4 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01456C0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkFinalizePathsModality @ 0x1C0148560 (DxgkFinalizePathsModality.c)
 *     DxgkApplyPathsModality @ 0x1C015D4F0 (DxgkApplyPathsModality.c)
 *     DxgkFunctionalizePathsModality @ 0x1C015D5E0 (DxgkFunctionalizePathsModality.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015D6E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C015D7A8 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C015D850 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C0164D34 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C016E68C (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C025C050 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     DxgkApplyCdsjToPathsModality @ 0x1C0293BB0 (DxgkApplyCdsjToPathsModality.c)
 *     DxgkCopyPathsModality @ 0x1C0293C50 (DxgkCopyPathsModality.c)
 *     DxgkEnumerateModesForPathsModality @ 0x1C0293CE0 (DxgkEnumerateModesForPathsModality.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C0294C2C (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0294D8C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0295AD8 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x1C0296690 (DxgkConvertPathsModalityToDisplayConfig.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02E964C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ??1CCD_BTL@@MEAA@XZ @ 0x1C02EBC38 (--1CCD_BTL@@MEAA@XZ.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02EBE48 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02ED158 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EDC94 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0132034 (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0142EC8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

void __fastcall CCD_TOPOLOGY::~CCD_TOPOLOGY(CCD_TOPOLOGY *this)
{
  if ( *((_BYTE *)this + 72) )
  {
    BmlFreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 8));
    operator delete[](*((void **)this + 8));
  }
  operator delete[](*((void **)this + 7));
  CCD_SET_STRING_ID::_Cleanup(this);
}
