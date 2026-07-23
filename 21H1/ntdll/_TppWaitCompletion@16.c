/*
 * XREFs of _TppWaitCompletion@16 @ 0x4B2B5530
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _TppExecuteWaitCallback@12 @ 0x4B2B55E2 (_TppExecuteWaitCallback@12.c)
 *     _TppSetupNextWait@12 @ 0x4B2B7C92 (_TppSetupNextWait@12.c)
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall TppWaitCompletion(PTP_CALLBACK_INSTANCE Instance, int a2, _RTL_SRWLOCK *ApcContext, int a4)
{
  signed int v4; // esi
  char v5; // cl

  v4 = 0;
  RtlAcquireSRWLockExclusive(ApcContext + 36);
  if ( (unsigned __int8)TppCancelTimer(ApcContext, ApcContext[23].Value + 64, 1) )
    v4 = -1;
  v5 = (char)ApcContext[73].0;
  if ( (v5 & 4) == 0 )
  {
    TppBarrierAdjust(0);
    v5 = (char)ApcContext[73].0;
  }
  ApcContext[56].Value = 0;
  if ( (v5 & 1) != 0 )
    v4 += TppSetupNextWait(ApcContext, ApcContext[58].Ptr, (v5 & 2) != 0 ? (unsigned int)&ApcContext[60] : 0);
  *(_BYTE *)&ApcContext[73].0 = 0;
  if ( v4 > 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)ApcContext, v4);
    v4 = 0;
  }
  RtlReleaseSRWLockExclusive(ApcContext + 36);
  if ( v4 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)ApcContext, v4) == -v4 )
    (*(void (__thiscall **)(_DWORD, _RTL_SRWLOCK *))ApcContext[1].Value)(*(_DWORD *)ApcContext[1].Value, ApcContext);
  return TppExecuteWaitCallback(Instance, 0);
}
