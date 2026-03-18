/*
 * XREFs of ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C01B9A10
 * Callers:
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01B80F0 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01B17DC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureKeyboardInput@@YAJAEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B1E28 (-IVMeasureKeyboardInput@@YAJAEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeKeyboardInput@@YAJAEBU_KEYBOARD_INPUT_DATA@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B2400 (-IVSerializeKeyboardInput@@YAJAEBU_KEYBOARD_INPUT_DATA@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SerializeKeyboardInputForContainer(
        struct _UNICODE_STRING **this,
        struct _UNICODE_STRING *a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        const struct _KEYBOARD_INPUT_DATA *a4)
{
  const struct _UNICODE_STRING *v5; // rsi
  int v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  int v10; // r9d
  int v12; // [rsp+28h] [rbp-30h]

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      43,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
  v7 = IVMeasureKeyboardInput(v5, this);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v9;
    v10 = 44;
    goto LABEL_13;
  }
  v7 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)this);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v9;
    v10 = 45;
    goto LABEL_13;
  }
  v7 = IVSerializeKeyboardInput(a3, v5, (struct CIVSerializer *)this);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v9;
    v10 = 46;
LABEL_13:
    v12 = v7;
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v8,
      12,
      v10,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
      v12);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      12,
      47,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
  return v9;
}
