/*
 * XREFs of ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C
 * Callers:
 *     ??1?$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ @ 0x1C004D3C0 (--1-$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C01A027C (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_ @ 0x1C01A21A0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_1_.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01A30A0 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A62D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01A7544 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C01B4798 (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01B9F4C (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C01BC4FC (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BC8EC (-DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01C486C (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C01C5AA0 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C01D6B10 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01DFEA0 (-CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_ @ 0x1C01E24A0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_0_.c)
 *     ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1C01E37DC (-DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C01E5698 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0216DB4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0225DE6 (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C039AD04 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 *     ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C039B11C (-DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTE.c)
 *     ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C039BBE0 (-DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C039BE90 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 *     ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C039C1C8 (-DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C039C424 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z @ 0x1C039C888 (-DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C039D314 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C039D530 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03A4D40 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall auto_rc<DMMVIDPN const>::reset(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 && a2 != v4 )
    result = ReferenceCounted::Release((ReferenceCounted *)(v4 + 24));
  *a1 = a2;
  return result;
}
