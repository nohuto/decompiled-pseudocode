/*
 * XREFs of _DestroyThreadsHotKeys@0 @ 0x830BA
 * Callers:
 *     <none>
 * Callees:
 *     ?HKRemoveMatchingHotkeys@@YG_NPAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x830D0 (-HKRemoveMatchingHotkeys@@YG_NPAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 */

int __stdcall DestroyThreadsHotKeys()
{
  return HKRemoveMatchingHotkeys(_gptiCurrent, 0, 0, 0);
}
