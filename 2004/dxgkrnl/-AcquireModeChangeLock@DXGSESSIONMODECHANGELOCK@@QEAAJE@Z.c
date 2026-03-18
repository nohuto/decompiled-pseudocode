/*
 * XREFs of ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00DD284 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DD900 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00E1740 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108470 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0128950 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C012D064 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C012E764 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0133F54 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0140928 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkUpdateGdiInfo @ 0x1C01452F0 (DxgkUpdateGdiInfo.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01497D4 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkDisplayOnOff @ 0x1C014B4E0 (DxgkDisplayOnOff.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C014B850 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C014C304 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01580D0 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkPreSessionDisconnected @ 0x1C0159A30 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C0159C10 (DxgkSessionConnected.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015E898 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C0168700 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C0169900 (DxgkGetDpiOverrideForSource.c)
 *     DxgkSessionReconnected @ 0x1C01743C0 (DxgkSessionReconnected.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02236C0 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0254610 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C0269BE8 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C027DE68 (DxgkRedrawCursorForPostCompositon.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C02A8D90 (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C02A9460 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     DxgkAcquireSessionModeChangeLock @ 0x1C011FFA0 (DxgkAcquireSessionModeChangeLock.c)
 */

__int64 __fastcall DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock(DXGSESSIONMODECHANGELOCK *this, char a2)
{
  DXGSESSIONMODECHANGELOCK *v2; // rbx
  __int64 result; // rax

  v2 = this;
  LOBYTE(this) = a2;
  result = DxgkAcquireSessionModeChangeLock(this);
  *(_BYTE *)v2 = (int)result >= 0;
  return result;
}
