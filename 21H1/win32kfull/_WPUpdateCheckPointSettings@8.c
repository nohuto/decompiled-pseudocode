/*
 * XREFs of _WPUpdateCheckPointSettings@8 @ 0xB274C
 * Callers:
 *     _xxxSetWindowPlacement@8 @ 0xB2DF4 (_xxxSetWindowPlacement@8.c)
 *     ?xxxProcessShowWindowEvent@@YGXPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@IJ@Z @ 0xF5096 (-xxxProcessShowWindowEvent@@YGXPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@IJ@Z.c)
 * Callees:
 *     _UpdateCheckpoint@4 @ 0xB4838 (_UpdateCheckpoint@4.c)
 */

int __fastcall WPUpdateCheckPointSettings(int a1, char a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax

  result = UpdateCheckpoint();
  v4 = result;
  if ( result )
  {
    v5 = *(_DWORD *)(result + 48);
    if ( (a2 & 1) != 0 )
      v5 |= 1u;
    if ( (a2 & 2) != 0 )
      result = v5 | 2;
    else
      result = v5 & 0xFFFFFFFD;
    *(_DWORD *)(v4 + 48) = result;
  }
  return result;
}
