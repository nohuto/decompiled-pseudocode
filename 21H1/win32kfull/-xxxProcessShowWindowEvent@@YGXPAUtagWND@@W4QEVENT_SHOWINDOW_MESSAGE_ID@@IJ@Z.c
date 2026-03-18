/*
 * XREFs of ?xxxProcessShowWindowEvent@@YGXPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@IJ@Z @ 0xF5096
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 * Callees:
 *     _WPUpdateCheckPointSettings@8 @ 0xB274C (_WPUpdateCheckPointSettings@8.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 */

int __fastcall xxxProcessShowWindowEvent(int a1, int a2, int a3, int a4)
{
  int v5; // eax
  int result; // eax
  unsigned __int8 v8; // [esp+0h] [ebp-8h]
  unsigned int v9; // [esp+4h] [ebp-4h]

  v5 = a4 & 0x10000;
  if ( a2 == 1 )
    v5 |= a3;
  result = xxxShowWindowEx((struct tagWND *)v5, v8, v9);
  if ( !a2 && (a3 & 4) != 0 )
  {
    result = *(_DWORD *)(a1 + 20);
    if ( (*(_BYTE *)(result + 23) & 0x20) != 0 )
      return WPUpdateCheckPointSettings(a1, a3);
  }
  return result;
}
