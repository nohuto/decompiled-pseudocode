/*
 * XREFs of NtUserFindWindowEx @ 0x1C006B6E0
 * Callers:
 *     <none>
 * Callees:
 *     _FindWindowEx @ 0x1C006BAD0 (_FindWindowEx.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     LeaveEditionCrit @ 0x1C01273E0 (LeaveEditionCrit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, unsigned int *a3, ULONG64 a4)
{
  ULONG64 v4; // r12
  unsigned int *v5; // r15
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r14
  struct _KTHREAD *CurrentThread; // r12
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v21; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  ULONG64 v26; // r15
  int v27; // ebx
  ULONG64 v28; // r12
  ULONG64 v29; // rcx
  ULONG64 v30; // rcx
  __int64 *Window; // rax
  __int64 v32; // rbx
  int v34; // [rsp+30h] [rbp-68h]
  int v35; // [rsp+34h] [rbp-64h]
  int v36; // [rsp+A0h] [rbp+8h]

  v4 = a4;
  v5 = a3;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      ++gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v36 = ++gdwAtomicCheckSerial;
        v8 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v8 << 6) + gpAtomickCheckStacks) )
          {
            v8 = (unsigned int)(v8 + 1);
            if ( (unsigned int)v8 >= gdwAtomicCheckLogSize )
              goto LABEL_9;
          }
          v9 = (unsigned __int64)(unsigned int)v8 << 6;
          *(_DWORD *)(v9 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
          *(_DWORD *)(gpAtomickCheckStacks + v9 + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(gpAtomickCheckStacks + v9 + 8) = (MEMORY[0xFFFFF78000000320]
                                                      * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v9 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
    }
  }
LABEL_9:
  if ( a1 == -3 )
  {
    LODWORD(v13) = 0;
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v8)
      || (CurrentProcess = PsGetCurrentProcess(v17, v16, v18),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v21),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v15 = *ThreadWin32Thread;
    }
    if ( v15 )
    {
      v24 = *(_QWORD *)(v15 + 448);
      if ( v24 )
        v13 = *(_QWORD *)(v24 + 104);
    }
    v5 = a3;
    v4 = a4;
  }
  else if ( a1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
      goto LABEL_48;
  }
  else
  {
    LODWORD(v13) = 0;
  }
  if ( a2 )
  {
    a2 = ValidateHwnd(a2);
    if ( !a2 )
      goto LABEL_48;
  }
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v25 = *v5;
  v34 = *v5;
  v26 = *((_QWORD *)v5 + 1);
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v27 = *(_DWORD *)v4;
  v35 = *(_DWORD *)v4;
  v28 = *(_QWORD *)(v4 + 8);
  if ( (v26 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v26 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v29 = v26 + (unsigned __int16)v25 + 2LL;
    if ( v29 < MmUserProbeAddress && (unsigned __int16)v25 <= HIWORD(v34) )
    {
      if ( (v25 & 1) != 0 )
        goto LABEL_36;
      if ( v29 > v26 )
        goto LABEL_38;
    }
    if ( (v25 & 1) == 0 )
    {
LABEL_37:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_38;
    }
LABEL_36:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v25);
    goto LABEL_37;
  }
LABEL_38:
  if ( (v28 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v30 = v28 + (unsigned __int16)v27 + 2LL;
  if ( v30 < MmUserProbeAddress && (unsigned __int16)v27 <= HIWORD(v35) )
  {
    if ( (v27 & 1) != 0 )
    {
LABEL_45:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v25);
      goto LABEL_46;
    }
    if ( v30 > v28 )
      goto LABEL_47;
  }
  if ( (v27 & 1) != 0 )
    goto LABEL_45;
LABEL_46:
  *(_BYTE *)MmUserProbeAddress = 0;
LABEL_47:
  Window = (__int64 *)FindWindowEx(v13, a2, v26, v28);
  if ( Window )
  {
    v32 = *Window;
    goto LABEL_50;
  }
LABEL_48:
  v32 = 0LL;
LABEL_50:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v12 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v10 = (unsigned int)v12;
            v11 = (unsigned __int64)(unsigned int)v12 << 6;
            if ( *(_DWORD *)(v11 + gpAtomickCheckStacks) == v36 )
              break;
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 >= gdwAtomicCheckLogSize )
              goto LABEL_58;
          }
          v10 = (unsigned __int64)(unsigned int)v12 << 6;
          *(_DWORD *)(v10 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_58:
  LeaveEditionCrit(v11, v10, v12);
  return v32;
}
