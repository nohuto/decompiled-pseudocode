/*
 * XREFs of PopCreateUserPowerRequest @ 0x14071CC80
 * Callers:
 *     PopPowerRequestCreateInfo @ 0x14072030C (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x140720650 (NtSetThreadExecutionState.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     SessionIsInteractive @ 0x1403619AC (SessionIsInteractive.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140361A78 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PsQueryProcessAttributes @ 0x140634ADC (PsQueryProcessAttributes.c)
 *     PopInsertPowerRequestObject @ 0x14071CC40 (PopInsertPowerRequestObject.c)
 *     PopCreatePowerRequestObject @ 0x14071D0A0 (PopCreatePowerRequestObject.c)
 *     PopDiagTracePowerRequestCreate @ 0x14071D408 (PopDiagTracePowerRequestCreate.c)
 *     PopAcquirePowerRequestPushLock @ 0x14071EC18 (PopAcquirePowerRequestPushLock.c)
 *     PopUmpoSendPowerRequestCreate @ 0x1408F4EBC (PopUmpoSendPowerRequestCreate.c)
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
  result = PopCreatePowerRequestObject(&v16, a3);
  if ( (int)result >= 0 )
  {
    v9 = v16;
    *(_BYTE *)(v16 + 136) = a2;
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
    PopInsertPowerRequestObject((_QWORD *)v9, a2);
    if ( PopPowerRequestNotificationsEnabled && *(_DWORD *)(v9 + 88) )
      PopUmpoSendPowerRequestCreate(*(unsigned int *)(v9 + 28));
    if ( !a2 )
      PopUmpoSendPowerRequestOverrideQuery(v9, v12, v13, v14);
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0LL, v9);
    result = 0LL;
    *a1 = v9;
  }
  return result;
}
