/*
 * XREFs of ExpResourceTimeoutCaptureLiveDump @ 0x1405B9B00
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140888B30 (DbgkWerCaptureLiveKernelDump.c)
 */

PSLIST_ENTRY __fastcall ExpResourceTimeoutCaptureLiveDump(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9

  DbgkWerCaptureLiveKernelDump(
    L"ResourceTimeout",
    *(unsigned int *)(BugCheckParameter2 + 48),
    *(unsigned int *)(BugCheckParameter2 + 52),
    0LL,
    0LL,
    0);
  return ExFreeHeapPool(BugCheckParameter2, v2, v3, v4);
}
