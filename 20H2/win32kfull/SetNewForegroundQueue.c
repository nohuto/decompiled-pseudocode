/*
 * XREFs of SetNewForegroundQueue @ 0x1C00BF270
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzReattachThreads @ 0x1C00BF898 (zzzReattachThreads.c)
 *     EditionHandleAltTab @ 0x1C01285A0 (EditionHandleAltTab.c)
 *     xxxNextWindow @ 0x1C01F3DB0 (xxxNextWindow.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00D5378 (UpdateRawMouseMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundQueue(__int64 a1)
{
  __int64 result; // rax

  result = gpqForeground;
  gpqForeground = a1;
  if ( a1 )
    return UpdateRawMouseMode(a1);
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 0;
  return result;
}
