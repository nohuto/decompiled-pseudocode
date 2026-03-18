/*
 * XREFs of ?IVSerializeFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z @ 0x1C01B230C
 * Callers:
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z @ 0x1C01B98E8 (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C01B42D4 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall IVSerializeFullKeyboardStates(struct CIVSerializer *this)
{
  void **v2; // rsi
  int v3; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      135,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  v2 = (void **)*((_QWORD *)this + 2);
  v3 = CIVSerializer::Serialize(this, v2, gafRawKeyState, 0x40uLL, 0);
  if ( v3 >= 0 )
    v3 = CIVSerializer::Serialize(this, v2 + 1, &gafAsyncKeyState, 0x40uLL, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      136,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  return (unsigned int)v3;
}
