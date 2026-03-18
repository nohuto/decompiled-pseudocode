/*
 * XREFs of PopCreateUserPowerRequest @ 0x1406FF730
 * Callers:
 *     NtSetThreadExecutionState @ 0x1406FEF30 (NtSetThreadExecutionState.c)
 *     PopPowerRequestCreateInfo @ 0x1406FF504 (PopPowerRequestCreateInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x14033C9CC (PopUmpoSendPowerRequestOverrideQuery.c)
 *     SessionIsInteractive @ 0x14033DB1C (SessionIsInteractive.c)
 *     PsQueryProcessAttributes @ 0x1405E04C0 (PsQueryProcessAttributes.c)
 *     PopCreatePowerRequestObject @ 0x1406FF910 (PopCreatePowerRequestObject.c)
 *     PopDiagTracePowerRequestCreate @ 0x1406FFAEC (PopDiagTracePowerRequestCreate.c)
 *     PopInsertPowerRequestObject @ 0x140700C04 (PopInsertPowerRequestObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
 *     PopUmpoSendPowerRequestCreate @ 0x1408EDFBC (PopUmpoSendPowerRequestCreate.c)
 */

__int64 __fastcall PopCreateUserPowerRequest(__int64 *a1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned int SessionId; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v17 = 0LL;
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    PsQueryProcessAttributes(CurrentThread->ApcState.Process, (__int64)&v16, 0LL);
    if ( v16 )
      return 3221225659LL;
  }
  result = PopCreatePowerRequestObject(&v17, a3);
  if ( (int)result >= 0 )
  {
    v9 = v17;
    *(_BYTE *)(v17 + 136) = a2;
    if ( !a2 )
      *(_QWORD *)(v9 + 120) = Process;
    SessionId = MmGetSessionIdEx(*(_QWORD *)(a3 + 8));
    if ( a2 )
    {
      *(_DWORD *)(v9 + 20) = 8;
    }
    else
    {
      v11 = SessionIsInteractive(SessionId) != 0 ? 63 : 30;
      *(_DWORD *)(v9 + 20) = v11;
    }
    LOBYTE(v11) = 1;
    PopAcquirePowerRequestPushLock(v11);
    LOBYTE(v12) = a2;
    PopInsertPowerRequestObject(v9, v12);
    if ( PopPowerRequestNotificationsEnabled && *(_DWORD *)(v9 + 88) )
      PopUmpoSendPowerRequestCreate(*(unsigned int *)(v9 + 28));
    if ( !a2 )
      PopUmpoSendPowerRequestOverrideQuery(v9, v13, v14, v15);
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0LL, v9);
    result = 0LL;
    *a1 = v9;
  }
  return result;
}
