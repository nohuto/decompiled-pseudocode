/*
 * XREFs of ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C002DB04
 * Callers:
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C00077B8 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     _lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_ @ 0x1C0007900 (_lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_--_lambda_invoker_cdecl_.c)
 *     ?SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0007950 (-SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     SendAppClipChanged @ 0x1C000B050 (SendAppClipChanged.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C000B3C4 (-Broadcast@InputConfig@@SAXXZ.c)
 *     SendMessageTo @ 0x1C002C9D0 (SendMessageTo.c)
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C002C9F0 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C002D944 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C002EA6C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@AEBU_LUID@@2AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C0091B9C (-notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTAT.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C00AF7D8 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00B3868 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     SendVisibilityChanged @ 0x1C00B5D00 (SendVisibilityChanged.c)
 *     ?EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ @ 0x1C00B6C34 (-EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ.c)
 *     RIMSetDeviceInputMode @ 0x1C00BB8BC (RIMSetDeviceInputMode.c)
 *     ?CreateActivationGroupWithId@CActivationObjectManager@@AEAAJAEBUACTIVATION_GROUP_ID@@@Z @ 0x1C00BD38C (-CreateActivationGroupWithId@CActivationObjectManager@@AEAAJAEBUACTIVATION_GROUP_ID@@@Z.c)
 *     SendPositionChanged @ 0x1C00BF020 (SendPositionChanged.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C018BBE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C019B340 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C019CDC0 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x1C01A31B4 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     SendOrientationChanged @ 0x1C01A9A50 (SendOrientationChanged.c)
 *     SendShellClipChanged @ 0x1C01A9A90 (SendShellClipChanged.c)
 *     SendSuppressionStateChanged @ 0x1C01A9B60 (SendSuppressionStateChanged.c)
 * Callees:
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C002DBC4 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     CoreMsgSend @ 0x1C002DC90 (CoreMsgSend.c)
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
