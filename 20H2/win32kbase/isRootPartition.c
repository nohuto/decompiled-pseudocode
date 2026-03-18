/*
 * XREFs of isRootPartition @ 0x1C0036A7C
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0021000 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00210C0 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0021140 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C002DBC4 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0034CE4 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0036394 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     UseVelocityToEnableIV @ 0x1C00369A4 (UseVelocityToEnableIV.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C008C1F0 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00BE980 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C0189B24 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018CDB8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B3E30 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1C01B77E0 (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01B78B4 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BB1D0 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C0036AA0 (isInputVirtualizationEnabled.c)
 */

bool isRootPartition()
{
  char v0; // al
  char v1; // cl

  v0 = isInputVirtualizationEnabled();
  v1 = 0;
  if ( v0 )
    return gbRootPartition != 0;
  return v1;
}
