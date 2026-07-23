/*
 * XREFs of NtSetThreadExecutionState @ 0x1406713E0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x140270E84 (PoDestroyReasonContext.c)
 *     SessionIsInteractive @ 0x14027141C (SessionIsInteractive.c)
 *     PoCaptureReasonContext @ 0x14027184C (PoCaptureReasonContext.c)
 *     PopGetLegacyPowerRequestFlags @ 0x140272668 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1402726BC (PopApplyLegacyPowerRequestFlags.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     PopSystemRequiredSet @ 0x1403A7DA0 (PopSystemRequiredSet.c)
 *     PopCreateUserPowerRequest @ 0x140670C38 (PopCreateUserPowerRequest.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406F499C (PoEnergyContextUpdateComponentPower.c)
 *     PopNotifyConsoleUserPresent @ 0x1407732C0 (PopNotifyConsoleUserPresent.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x14077366C (PopDiagTraceSetThreadExecutionState.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

NTSTATUS __cdecl NtSetThreadExecutionState(EXECUTION_STATE NewFlags, EXECUTION_STATE *PreviousFlags)
{
  EXECUTION_STATE *v2; // r12
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  NTSTATUS UserPowerRequest; // ebx
  _QWORD *v8; // rsi
  char LegacyPowerRequestFlags; // al
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // bl
  unsigned int SessionId; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _LIST_ENTRY *v21; // [rsp+30h] [rbp-38h] BYREF
  EXECUTION_STATE v22; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v2 = PreviousFlags;
  v22 = 0;
  P = 0LL;
  LOBYTE(PreviousFlags) = KeGetCurrentThread()->PreviousMode;
  if ( !(_BYTE)PreviousFlags )
    return -1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (NewFlags & 0x7FFFFFBC) != 0 || (NewFlags & 0x40) != 0 && (NewFlags & 0x80000000) == 0 )
    return -1073741811;
  v5 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v2 < 0x7FFFFFFF0000LL )
    v5 = (__int64)v2;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v21 = Blink;
  if ( Blink || (NewFlags & 0x80000000) == 0 )
    goto LABEL_11;
  UserPowerRequest = PoCaptureReasonContext(0LL, (__int64)PreviousFlags, 0LL, 1, 0LL, &P);
  if ( UserPowerRequest < 0 )
    return UserPowerRequest;
  v8 = P;
  UserPowerRequest = PopCreateUserPowerRequest((__int64 *)&v21, 0, (__int64)P);
  if ( UserPowerRequest >= 0 )
  {
    Blink = v21;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = v21;
LABEL_11:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, NewFlags, (int *)&v22);
    *v2 = v22;
    if ( (NewFlags & 0x80000000) == 0 )
    {
      PopDiagTraceSetThreadExecutionState(CurrentThread, NewFlags);
      if ( (NewFlags & 1) != 0 )
      {
        PopAcquirePolicyLock(v11);
        PopSystemRequiredSet();
        PopReleasePolicyLock(v13, v12);
      }
      if ( (NewFlags & 2) != 0 )
      {
        PoEnergyContextUpdateComponentPower(KeGetCurrentThread()->ApcState.Process, 12LL, 3LL);
        PopAcquirePolicyLock(v14);
        v17 = 0;
        if ( PopPlatformAoAc && !PopLidOpened )
          v17 = PopConsoleExternalDisplayConnected == 0;
        PopReleasePolicyLock(v16, v15);
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( SessionIsInteractive(SessionId) && !v17 )
        {
          LOBYTE(v20) = 1;
          PopNotifyConsoleUserPresent(v20, v19, 8LL);
        }
      }
    }
    else
    {
      PopApplyLegacyPowerRequestFlags(Blink, NewFlags, LegacyPowerRequestFlags);
    }
    return 0;
  }
  if ( v8 )
    PoDestroyReasonContext(v8);
  return UserPowerRequest;
}
