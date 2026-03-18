/*
 * XREFs of ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864
 * Callers:
 *     ?notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@AEBU_LUID@@2AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C001817C (-notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTAT.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C0038818 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     _lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_ @ 0x1C0038960 (_lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_--_lambda_invoker_cdecl_.c)
 *     ?SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C00389B0 (-SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C0045728 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     SendVisibilityChanged @ 0x1C00481B0 (SendVisibilityChanged.c)
 *     RIMSetDeviceInputMode @ 0x1C0048570 (RIMSetDeviceInputMode.c)
 *     ?EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ @ 0x1C00493A0 (-EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ.c)
 *     ?CreateActivationGroupWithId@CActivationObjectManager@@AEAAJAEBUACTIVATION_GROUP_ID@@@Z @ 0x1C004F24C (-CreateActivationGroupWithId@CActivationObjectManager@@AEAAJAEBUACTIVATION_GROUP_ID@@@Z.c)
 *     SendPositionChanged @ 0x1C0051250 (SendPositionChanged.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C005F524 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     SendMessageTo @ 0x1C0060730 (SendMessageTo.c)
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C0060750 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C00616A4 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C0069ADC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     SendAppClipChanged @ 0x1C00A4670 (SendAppClipChanged.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C00A52A4 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0193E00 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C01A35A0 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C01A5020 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x1C01AB294 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     SendOrientationChanged @ 0x1C01B1B30 (SendOrientationChanged.c)
 *     SendShellClipChanged @ 0x1C01B1B70 (SendShellClipChanged.c)
 *     SendSuppressionStateChanged @ 0x1C01B1C40 (SendSuppressionStateChanged.c)
 * Callees:
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C0061924 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     CoreMsgSend @ 0x1C00619F0 (CoreMsgSend.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgSendMessage(__int64 a1, int a2)
{
  InputExtensibilityCallout *v2; // rsi
  __int64 v3; // rbp
  void *v4; // rdi

  v2 = gpInputExtensibilityCallout;
  v3 = a2;
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v2 + 8, 0LL);
  if ( (unsigned __int8)InputExtensibilityCallout::_CanSendMessageToDestinationInternal(v2, (unsigned int)v3) )
    v4 = (void *)*((_QWORD *)v2 + 5 * v3 + 4);
  ExReleasePushLockSharedEx((char *)v2 + 8, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
    return CoreMsgSend(v4);
  else
    return 2147946717LL;
}
