/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C01B42D4
 * Callers:
 *     ?IVMeasureFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z @ 0x1C01B1D34 (-IVMeasureFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z.c)
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B20A0 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@A.c)
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B21C8 (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z @ 0x1C01B230C (-IVSerializeFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B28C0 (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z @ 0x1C01B2DC4 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C01B31E8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEAUtagHPD_CALIBRATION_INFO@@_N@Z @ 0x1C01B3744 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEAUtagHPD_CALIBRATION_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUCPointerRawData@@K_N@Z @ 0x1C01B4010 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUCPointerRawData@@K_N@Z.c)
 * Callees:
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C01B17B4 (-Ensure@CIVSerializer@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(CIVSerializer *this, void **a2, void *a3, __int64 a4, bool a5)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  size_t v9; // r9
  __int64 v10; // r10
  const void *v11; // r11
  void *v12; // rcx

  v7 = (a4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a5 )
  {
    *((_QWORD *)this + 4) += v7;
    return 0LL;
  }
  if ( CIVSerializer::Ensure(this, v7) )
  {
    v12 = (void *)(v10 + *(_QWORD *)(v8 + 16));
    *a2 = v12;
    memmove(v12, v11, v9);
    *a2 = (void *)(((__int64)*a2 - *((_QWORD *)this + 2)) | 1);
    return 0LL;
  }
  return 3221225495LL;
}
