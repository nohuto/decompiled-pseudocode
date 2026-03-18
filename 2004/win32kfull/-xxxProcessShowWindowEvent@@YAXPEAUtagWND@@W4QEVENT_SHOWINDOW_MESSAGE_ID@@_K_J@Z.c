/*
 * XREFs of ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C012A234
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1C0111284 (WPUpdateCheckPointSettings.c)
 */

_DWORD *__fastcall xxxProcessShowWindowEvent(__int64 a1, int a2, int a3, int a4)
{
  int v7; // r8d
  _DWORD *result; // rax

  v7 = a4 & 0x10000;
  if ( a2 == 1 )
    v7 |= a3;
  result = (_DWORD *)xxxShowWindowEx((struct tagWND *)a1, a4, v7);
  if ( !a2 && (a3 & 4) != 0 )
  {
    result = *(_DWORD **)(a1 + 40);
    if ( (*((_BYTE *)result + 31) & 0x20) != 0 )
      return WPUpdateCheckPointSettings(a1, a3);
  }
  return result;
}
