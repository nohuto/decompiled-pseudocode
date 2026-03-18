/*
 * XREFs of PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140770B80
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x1407721F8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorStartNextSession @ 0x140770CF4 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140772098 (PopPowerAggregatorSetCurrentState.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionEnterStateHandler(__int64 a1)
{
  int v1; // eax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+24h] [rbp-24h]
  int v7; // [rsp+34h] [rbp-14h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 72);
  if ( (v1 & 0xFFFFFFFC) != 0 || v1 == 1 )
  {
    v4 = *(_DWORD *)(a1 + 88);
    if ( v4 >= 0 && (v4 <= 2 || v4 == 4) )
    {
      PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
      if ( qword_140C54260 )
        qword_140C54260(1LL);
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
      KeSetEvent((PRKEVENT)(a1 + 280), 0, 0);
      PopPowerAggregatorStartNextSession(3LL, *(unsigned int *)(a1 + 76));
      *(_DWORD *)(a1 + 88) = 3;
    }
  }
  else
  {
    v8 = 0LL;
    v5 = 5;
    v6 = 0LL;
    v7 = 3;
    PopPowerAggregatorSetCurrentState(a1, &v5);
  }
  return 0LL;
}
