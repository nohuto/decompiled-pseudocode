/*
 * XREFs of _RtlDeleteResource@4 @ 0x4B2A9DF0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteCriticalSection@4 @ 0x4B2AFB90 (_RtlDeleteCriticalSection@4.c)
 *     _RtlpFreeDebugInfo@4 @ 0x4B2AFCE0 (_RtlpFreeDebugInfo@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

void *__stdcall RtlDeleteResource(HANDLE *a1)
{
  RtlDeleteCriticalSection(a1);
  NtClose(a1[6]);
  NtClose(a1[8]);
  RtlpFreeDebugInfo(a1[13]);
  return memset(a1, 0, 0x38u);
}
