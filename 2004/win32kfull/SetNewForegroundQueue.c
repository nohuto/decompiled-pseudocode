/*
 * XREFs of SetNewForegroundQueue @ 0x1C0033BA0
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzReattachThreads @ 0x1C0038514 (zzzReattachThreads.c)
 *     EditionHandleAltTab @ 0x1C0126BE0 (EditionHandleAltTab.c)
 *     xxxNextWindow @ 0x1C01F4A20 (xxxNextWindow.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C0090198 (UpdateRawMouseMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = gpqForeground;
  v4 = a1;
  if ( !a1 )
    v4 = gObjDummyLock;
  gpqForeground = a1;
  if ( a1 )
    return UpdateRawMouseMode(a1, v4, a3);
  HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  return result;
}
