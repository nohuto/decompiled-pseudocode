/*
 * XREFs of ??1CIVSerializer@@QEAA@XZ @ 0x1C01AE5FC
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01AA29C (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B28C0 (-ivHandleKeyboardInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B2A60 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B2FB0 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3190 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3350 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandlePnpOtherPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3480 (-ivHandlePnpOtherPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3BC0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01B5900 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01B5C0C (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01B5D80 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01B61A8 (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01B6494 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B685C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01B6AFC (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B6E94 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01B7018 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

void __fastcall CIVSerializer::~CIVSerializer(CIVSerializer *this)
{
  __int64 v1; // rcx

  if ( !*((_BYTE *)this + 48) )
  {
    v1 = *(_QWORD *)this;
    if ( v1 )
      Win32FreePool(v1);
  }
}
