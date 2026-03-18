/*
 * XREFs of ExpResourceTimeoutCaptureLiveDump @ 0x1405B3E50
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140884720 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall ExpResourceTimeoutCaptureLiveDump(ULONG_PTR BugCheckParameter2)
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
