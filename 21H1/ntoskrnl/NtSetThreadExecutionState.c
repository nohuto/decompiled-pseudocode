/*
 * XREFs of NtSetThreadExecutionState @ 0x1406FEF30
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     PopGetLegacyPowerRequestFlags @ 0x14033C904 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14033C958 (PopApplyLegacyPowerRequestFlags.c)
 *     PoDestroyReasonContext @ 0x14033D208 (PoDestroyReasonContext.c)
 *     SessionIsInteractive @ 0x14033DB1C (SessionIsInteractive.c)
 *     PoCaptureReasonContext @ 0x14033DF4C (PoCaptureReasonContext.c)
 *     PopSystemRequiredSet @ 0x1403A4810 (PopSystemRequiredSet.c)
 *     PoEnergyContextUpdateComponentPower @ 0x14065D1C8 (PoEnergyContextUpdateComponentPower.c)
 *     PopCreateUserPowerRequest @ 0x1406FF730 (PopCreateUserPowerRequest.c)
 *     PopNotifyConsoleUserPresent @ 0x14075E690 (PopNotifyConsoleUserPresent.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x14075EB1C (PopDiagTraceSetThreadExecutionState.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

NTSTATUS __cdecl NtSetThreadExecutionState(EXECUTION_STATE NewFlags, EXECUTION_STATE *PreviousFlags)
{
  EXECUTION_STATE *v2; // r12
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  NTSTATUS v7; // ebx
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
  v7 = PoCaptureReasonContext(0LL, (__int64)PreviousFlags, 0LL, 1, 0LL, &P);
  if ( v7 < 0 )
    return v7;
  v8 = P;
  v7 = PopCreateUserPowerRequest(&v21, 0LL, P);
  if ( v7 >= 0 )
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
        PoEnergyContextUpdateComponentPower(&KeGetCurrentThread()->ApcState.Process->Header.Lock, 12, 3LL);
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
  return v7;
}
