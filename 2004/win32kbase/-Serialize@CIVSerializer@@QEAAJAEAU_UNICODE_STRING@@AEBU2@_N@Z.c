/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C01B3CB0
 * Callers:
 *     ?IVMeasureKeyboardInput@@YAJAEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B1E28 (-IVMeasureKeyboardInput@@YAJAEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B1EE8 (-IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@.c)
 *     ?IVMeasurePTPInertiaPacket@@YAJU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B1FE0 (-IVMeasurePTPInertiaPacket@@YAJU_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B20A0 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@A.c)
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B21C8 (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeKeyboardInput@@YAJAEBU_KEYBOARD_INPUT_DATA@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B2400 (-IVSerializeKeyboardInput@@YAJAEBU_KEYBOARD_INPUT_DATA@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@.c)
 *     ?IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B2500 (-IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializ.c)
 *     ?IVSerializePTPInertiaPacket@@YAJU_UNICODE_STRING@@_KAEAUCIVSerializer@@@Z @ 0x1C01B264C (-IVSerializePTPInertiaPacket@@YAJU_UNICODE_STRING@@_KAEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAUCIVSerializer@@@Z @ 0x1C01B272C (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B28C0 (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C01B31E8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B8BCC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C01B17B4 (-Ensure@CIVSerializer@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        char a4)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  const UNICODE_STRING *v8; // r10

  if ( a4 )
  {
    *((_QWORD *)this + 4) += (a3->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
    return 0LL;
  }
  if ( CIVSerializer::Ensure(this, (a3->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) )
  {
    a2->MaximumLength = v8->MaximumLength;
    a2->Length = v8->Length;
    a2->Buffer = (PWSTR)(v7 + *(_QWORD *)(v6 + 16));
    RtlCopyUnicodeString(a2, v8);
    a2->Buffer = (PWSTR)(((__int64)a2->Buffer - *((_QWORD *)this + 2)) | 1);
    return 0LL;
  }
  return 3221225495LL;
}
