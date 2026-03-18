/*
 * XREFs of isRootPartition @ 0x1C0071238
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016CB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016D70 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016DF0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C001A3C0 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C0025820 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C006A854 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C006FC64 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00709D4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     UseVelocityToEnableIV @ 0x1C0071160 (UseVelocityToEnableIV.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C04C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B61A0 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1C01B9B50 (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01B9C24 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BD540 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C007125C (isInputVirtualizationEnabled.c)
 */

bool __fastcall isRootPartition(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // cl

  v2 = isInputVirtualizationEnabled(a1, a2);
  v3 = 0;
  if ( v2 )
    return gbRootPartition != 0;
  return v3;
}
