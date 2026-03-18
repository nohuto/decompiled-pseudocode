/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01B15F0
 * Callers:
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@@Z @ 0x1C01B0ED4 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1C01B11B0 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@@Z @ 0x1C01B1310 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@@Z @ 0x1C01B1538 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@@Z @ 0x1C01B1610 (-Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@@Z @ 0x1C01B16C8 (-Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@@Z.c)
 *     ?IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B18F8 (-IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z.c)
 *     ?IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z @ 0x1C01B1A80 (-IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z.c)
 *     ?IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B1B84 (-IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, unsigned __int16 **a2)
{
  if ( *a2 )
    *a2 = (unsigned __int16 *)(*((_QWORD *)this + 2) + ((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFFEuLL));
  return 0LL;
}
