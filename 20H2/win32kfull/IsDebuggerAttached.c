/*
 * XREFs of IsDebuggerAttached @ 0x1C002CEAC
 * Callers:
 *     SlowAppThreadInShellFrame @ 0x1C0029684 (SlowAppThreadInShellFrame.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C002CAAC (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002CB24 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C002CE34 (IsAdaptiveQueueDetachExempted.c)
 *     TryDetachShellFrame @ 0x1C01E1AF4 (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_QWORD *)a1
    && PsGetProcessDebugPort()
    && (!*(_DWORD *)(a1 + 884) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
  {
    return 1;
  }
  return v2;
}
