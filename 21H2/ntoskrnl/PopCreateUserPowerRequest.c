/*
 * XREFs of PopCreateUserPowerRequest @ 0x14067CD9C
 * Callers:
 *     PopPowerRequestCreateInfo @ 0x14067CFCC (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x14067D5F0 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140282D74 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     SessionIsInteractive @ 0x140283248 (SessionIsInteractive.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7E54 (Feature_3401902395__private_IsEnabledDeviceUsage.c)
 *     PsQueryProcessAttributes @ 0x140600F24 (PsQueryProcessAttributes.c)
 *     PopCreatePowerRequestObject @ 0x14062BBB0 (PopCreatePowerRequestObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x14067B148 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x14067C538 (PopDiagTracePowerRequestCreate.c)
 *     PopInsertPowerRequestObject @ 0x14067CEC4 (PopInsertPowerRequestObject.c)
 *     PopUmpoSendPowerRequestCreate @ 0x1408F2698 (PopUmpoSendPowerRequestCreate.c)
 */

__int64 __fastcall PopCreateUserPowerRequest(__int64 *a1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbp
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned int SessionId; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0LL;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    PsQueryProcessAttributes(CurrentThread->ApcState.Process, (__int64)&v15, 0LL);
    if ( v15 )
      return 3221225659LL;
  }
  result = PopCreatePowerRequestObject(&v16, (_DWORD *)a3);
  if ( (int)result >= 0 )
  {
    v9 = v16;
    *(_BYTE *)(v16 + 136) = a2;
    if ( !a2 )
      *(_QWORD *)(v9 + 120) = Process;
    if ( (unsigned int)Feature_3401902395__private_IsEnabledDeviceUsage() )
      SessionId = *(_DWORD *)(a3 + 36);
    else
      SessionId = MmGetSessionIdEx(*(_QWORD *)(a3 + 8));
    if ( a2 )
      *(_DWORD *)(v9 + 20) = 8;
    else
      *(_DWORD *)(v9 + 20) = SessionIsInteractive(SessionId) != 0 ? 63 : 30;
    PopAcquirePowerRequestPushLock(1);
    LOBYTE(v11) = a2;
    PopInsertPowerRequestObject(v9, v11);
    if ( PopPowerRequestNotificationsEnabled && *(_DWORD *)(v9 + 88) )
      PopUmpoSendPowerRequestCreate(*(unsigned int *)(v9 + 28));
    if ( !a2 )
      PopUmpoSendPowerRequestOverrideQuery(v9, v12, v13, v14);
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0, v9);
    result = 0LL;
    *a1 = v9;
  }
  return result;
}
