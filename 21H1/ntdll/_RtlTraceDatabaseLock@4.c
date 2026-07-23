/*
 * XREFs of _RtlTraceDatabaseLock@4 @ 0x4B36A3F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 */

NTSTATUS __stdcall RtlTraceDatabaseLock(int a1)
{
  NTSTATUS result; // eax

  result = RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 28));
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
