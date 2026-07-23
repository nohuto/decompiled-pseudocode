/*
 * XREFs of _RtlFreeSid@4 @ 0x4B2EA720
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

PVOID __cdecl RtlFreeSid(PSID Sid)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Sid) == 0 ? Sid : 0;
}
