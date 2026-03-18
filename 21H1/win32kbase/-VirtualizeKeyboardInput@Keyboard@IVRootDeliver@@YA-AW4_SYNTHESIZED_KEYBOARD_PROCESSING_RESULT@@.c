/*
 * XREFs of ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BF984
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0136880 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 *     IsKeyStateCached @ 0x1C0074490 (IsKeyStateCached.c)
 *     VKFromVSC @ 0x1C01B42B0 (VKFromVSC.c)
 *     IsKeyboardIVEnabled @ 0x1C01BCE88 (IsKeyboardIVEnabled.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01BD9D0 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BDE50 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 */

_BOOL8 __fastcall IVRootDeliver::Keyboard::VirtualizeKeyboardInput(
        char a1,
        IVRootDeliver::Keyboard::Detail *a2,
        __int64 *a3,
        const struct _KEYBOARD_INPUT_DATA *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // r9
  __int16 v11; // ax
  unsigned __int8 v12; // di
  char v13; // cl
  char v14; // al
  __int64 v15; // xmm0_8
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int128 v18; // [rsp+30h] [rbp-18h]

  if ( !IsKeyboardIVEnabled() || !isRootPartition(v9, v8) || !*((_DWORD *)gpKeyboardSensor + 314) )
    return 1LL;
  if ( (*(_WORD *)a2 || *((_WORD *)a2 + 1))
    && (a1 & 2) != 0
    && (unsigned int)IVRootDeliver::Keyboard::Detail::SendKeyboardInput(a2, (struct _UNICODE_STRING *)a3, a4, v10) )
  {
    return 0LL;
  }
  if ( (a1 & 1) == 0 )
    return 1LL;
  v11 = *((_WORD *)a3 + 2);
  if ( (v11 & 0x40) != 0 )
  {
    v12 = *((_BYTE *)a3 + 2);
  }
  else
  {
    if ( (v11 & 2) != 0 )
    {
      v13 = -32;
    }
    else
    {
      v13 = 0;
      if ( (v11 & 4) != 0 )
        v13 = -31;
    }
    v14 = *((_BYTE *)a3 + 2);
    v18 = 0LL;
    v17 = 0LL;
    LOBYTE(v17) = v14 & 0x7F;
    v15 = *a3;
    DWORD2(v18) = *((_DWORD *)a3 + 2);
    *(_QWORD *)&v18 = v15;
    v12 = VKFromVSC((unsigned __int8 *)&v17, v13);
  }
  return !IsKeyStateCached(v12)
      || !(unsigned int)IVRootDeliver::Keyboard::Detail::BroadcastAsyncKeyState(
                          a2,
                          (const struct CONTAINER_ID *)v12,
                          *((_WORD *)a3 + 2) & 1);
}
