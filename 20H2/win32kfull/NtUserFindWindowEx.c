/*
 * XREFs of NtUserFindWindowEx @ 0x1C00AFBD0
 * Callers:
 *     <none>
 * Callees:
 *     _FindWindowEx @ 0x1C00B3640 (_FindWindowEx.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     LeaveEditionCrit @ 0x1C0129280 (LeaveEditionCrit.c)
 *     ?Feature_Servicing_Perf_FindWindowEx__private_IsEnabled@@YAHXZ @ 0x1C015C000 (-Feature_Servicing_Perf_FindWindowEx__private_IsEnabled@@YAHXZ.c)
 *     _FindWindowEx_Old @ 0x1C015C828 (_FindWindowEx_Old.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  _DWORD *v4; // r12
  unsigned int *v5; // r15
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r14
  struct _KTHREAD *CurrentThread; // r12
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v22; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  ULONG64 v27; // rbx
  int v28; // r12d
  ULONG64 v29; // r15
  ULONG64 v30; // rcx
  ULONG64 v31; // rcx
  __int64 *Window; // rax
  __int64 v33; // rbx
  int v35; // [rsp+30h] [rbp-68h]
  int v36; // [rsp+A0h] [rbp+8h]
  _DWORD *v39; // [rsp+B8h] [rbp+20h]

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
          v9 = gpAtomickCheckStacks;
          while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v8 << 6) + gpAtomickCheckStacks) )
          {
            v8 = (unsigned int)(v8 + 1);
            if ( (unsigned int)v8 >= gdwAtomicCheckLogSize )
              goto LABEL_10;
          }
          v11 = (unsigned __int64)(unsigned int)v8 << 6;
          *(_DWORD *)(v11 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
          *(_DWORD *)(gpAtomickCheckStacks + v11 + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(gpAtomickCheckStacks + v11 + 8) = (MEMORY[0xFFFFF78000000320]
                                                       * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v11 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
    }
  }
LABEL_10:
  if ( a1 == -3 )
  {
    v14 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v8)
      || (CurrentProcess = PsGetCurrentProcess(v18, v17, v19),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v22),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    if ( v16 )
    {
      v25 = *(_QWORD *)(v16 + 456);
      if ( v25 )
        v14 = *(_QWORD *)(v25 + 104);
    }
    v5 = a3;
    v4 = a4;
  }
  else if ( a1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
      goto LABEL_52;
  }
  else
  {
    v14 = 0LL;
  }
  if ( a2 )
  {
    a2 = ValidateHwnd(a2);
    if ( !a2 )
      goto LABEL_52;
  }
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v26 = *v5;
  v35 = *v5;
  v27 = *((_QWORD *)v5 + 1);
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_DWORD *)MmUserProbeAddress;
  v39 = v4;
  v28 = *v4;
  v29 = *((_QWORD *)v39 + 1);
  if ( (v27 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v27 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v30 = v27 + (unsigned __int16)v26 + 2LL;
    if ( v30 < MmUserProbeAddress && (unsigned __int16)v26 <= HIWORD(v35) )
    {
      if ( (v26 & 1) != 0 )
        goto LABEL_37;
      if ( v30 > v27 )
        goto LABEL_39;
    }
    if ( (v26 & 1) == 0 )
    {
LABEL_38:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_39;
    }
LABEL_37:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v26, v9, v10);
    goto LABEL_38;
  }
LABEL_39:
  if ( (v29 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v31 = (unsigned __int16)v28 + v29 + 2;
  if ( v31 < MmUserProbeAddress && (unsigned __int16)v28 <= HIWORD(v28) )
  {
    if ( (v28 & 1) != 0 )
    {
LABEL_46:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v26, v9, v10);
      goto LABEL_47;
    }
    if ( v31 > v29 )
      goto LABEL_48;
  }
  if ( (v28 & 1) != 0 )
    goto LABEL_46;
LABEL_47:
  *(_BYTE *)MmUserProbeAddress = 0;
LABEL_48:
  if ( (unsigned int)Feature_Servicing_Perf_FindWindowEx__private_IsEnabled() )
    Window = (__int64 *)FindWindowEx(v14, a2, v27, v29);
  else
    Window = (__int64 *)FindWindowEx_Old(v14, a2, v27, v29);
  if ( Window )
  {
    v33 = *Window;
    goto LABEL_54;
  }
LABEL_52:
  v33 = 0LL;
LABEL_54:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v9 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v12 = (unsigned int)v9;
            v13 = (unsigned __int64)(unsigned int)v9 << 6;
            if ( *(_DWORD *)(v13 + gpAtomickCheckStacks) == v36 )
              break;
            v9 = (unsigned int)(v9 + 1);
            if ( (unsigned int)v9 >= gdwAtomicCheckLogSize )
              goto LABEL_62;
          }
          v12 = (unsigned __int64)(unsigned int)v9 << 6;
          *(_DWORD *)(v12 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_62:
  LeaveEditionCrit(v13, v12, v9);
  return v33;
}
