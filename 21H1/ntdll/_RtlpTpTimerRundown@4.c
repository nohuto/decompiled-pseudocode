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

int __thiscall RtlpTpTimerRundown(int this)
{
  if ( *(_DWORD *)(this + 36) )
    NtSetEvent(*(_DWORD *)(this + 36), 0);
  if ( *(_DWORD *)(this + 8) )
    NtClose(*(HANDLE *)(this + 8));
  if ( !_InterlockedExchangeAdd(*(volatile signed __int32 **)(this + 28), 0xFFFFFFFF) )
    RtlpTpTimerQueueRundown(*(_DWORD **)(this + 28));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, this);
}
