/*
 * XREFs of RtlpDecrementWnfSerializationGroup @ 0x1800650D8
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800424AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18006454C (RtlpDecRefWnfUserSubscription.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpDecrementWnfSerializationGroup(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rcx
  _QWORD *v7; // rdx

  RtlAcquireSRWLockExclusive(qword_18016D250 + 48, a2, a3, a4);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) != 1 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18016D250 + 48));
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v6 + 8) != a1 + 8 || (v7 = *(_QWORD **)(a1 + 16), *v7 != a1 + 8) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18016D250 + 48));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
