/*
 * XREFs of PopClearSpecialRequest @ 0x1408DE1FC
 * Callers:
 *     PopPowerRequestActionInfo @ 0x14064C9F0 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopDiagTracePowerRequestChange @ 0x1402763B4 (PopDiagTracePowerRequestChange.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PsReleaseProcessWakeCounter @ 0x14062DC50 (PsReleaseProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A85E8 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopClearSpecialRequest(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  char v5; // bp
  __int64 v6; // rax

  if ( a2 == 3 )
  {
    v4 = 0LL;
    v5 = 0;
    PopAcquirePowerRequestPushLock(1);
    v6 = *(_QWORD *)(a1 + 128);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 128) = 0LL;
      *(_QWORD *)(a1 + 120) = 0LL;
      v4 = v6;
      --*(_DWORD *)(a1 + 44);
      v5 = 1;
      PopDiagTracePowerRequestChange(a1);
      v3 = 0;
    }
    else
    {
      v3 = -1073741811;
    }
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    if ( v5 )
      PsReleaseProcessWakeCounter(v4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
