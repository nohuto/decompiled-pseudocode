/*
 * XREFs of _TppGetCurrentThreadNumaNode@12 @ 0x4B2B49C9
 * Callers:
 *     _TpAllocPoolInternal@8 @ 0x4B2B37A4 (_TpAllocPoolInternal@8.c)
 *     _TppInitializeTimerSubQueue@12 @ 0x4B2B407F (_TppInitializeTimerSubQueue@12.c)
 *     _TpAllocWait@16 @ 0x4B2B4140 (_TpAllocWait@16.c)
 *     _TppWorkInitialize@24 @ 0x4B2B492B (_TppWorkInitialize@24.c)
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _TpAllocIoCompletion@20 @ 0x4B2E6E50 (_TpAllocIoCompletion@20.c)
 *     _TpReserveTaskPost@12 @ 0x4B2E8D1F (_TpReserveTaskPost@12.c)
 *     _TppAllocAlpcCompletion@24 @ 0x4B2E9A8F (_TppAllocAlpcCompletion@24.c)
 *     _TpAllocJobNotification@20 @ 0x4B383550 (_TpAllocJobNotification@20.c)
 *     _RtlpTpIoAlloc@12 @ 0x4B3855A8 (_RtlpTpIoAlloc@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _TppAdjustRunningThreadGoalWithLock@4 @ 0x4B384257 (_TppAdjustRunningThreadGoalWithLock@4.c)
 */

unsigned __int8 *__fastcall TppGetCurrentThreadNumaNode(_RTL_SRWLOCK *a1, _DWORD *a2, unsigned __int8 *a3)
{
  unsigned __int8 Number; // cl
  unsigned int v5; // esi
  unsigned int v6; // ebx
  unsigned int Value; // eax
  unsigned int v8; // edx
  unsigned int v9; // edi
  unsigned __int16 v10; // ax
  unsigned __int8 *result; // eax
  unsigned __int16 Group; // [esp+14h] [ebp-8h]
  unsigned __int8 v14; // [esp+1Bh] [ebp-1h]

  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v5 = TppNumberNodes;
  v6 = TppNumberNodes;
  v14 = Number;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (Value = a1[68].Value, v5 = TppNumberNodes, !Value) )
    Value = MEMORY[0x7FFE03C0];
  if ( a1[64].Value != Value )
  {
    RtlAcquireSRWLockExclusive(a1 + 11);
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive(a1 + 11);
    v5 = TppNumberNodes;
    Number = v14;
  }
  v8 = 0;
  if ( v5 )
  {
    v9 = a1[8].Value;
    v10 = Group;
    do
    {
      if ( *(_WORD *)(v9 + 4) == v10 )
      {
        if ( ((1 << Number) & *(_DWORD *)v9) != 0 )
        {
          v6 = v8;
          break;
        }
        v10 = Group;
      }
      ++v8;
      v9 += 12;
    }
    while ( v8 < v5 );
  }
  *a2 = v6 < v5 ? v6 : 0;
  result = a3;
  if ( a3 )
    *a3 = v14;
  return result;
}
