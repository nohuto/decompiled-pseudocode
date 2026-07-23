/*
 * XREFs of PsInvokeWin32Callout @ 0x140637B10
 * Callers:
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 *     SeCaptureAtomTableCallout @ 0x14030AEB0 (SeCaptureAtomTableCallout.c)
 *     KiSystemCall64 @ 0x1404072C0 (KiSystemCall64.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x14057CC2C (PspSetProcessTimerDelayForWin32.c)
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     NtDeleteAtom @ 0x1405D5AE0 (NtDeleteAtom.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x1406741DC (PspAssignProcessToJob.c)
 *     PsConvertToGuiThread @ 0x1406CE8C0 (PsConvertToGuiThread.c)
 *     NtQueryInformationAtom @ 0x1406CEE40 (NtQueryInformationAtom.c)
 *     NtAddAtomEx @ 0x1406CF0B0 (NtAddAtomEx.c)
 *     PsThawProcess @ 0x1406CF790 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x1406CF908 (PsFreezeProcess.c)
 *     ExpWin32OpenProcedure @ 0x1406D0950 (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1406D0DF0 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x1406D1B30 (ExpWin32CloseProcedure.c)
 *     ExpWin32ParseProcedure @ 0x1406D8A60 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x1406DFDE0 (ExpWin32DeleteProcedure.c)
 *     PfpQueryGpuUtilization @ 0x1406E5F9C (PfpQueryGpuUtilization.c)
 *     KeUserModeCallback @ 0x140705310 (KeUserModeCallback.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     PopInvokeWin32Callout @ 0x140710A4C (PopInvokeWin32Callout.c)
 *     PspShutdownCsrProcess @ 0x140902470 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140904A80 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     MmGetSessionId @ 0x1402041B0 (MmGetSessionId.c)
 *     MmSessionGetWin32Callouts @ 0x1402A59D0 (MmSessionGetWin32Callouts.c)
 *     ExReferenceCallBackBlock @ 0x1402A5A10 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1402A5AD0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExCallCallBack @ 0x14063780C (ExCallCallBack.c)
 *     ExCallSessionCallBack @ 0x140710C88 (ExCallSessionCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  _RTL_RUN_ONCE *Win32Callouts; // rbp
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  int v10; // ebx
  int v12; // r8d
  _KPROCESS *Process; // rcx
  int SessionId; // eax
  _DWORD *v15; // r9
  _RTL_RUN_ONCE *v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // [rsp+40h] [rbp+18h] BYREF

  v18 = 0;
  v4 = a4;
  v5 = a1;
  if ( !a3 )
  {
    Win32Callouts = MmSessionGetWin32Callouts();
    v8 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
    v9 = v8;
    if ( v8 )
    {
      v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v8[1].Count)(v8[2].Count, v5, a2);
      ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v9);
      return (unsigned int)v10;
    }
    return (unsigned int)-1073741811;
  }
  v12 = a3 - 1;
  if ( v12 )
  {
    if ( v12 != 1 )
      return (unsigned int)-1073741811;
    v17 = 0LL;
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    {
      SessionId = MmGetSessionId((__int64)Process);
      if ( *v15 == SessionId )
      {
        v16 = MmSessionGetWin32Callouts();
        return (unsigned int)ExCallCallBack((signed __int64 *)v16, v5, a2);
      }
    }
    v17 = v4;
  }
  v10 = ExCallSessionCallBack(v17, v5, a2, &v18);
  if ( v10 >= 0 )
    return v18;
  return (unsigned int)v10;
}
