/*
 * XREFs of _RtlpTpWaitRundown@4 @ 0x4B2A81AB
 * Callers:
 *     _RtlDeregisterWaitEx@8 @ 0x4B2A8010 (_RtlDeregisterWaitEx@8.c)
 *     _RtlpTpWaitFinalizationCallback@8 @ 0x4B2A8180 (_RtlpTpWaitFinalizationCallback@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

LOGICAL __thiscall RtlpTpWaitRundown(HANDLE *BaseAddress)
{
  if ( BaseAddress[11] )
    NtSetEvent(BaseAddress[11], 0);
  if ( *BaseAddress )
    NtClose(*BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
