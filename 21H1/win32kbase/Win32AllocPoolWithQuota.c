/*
 * XREFs of Win32AllocPoolWithQuota @ 0x1C008F360
 * Callers:
 *     ?AddInteractionUpdateInfo@CTelemetryInfo@DirectComposition@@QEAAJPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1C0002C84 (-AddInteractionUpdateInfo@CTelemetryInfo@DirectComposition@@QEAAJPEAUTOUCH_TELEMETRY_UPDATE_INFO.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0004330 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0004A10 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     NtUserSetSysColors @ 0x1C00113D0 (NtUserSetSysColors.c)
 *     CreateProfileUserName @ 0x1C0012C40 (CreateProfileUserName.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0012D90 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileValue @ 0x1C0013790 (FastGetProfileValue.c)
 *     FastGetProfileStringW @ 0x1C00140C0 (FastGetProfileStringW.c)
 *     ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C002ABA0 (-SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C002AC70 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C002AD60 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00318E0 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 *     ?SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0034204 (-SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?AllocateTableEntry@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C0034520 (-AllocateTableEntry@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBas.c)
 *     InitSystemThread @ 0x1C00349E0 (InitSystemThread.c)
 *     ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0034DBC (-AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     xxxUserChangeDisplaySettings @ 0x1C003EB00 (xxxUserChangeDisplaySettings.c)
 *     ?AllocateTableEntry@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C00400D0 (-AllocateTableEntry@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectCompositi.c)
 *     ?AnimationScenarioReference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z @ 0x1C00414AC (-AnimationScenarioReference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z.c)
 *     ?AnimationScenarioUnreference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z @ 0x1C0041548 (-AnimationScenarioUnreference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z.c)
 *     UserReAllocPoolWithQuota @ 0x1C00429E0 (UserReAllocPoolWithQuota.c)
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C008C5C0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     AllocAce @ 0x1C008CA40 (AllocAce.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008DB70 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C008F3D4 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C0091158 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     CreateSecurityDescriptor @ 0x1C0091FF0 (CreateSecurityDescriptor.c)
 *     AllocateWindowManagerSid @ 0x1C0092130 (AllocateWindowManagerSid.c)
 *     ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x1C0092224 (-AllocateLocalSystemSid@@YAJPEAPEAX@Z.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0094B40 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00C0810 (-SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     FastGetProfileKeysW @ 0x1C012A0E0 (FastGetProfileKeysW.c)
 *     NtConfigureInputSpace @ 0x1C0133A70 (NtConfigureInputSpace.c)
 *     NtSetShellCursorState @ 0x1C0137B50 (NtSetShellCursorState.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0138610 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C013A210 (NtUserGetRawPointerDeviceData.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C013A820 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C013AB90 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C013AF60 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C013BBA0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C013BFC0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C013C3E0 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C013CEF0 (NtUserMapPointsByVisualIdentifier.c)
 *     NtUserSetDisplayConfig @ 0x1C013DBA0 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C013E270 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C013E530 (NtUserSetManipulationInputTarget.c)
 *     NtUserSystemParametersInfo @ 0x1C013F7D0 (NtUserSystemParametersInfo.c)
 *     ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIIPEA_N@Z @ 0x1C01D60C8 (--$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectCompositio.c)
 *     ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIMPEA_N@Z @ 0x1C01D6190 (--$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IE.c)
 *     ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIPEAXPEA_N@Z @ 0x1C01D6264 (--$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@I.c)
 *     ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJI_JPEA_N@Z @ 0x1C01D6338 (--$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C01D786C (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C01D7D4C (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?SetBufferProperty@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01DEEB0 (-SetBufferProperty@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x1C01E2750 (-Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z.c)
 *     ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01E43F0 (-SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetBufferProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01E9EE0 (-SetBufferProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01F1DC0 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01F82C0 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPE.c)
 *     ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01F83F0 (-SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVC.c)
 *     ?SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01F8E10 (-SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplication.c)
 *     InitCreateUserSubsystem @ 0x1C029A6C4 (InitCreateUserSubsystem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocPoolWithQuota(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  int v5; // eax

  v2 = 0LL;
  if ( qword_1C0258BF0 )
    v5 = qword_1C0258BF0();
  else
    v5 = -1073741637;
  if ( v5 < 0 )
    return 0LL;
  if ( qword_1C0258BF8 )
    return qword_1C0258BF8(41LL, a1, a2);
  return v2;
}
