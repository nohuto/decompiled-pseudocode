/*
 * XREFs of ExpResourceTimeoutCaptureLiveDump @ 0x140641EE0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall ExpResourceTimeoutCaptureLiveDump(ULONG_PTR BugCheckParameter3)
{
  DbgkWerCaptureLiveKernelDump(
    L"ResourceTimeout",
    *(unsigned int *)(BugCheckParameter3 + 48),
    *(unsigned int *)(BugCheckParameter3 + 52),
    0LL,
    0LL,
    0);
  return ExFreeHeapPool(BugCheckParameter3);
}
