/*
 * XREFs of ?IVMeasureKeyboardInput@@YAJAEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B1E28
 * Callers:
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C01B9A10 (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UN.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C01B3CB0 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

__int64 __fastcall IVMeasureKeyboardInput(const struct _UNICODE_STRING *a1, struct _UNICODE_STRING **this)
{
  struct _UNICODE_STRING **v2; // rbx
  int v4; // edx
  unsigned int v5; // ebx

  v2 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(this) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)this,
      12,
      127,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  v5 = CIVSerializer::Serialize((CIVSerializer *)v2, v2[2], a1, 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      12,
      128,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  return v5;
}
