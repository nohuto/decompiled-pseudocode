/*
 * XREFs of ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01B78B4
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C012E540 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     isRootPartition @ 0x1C0036A7C (isRootPartition.c)
 *     IsKeyStateCached @ 0x1C0076AC0 (IsKeyStateCached.c)
 *     VKFromVSC @ 0x1C01AC1D0 (VKFromVSC.c)
 *     IsKeyboardIVEnabled @ 0x1C01B4DB8 (IsKeyboardIVEnabled.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01B5900 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01B5D80 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 */

_BOOL8 __fastcall IVRootDeliver::Keyboard::VirtualizeKeyboardInput(
        char a1,
        IVRootDeliver::Keyboard::Detail *a2,
        __int64 *a3,
        const struct _KEYBOARD_INPUT_DATA *a4)
{
  void *v8; // r9
  __int16 v9; // ax
  unsigned __int8 v10; // di
  char v11; // cl
  char v12; // al
  __int64 v13; // xmm0_8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int128 v16; // [rsp+30h] [rbp-18h]

  if ( !IsKeyboardIVEnabled() || !isRootPartition() || !*((_DWORD *)gpKeyboardSensor + 314) )
    return 1LL;
  if ( (*(_WORD *)a2 || *((_WORD *)a2 + 1))
    && (a1 & 2) != 0
    && (unsigned int)IVRootDeliver::Keyboard::Detail::SendKeyboardInput(a2, (struct _UNICODE_STRING *)a3, a4, v8) )
  {
    return 0LL;
  }
  if ( (a1 & 1) == 0 )
    return 1LL;
  v9 = *((_WORD *)a3 + 2);
  if ( (v9 & 0x40) != 0 )
  {
    v10 = *((_BYTE *)a3 + 2);
  }
  else
  {
    if ( (v9 & 2) != 0 )
    {
      v11 = -32;
    }
    else
    {
      v11 = 0;
      if ( (v9 & 4) != 0 )
        v11 = -31;
    }
    v12 = *((_BYTE *)a3 + 2);
    v16 = 0LL;
    v15 = 0LL;
    LOBYTE(v15) = v12 & 0x7F;
    v13 = *a3;
    DWORD2(v16) = *((_DWORD *)a3 + 2);
    *(_QWORD *)&v16 = v13;
    v10 = VKFromVSC((unsigned __int8 *)&v15, v11);
  }
  return !IsKeyStateCached(v10)
      || !(unsigned int)IVRootDeliver::Keyboard::Detail::BroadcastAsyncKeyState(
                          a2,
                          (const struct CONTAINER_ID *)v10,
                          *((_WORD *)a3 + 2) & 1);
}
