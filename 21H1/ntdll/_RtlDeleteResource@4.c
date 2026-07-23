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

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  size_t v1; // [esp-4h] [ebp-8h]

  RtlDeleteCriticalSection(&Resource->CriticalSection);
  NtClose(Resource->SharedSemaphore);
  NtClose(Resource->ExclusiveSemaphore);
  RtlpFreeDebugInfo(Resource->DebugInfo);
  LODWORD(v1) = 56;
  memset(Resource, 0, v1);
}
