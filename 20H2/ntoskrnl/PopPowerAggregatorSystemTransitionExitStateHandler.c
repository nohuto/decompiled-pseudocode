/*
 * XREFs of PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140770C40
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x1407721F8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorStartNextSession @ 0x140770CF4 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140772098 (PopPowerAggregatorSetCurrentState.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionExitStateHandler(__int64 a1)
{
  int v1; // eax
  int v3; // eax
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_DWORD *)(a1 + 88);
  if ( v1 )
  {
    if ( v1 == 1 )
      goto LABEL_5;
    if ( (unsigned int)(v1 - 2) > 2 )
      return 0LL;
  }
  KeResetEvent((PRKEVENT)(a1 + 280));
  *(_DWORD *)(a1 + 88) = 1;
LABEL_5:
  v3 = *(_DWORD *)(a1 + 92);
  memset(v5, 0, sizeof(v5));
  LODWORD(v5[0]) = v3;
  PopPowerAggregatorSetCurrentState(a1, v5);
  PopPowerAggregatorStartNextSession(0LL, 11LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  if ( qword_140C54260 )
  {
    qword_140C54260(2LL);
    if ( qword_140C54260 )
      qword_140C54260(3LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  return 0LL;
}
