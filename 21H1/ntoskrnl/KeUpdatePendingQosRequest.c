/*
 * XREFs of KeUpdatePendingQosRequest @ 0x140519360
 * Callers:
 *     KeClockInterruptNotify @ 0x14026F550 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 *     KiUpdateRunTime @ 0x1402753C0 (KiUpdateRunTime.c)
 *     KeCheckAndApplyBamQos @ 0x1405189A0 (KeCheckAndApplyBamQos.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14051AE94 (KiSetVirtualHeteroClockIntervalRequest.c)
 */

__int64 __fastcall KeUpdatePendingQosRequest(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 236) & 0x300) != 0 )
  {
    result = (unsigned int)_InterlockedIncrement(&KiPendingVirtualHeteroRequest);
    if ( (_DWORD)result != 1 )
      return result;
    if ( *(_BYTE *)(a1 + 33) )
    {
      a1 = 0LL;
      return KiSetVirtualHeteroClockIntervalRequest(a1);
    }
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd(&KiPendingVirtualHeteroRequest, 0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      return result;
    if ( *(_BYTE *)(a1 + 33) )
    {
      LOBYTE(a1) = 1;
      return KiSetVirtualHeteroClockIntervalRequest(a1);
    }
  }
  if ( !qword_140C32058 )
    word_140C32022 = KiClockTimerOwner + 1280;
  return KiInsertQueueDpc((ULONG_PTR)&KiSetVirtualHeteroClockIntervalRequestDpc, 0LL, 0LL, 0LL, 0);
}
