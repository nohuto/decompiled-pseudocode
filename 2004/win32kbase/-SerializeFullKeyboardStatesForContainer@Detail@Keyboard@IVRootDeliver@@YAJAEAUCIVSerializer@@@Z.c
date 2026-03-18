/*
 * XREFs of ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z @ 0x1C01B98E8
 * Callers:
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01B7F7C (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01B17DC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z @ 0x1C01B1D34 (-IVMeasureFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z @ 0x1C01B230C (-IVSerializeFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SerializeFullKeyboardStatesForContainer(
        IVRootDeliver::Keyboard::Detail *this,
        struct CIVSerializer *a2)
{
  int v3; // eax
  int v4; // edx
  unsigned int v5; // ebx
  int v6; // r9d
  int v8; // [rsp+28h] [rbp-20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      48,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  v3 = IVMeasureFullKeyboardStates(this);
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v5;
    v6 = 49;
    goto LABEL_13;
  }
  v3 = CIVSerializer::ExtendByMeasuredExtra(this);
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v5;
    v6 = 50;
    goto LABEL_13;
  }
  v3 = IVSerializeFullKeyboardStates(this);
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v5;
    v6 = 51;
LABEL_13:
    v8 = v3;
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v4,
      12,
      v6,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
      v8);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      52,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  return v5;
}
