/*
 * XREFs of PsInvokeWin32Callout @ 0x140602AD0
 * Callers:
 *     PspJobDelete @ 0x14027ABB0 (PspJobDelete.c)
 *     SeCaptureAtomTableCallout @ 0x1403477B0 (SeCaptureAtomTableCallout.c)
 *     KiSystemCall64 @ 0x1404085C0 (KiSystemCall64.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x14057D26C (PspSetProcessTimerDelayForWin32.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x140658924 (PspAssignProcessToJob.c)
 *     PopInvokeWin32Callout @ 0x1406A4E40 (PopInvokeWin32Callout.c)
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     KeUserModeCallback @ 0x1406AF450 (KeUserModeCallback.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     PsConvertToGuiThread @ 0x1406EFB30 (PsConvertToGuiThread.c)
 *     NtQueryInformationAtom @ 0x1406F0140 (NtQueryInformationAtom.c)
 *     NtAddAtomEx @ 0x1406F03B0 (NtAddAtomEx.c)
 *     PsThawProcess @ 0x1406F0A90 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x1406F0C08 (PsFreezeProcess.c)
 *     ExpWin32OpenProcedure @ 0x1406F1A00 (ExpWin32OpenProcedure.c)
 *     NtDeleteAtom @ 0x1406F1AE0 (NtDeleteAtom.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1406F2140 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x1406F2AF0 (ExpWin32CloseProcedure.c)
 *     ExpWin32ParseProcedure @ 0x1406FC610 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x140702B70 (ExpWin32DeleteProcedure.c)
 *     PfpQueryGpuUtilization @ 0x140709CBC (PfpQueryGpuUtilization.c)
 *     PspShutdownCsrProcess @ 0x140903280 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140905D60 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14024C9A0 (MmSessionGetWin32Callouts.c)
 *     ExReferenceCallBackBlock @ 0x14024C9E0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14024CAA0 (ExDereferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x14027D4C0 (MmGetSessionId.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExCallCallBack @ 0x1406027CC (ExCallCallBack.c)
 *     ExCallSessionCallBack @ 0x1406A507C (ExCallSessionCallBack.c)
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
