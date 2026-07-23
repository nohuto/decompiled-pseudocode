/*
 * XREFs of ExpResourceTimeoutCaptureLiveDump @ 0x1405B9D30
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140888C90 (DbgkWerCaptureLiveKernelDump.c)
 */

PSLIST_ENTRY __fastcall ExpResourceTimeoutCaptureLiveDump(ULONG_PTR BugCheckParameter2)
{
  DbgkWerCaptureLiveKernelDump(
    L"ResourceTimeout",
    *(unsigned int *)(BugCheckParameter2 + 48),
    *(unsigned int *)(BugCheckParameter2 + 52),
    0LL,
    0LL,
    0);
  return ExFreeHeapPool(BugCheckParameter2);
}
