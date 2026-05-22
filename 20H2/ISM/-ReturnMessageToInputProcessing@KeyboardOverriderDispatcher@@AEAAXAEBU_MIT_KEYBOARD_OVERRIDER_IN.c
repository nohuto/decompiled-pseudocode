/*
 * XREFs of ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800B5320
 * Callers:
 *     ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800B4868 (-AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKey.c)
 *     ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x1800B4C30 (-DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ.c)
 *     ?InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z @ 0x1800B4D40 (-InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z.c)
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800B50E0 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 */

void __fastcall KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        KeyboardOverriderDispatcher *this,
        const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // [rsp+20h] [rbp-19h]
  int v4; // [rsp+30h] [rbp-9h]
  __int128 v5; // [rsp+40h] [rbp+7h] BYREF
  int v6; // [rsp+50h] [rbp+17h]
  __int64 v7; // [rsp+54h] [rbp+1Bh]
  __int64 v8; // [rsp+5Ch] [rbp+23h]
  int v9; // [rsp+64h] [rbp+2Bh]
  __int64 v10; // [rsp+68h] [rbp+2Fh]
  __int128 v11; // [rsp+70h] [rbp+37h]

  LOWORD(v3) = *((_WORD *)a2 + 176);
  DWORD1(v3) = *((_DWORD *)a2 + 89);
  WORD4(v3) = *((_WORD *)a2 + 180);
  HIDWORD(v3) = *((_DWORD *)a2 + 91);
  LOWORD(v4) = *((_WORD *)a2 + 4);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v5 = v3;
  v2 = *((_OWORD *)a2 + 21);
  v6 = v4;
  v10 = *(_QWORD *)a2;
  v11 = v2;
  NtMITSynthesizeKeyboardInput(4LL, &v5, (char *)this + 472);
}
