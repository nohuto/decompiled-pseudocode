/*
 * XREFs of _LdrpForkProcess@0 @ 0x4B331A83
 * Callers:
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 * Callees:
 *     _LdrpDoDebuggerBreak@0 @ 0x4B331A37 (_LdrpDoDebuggerBreak@0.c)
 */

int __stdcall LdrpForkProcess()
{
  struct _PEB *v0; // eax

  v0 = NtCurrentPeb();
  LdrpForkActiveLock.0 = 0;
  LdrpForkConditionVariable.Ptr = 0;
  v0->InheritedAddressSpace = 0;
  if ( v0->BeingDebugged )
    LdrpDoDebuggerBreak();
  return 0;
}
