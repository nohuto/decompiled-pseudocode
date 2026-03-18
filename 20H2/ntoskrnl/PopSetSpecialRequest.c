/*
 * XREFs of PopSetSpecialRequest @ 0x1408E43CC
 * Callers:
 *     PopPowerRequestActionInfo @ 0x14071DF18 (PopPowerRequestActionInfo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopDiagTracePowerRequestChange @ 0x140362774 (PopDiagTracePowerRequestChange.c)
 *     PsReleaseProcessWakeCounter @ 0x1405E59A0 (PsReleaseProcessWakeCounter.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 *     PsChargeProcessWakeCounter @ 0x14071BC10 (PsChargeProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x14071EC18 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopSetSpecialRequest(__int64 a1, int a2, ULONG_PTR a3)
{
  char v3; // bp
  int v5; // ebx
  PVOID v6; // rsi
  unsigned __int64 v7; // r14
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  v3 = 0;
  if ( a2 == 3 )
  {
    v5 = ObpReferenceObjectByHandleWithTag(a3, 0x2000, (__int64)PsProcessType, 1, 0x72506F50u, &Object, 0LL, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = PsChargeProcessWakeCounter((__int64)Object, 0, 3u, a1);
      PopAcquirePowerRequestPushLock(1);
      if ( *(_QWORD *)(a1 + 120) )
      {
        v3 = 1;
        v5 = -1073741811;
      }
      else
      {
        *(_QWORD *)(a1 + 120) = v6;
        *(_QWORD *)(a1 + 128) = v7;
        ++*(_DWORD *)(a1 + 44);
        PopDiagTracePowerRequestChange(a1);
        v5 = 0;
      }
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      if ( v3 )
        PsReleaseProcessWakeCounter(v7);
      ObfDereferenceObjectWithTag(v6, 0x72506F50u);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
