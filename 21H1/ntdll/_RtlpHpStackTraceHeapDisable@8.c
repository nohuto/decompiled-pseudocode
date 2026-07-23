/*
 * XREFs of _RtlpHpStackTraceHeapDisable@8 @ 0x4B36E4A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpIsProtectedHeap@4 @ 0x4B2ECC15 (_RtlpIsProtectedHeap@4.c)
 *     _RtlpHpPerHeapStackTraceCleanup@12 @ 0x4B36DA1B (_RtlpHpPerHeapStackTraceCleanup@12.c)
 */

int __stdcall RtlpHpStackTraceHeapDisable(_DWORD *a1, int a2)
{
  BOOL IsProtectedHeap; // eax

  IsProtectedHeap = RtlpIsProtectedHeap(a1);
  RtlpHpPerHeapStackTraceCleanup(
    (PRTL_RUN_ONCE)((char *)a1 + (a1[2] == -571548178 ? 0 : 0x7C) + 84),
    IsProtectedHeap,
    1);
  return 0;
}
