/*
 * XREFs of PopCreateKernelPowerRequest @ 0x14075DCD8
 * Callers:
 *     PoRegisterSystemState @ 0x140569480 (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x14075DC50 (PoCreatePowerRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A6D3B4 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x14033C9CC (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopCreatePowerRequestObject @ 0x1406FF910 (PopCreatePowerRequestObject.c)
 *     PopDiagTracePowerRequestCreate @ 0x1406FFAEC (PopDiagTracePowerRequestCreate.c)
 *     PopInsertPowerRequestObject @ 0x140700C04 (PopInsertPowerRequestObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
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
