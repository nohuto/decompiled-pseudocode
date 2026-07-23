/*
 * XREFs of PsInvokeWin32Callout @ 0x140628330
 * Callers:
 *     SeCaptureAtomTableCallout @ 0x140318E80 (SeCaptureAtomTableCallout.c)
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     KiSystemCall64 @ 0x14040F000 (KiSystemCall64.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x140580C9C (PspSetProcessTimerDelayForWin32.c)
 *     PspAssignProcessToJob @ 0x14062CE24 (PspAssignProcessToJob.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     KeUserModeCallback @ 0x1406814B0 (KeUserModeCallback.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     NtDeleteAtom @ 0x14068CE50 (NtDeleteAtom.c)
 *     PsConvertToGuiThread @ 0x1406C2FC0 (PsConvertToGuiThread.c)
 *     NtQueryInformationAtom @ 0x1406C3BC0 (NtQueryInformationAtom.c)
 *     NtAddAtomEx @ 0x1406C3EA0 (NtAddAtomEx.c)
 *     ExpWin32OpenProcedure @ 0x1406C4FA0 (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1406C53E0 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x1406C5ED0 (ExpWin32CloseProcedure.c)
 *     ExpWin32ParseProcedure @ 0x1406CEC70 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x1406D5B70 (ExpWin32DeleteProcedure.c)
 *     PfpQueryGpuUtilization @ 0x1406DC20C (PfpQueryGpuUtilization.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     PsThawProcess @ 0x14071C6B0 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x14071C828 (PsFreezeProcess.c)
 *     PopInvokeWin32Callout @ 0x14071FDDC (PopInvokeWin32Callout.c)
 *     PspShutdownCsrProcess @ 0x140908EA0 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x14090B980 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x140233650 (MmSessionGetWin32Callouts.c)
 *     ExReferenceCallBackBlock @ 0x140233690 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140233750 (ExDereferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x140233F30 (MmGetSessionId.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExCallCallBack @ 0x14062802C (ExCallCallBack.c)
 *     ExCallSessionCallBack @ 0x14062BF24 (ExCallSessionCallBack.c)
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
