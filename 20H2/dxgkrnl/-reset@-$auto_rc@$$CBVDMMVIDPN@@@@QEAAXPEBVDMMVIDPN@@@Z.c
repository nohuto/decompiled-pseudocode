/*
 * XREFs of ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00054DC
 * Callers:
 *     ??1?$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ @ 0x1C0048AA0 (--1-$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C011E5F4 (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C011F150 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C0120EE4 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01213CC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01223E0 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C0122A9C (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_ @ 0x1C0122C00 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_1_.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C013216C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013911C (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013A464 (-DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C013CD80 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C013EDA4 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C0142FD4 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C0149A24 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C015DE50 (-CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_ @ 0x1C0161740 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_0_.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C0164860 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0172BBC (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0193F3C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02D92F4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C02DB5A0 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 *     ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C02DB9BC (-DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTE.c)
 *     ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02DC1B4 (-DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02DC474 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 *     ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C02DC7C8 (-DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z.c)
 *     ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1C02DCA28 (-DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C02DCE10 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z @ 0x1C02DD290 (-DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02DDE40 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C02DE044 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E3854 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall auto_rc<DMMVIDPN const>::reset(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax

  v4 = *a1;
  if ( v4 && a2 != v4 )
    result = ReferenceCounted::Release((ReferenceCounted *)(v4 + 24), a2);
  *a1 = a2;
  return result;
}
