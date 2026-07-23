/*
 * XREFs of _RtlpTpTimerRundown@4 @ 0x4B2A8D8D
 * Callers:
 *     _RtlDeleteTimerQueueEx@8 @ 0x4B2A8AC0 (_RtlDeleteTimerQueueEx@8.c)
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 *     _RtlpTpTimerFinalizationCallback@8 @ 0x4B2ABCD0 (_RtlpTpTimerFinalizationCallback@8.c)
 * Callees:
 *     _RtlpTpTimerQueueRundown@4 @ 0x4B2A8BFD (_RtlpTpTimerQueueRundown@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

LOGICAL __thiscall RtlpTpTimerRundown(PVOID BaseAddress)
{
  if ( *((_DWORD *)BaseAddress + 9) )
    NtSetEvent(*((HANDLE *)BaseAddress + 9), 0);
  if ( *((_DWORD *)BaseAddress + 2) )
    NtClose(*((HANDLE *)BaseAddress + 2));
  if ( !_InterlockedExchangeAdd(*((volatile signed __int32 **)BaseAddress + 7), 0xFFFFFFFF) )
    RtlpTpTimerQueueRundown(*((HANDLE **)BaseAddress + 7));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
