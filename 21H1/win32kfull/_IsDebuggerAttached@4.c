/*
 * XREFs of _IsDebuggerAttached@4 @ 0x197BE
 * Callers:
 *     ?InForegroundQueue@@YGHPBUtagTHREADINFO@@H@Z @ 0x1112C (-InForegroundQueue@@YGHPBUtagTHREADINFO@@H@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1965E (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _IsAdaptiveQueueDetachExempted@4 @ 0xC1162 (_IsAdaptiveQueueDetachExempted@4.c)
 *     _SlowAppThreadInShellFrame@16 @ 0xC4096 (_SlowAppThreadInShellFrame@16.c)
 *     _TryDetachShellFrame@16 @ 0x14E7E3 (_TryDetachShellFrame@16.c)
 * Callees:
 *     <none>
 */

int __thiscall IsDebuggerAttached(_DWORD *this)
{
  int v2; // esi

  v2 = 0;
  if ( *this && PsGetProcessDebugPort(*this) && (!this[125] || (unsigned __int8)ExQueryFastCacheDevLicense()) )
    return 1;
  return v2;
}
