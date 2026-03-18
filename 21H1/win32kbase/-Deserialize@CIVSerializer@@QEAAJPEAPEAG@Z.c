/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01B7350
 * Callers:
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@@Z @ 0x1C01B6C34 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1C01B6F10 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@@Z @ 0x1C01B7070 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@@Z @ 0x1C01B7298 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@@Z @ 0x1C01B7370 (-Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@@Z @ 0x1C01B7428 (-Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@@Z.c)
 *     ?IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B7658 (-IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z.c)
 *     ?IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z @ 0x1C01B77E0 (-IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z.c)
 *     ?IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B78E4 (-IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, unsigned __int16 **a2)
{
  if ( *a2 )
    *a2 = (unsigned __int16 *)(*((_QWORD *)this + 2) + ((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFFEuLL));
  return 0LL;
}
