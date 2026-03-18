/*
 * XREFs of ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01AF45C
 * Callers:
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01B6494 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B685C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01B6AFC (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01B7018 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C01B7420 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STR.c)
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z @ 0x1C01B7578 (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z.c)
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C01B76A0 (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UN.c)
 * Callees:
 *     UserReAllocPoolZInit @ 0x1C00A43B0 (UserReAllocPoolZInit.c)
 */

__int64 __fastcall CIVSerializer::ExtendByMeasuredExtra(CIVSerializer *this)
{
  __int64 v1; // rax
  size_t v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = *((_QWORD *)this + 4);
  if ( !v1 )
    return 0LL;
  v3 = *((_QWORD *)this + 1);
  if ( v1 + v3 >= v3 )
  {
    v4 = UserReAllocPoolZInit(*(void **)this, v3, v1 + v3);
    *(_QWORD *)this = v4;
    if ( v4 )
    {
      *((_QWORD *)this + 2) = v4 + 16;
      v5 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 1) += v5;
      *((_QWORD *)this + 3) += v5;
      return 0LL;
    }
  }
  return 3221225495LL;
}
