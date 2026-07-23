/*
 * XREFs of PopCreateUserPowerRequest @ 0x140670C38
 * Callers:
 *     PopPowerRequestCreateInfo @ 0x140670E30 (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x1406713E0 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140271020 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     SessionIsInteractive @ 0x14027141C (SessionIsInteractive.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7E54 (Feature_3401902395__private_IsEnabledDeviceUsage.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x140670078 (PopDiagTracePowerRequestCreate.c)
 *     PopCreatePowerRequestObject @ 0x140670788 (PopCreatePowerRequestObject.c)
 *     PopInsertPowerRequestObject @ 0x140670D60 (PopInsertPowerRequestObject.c)
 *     PsQueryProcessAttributes @ 0x1406F0684 (PsQueryProcessAttributes.c)
 *     PopUmpoSendPowerRequestCreate @ 0x1408F27F8 (PopUmpoSendPowerRequestCreate.c)
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
    PsQueryProcessAttributes(CurrentThread->ApcState.Process, &v15, 0LL);
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
