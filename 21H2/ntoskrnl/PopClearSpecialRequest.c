/*
 * XREFs of PopClearSpecialRequest @ 0x1408E195C
 * Callers:
 *     PopPowerRequestActionInfo @ 0x14066F888 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopDiagTracePowerRequestChange @ 0x1402705D4 (PopDiagTracePowerRequestChange.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     PsReleaseProcessWakeCounter @ 0x1406CE130 (PsReleaseProcessWakeCounter.c)
 */

__int64 __fastcall PopClearSpecialRequest(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  void *v4; // rsi
  __int64 v5; // r14
  char v6; // bp
  __int64 v7; // rax

  if ( a2 == 3 )
  {
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0;
    PopAcquirePowerRequestPushLock(1);
    v7 = *(_QWORD *)(a1 + 128);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 128) = 0LL;
      v4 = *(void **)(a1 + 120);
      v5 = v7;
      *(_QWORD *)(a1 + 120) = 0LL;
      v6 = 1;
      --*(_DWORD *)(a1 + 44);
      PopDiagTracePowerRequestChange(a1);
      v3 = 0;
    }
    else
    {
      v3 = -1073741811;
    }
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    if ( v6 )
    {
      PsReleaseProcessWakeCounter(v5);
      if ( v4 )
        ObfDereferenceObjectWithTag(v4, 0x72506F50u);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
