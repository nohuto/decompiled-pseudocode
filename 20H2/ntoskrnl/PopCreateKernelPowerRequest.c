/*
 * XREFs of PopCreateKernelPowerRequest @ 0x14076E658
 * Callers:
 *     PoRegisterSystemState @ 0x14056D500 (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x14076E5D0 (PoCreatePowerRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A7417C (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140361A78 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopInsertPowerRequestObject @ 0x14071CC40 (PopInsertPowerRequestObject.c)
 *     PopCreatePowerRequestObject @ 0x14071D0A0 (PopCreatePowerRequestObject.c)
 *     PopDiagTracePowerRequestCreate @ 0x14071D408 (PopDiagTracePowerRequestCreate.c)
 *     PopAcquirePowerRequestPushLock @ 0x14071EC18 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopCreateKernelPowerRequest(_QWORD *a1, _DWORD *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  result = PopCreatePowerRequestObject(&v8, a2);
  if ( (int)result >= 0 )
  {
    v4 = (_QWORD *)v8;
    *(_DWORD *)(v8 + 20) = 18;
    PopAcquirePowerRequestPushLock(1);
    PopInsertPowerRequestObject(v4, 0);
    PopUmpoSendPowerRequestOverrideQuery((__int64)v4, v5, v6, v7);
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0, (__int64)v4);
    result = 0LL;
    *a1 = v4;
  }
  return result;
}
