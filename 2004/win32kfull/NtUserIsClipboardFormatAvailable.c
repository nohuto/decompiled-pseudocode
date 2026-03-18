/*
 * XREFs of NtUserIsClipboardFormatAvailable @ 0x1C005A3C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C021F7E8 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall NtUserIsClipboardFormatAvailable(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *ThreadWin32Thread; // rax
  int v9; // eax
  __int64 v10; // rbp
  BOOL v11; // r15d
  struct _KTHREAD *v12; // r12
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // r14
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _KTHREAD *v23; // r15
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // rax
  __int64 v29; // rbx
  int v30; // eax
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v33; // r8d
  _DWORD *v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v42; // rax
  int v43; // ebx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  NTSTATUS v47; // ecx
  ULONG v48; // eax
  __int64 v49; // rax
  int v50; // ebx
  __int64 v51; // rax
  __int64 v53; // rax
  int v54; // [rsp+68h] [rbp+10h] BYREF
  int v55; // [rsp+6Ch] [rbp+14h]
  __int64 v56; // [rsp+70h] [rbp+18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v9 = *(_DWORD *)(v4 + 480);
  v10 = 0LL;
  v11 = (v9 & 8) != 0;
  v12 = KeGetCurrentThread();
  ThreadProcess = PsGetThreadProcess(v12);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v15 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v42 = PsGetCurrentProcess(v17, v16, v18),
        v43 = PsGetProcessSessionIdEx(v42),
        v44 = PsGetCurrentThreadProcess(),
        v43 == (unsigned int)PsGetProcessSessionIdEx(v44)) )
  {
    v19 = (__int64 *)PsGetThreadWin32Thread(v12);
    if ( v19 )
      v15 = *v19;
  }
  if ( !ProcessWin32Process )
    goto LABEL_44;
  if ( v11
    && v15
    && (v45 = *(_QWORD *)(v15 + 448)) != 0
    && *(_QWORD *)(ProcessWin32Process + 664) != *(_QWORD *)(v45 + 40)
    || (v10 = *(_QWORD *)(ProcessWin32Process + 664)) == 0 )
  {
    if ( v15 )
    {
      v46 = *(_QWORD *)(v15 + 448);
      if ( v46 )
      {
        v10 = *(_QWORD *)(v46 + 40);
        if ( !(unsigned int)AccessCheckObject(v10, 4LL, 0LL, WinStaMapping) )
          goto LABEL_47;
      }
    }
    if ( v10 )
      goto LABEL_11;
LABEL_44:
    v47 = -1073741275;
LABEL_45:
    v48 = RtlNtStatusToDosError(v47);
    UserSetLastError(v48);
    goto LABEL_23;
  }
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(ProcessWin32Process + 680), 4u) )
  {
    UserSetLastError(5LL);
LABEL_47:
    v47 = -1073741790;
    goto LABEL_45;
  }
LABEL_11:
  if ( !gbLockScreenActive )
  {
    v23 = KeGetCurrentThread();
    v24 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v49 = PsGetCurrentProcess(v26, v25, v27),
          v50 = PsGetProcessSessionIdEx(v49),
          v51 = PsGetCurrentThreadProcess(),
          v50 == (unsigned int)PsGetProcessSessionIdEx(v51)) )
    {
      v28 = (__int64 *)PsGetThreadWin32Thread(v23);
      if ( v28 )
        v24 = *v28;
    }
    if ( *(PVOID *)(v24 + 448) != grpdeskLogon )
    {
      if ( a1 )
      {
        v29 = *(_QWORD *)(v10 + 128);
        if ( v29 )
        {
          v30 = *(_DWORD *)(v10 + 136);
          if ( v30 )
          {
            while ( 1 )
            {
              --v30;
              if ( *(_DWORD *)v29 == a1 )
                break;
              v29 += 32LL;
              if ( !v30 )
                goto LABEL_21;
            }
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
            v33 = 0;
            v34 = &unk_1C032B048;
            v35 = *(_QWORD *)(CurrentProcessWin32Process + 880);
            v36 = *(_QWORD *)(v29 + 20);
            v56 = v35;
            do
            {
              if ( (unsigned int)v36 >= *v34 && (unsigned int)v36 < *((_DWORD *)&gaClipILDef + 6 * v33 + 8) )
                break;
              ++v33;
              v34 += 6;
            }
            while ( v33 < 5 );
            if ( v33 > 4 )
            {
LABEL_51:
              v54 = dword_1C032B0C0;
              v38 = dword_1C032B0C4;
            }
            else
            {
              while ( 1 )
              {
                v37 = v33 + 1;
                if ( *((_DWORD *)&gaClipILDef + 6 * v37 + 5) )
                  break;
                ++v33;
                if ( (unsigned int)v37 >= 5 )
                  goto LABEL_51;
              }
              v54 = *((_DWORD *)&gaClipILDef + 6 * v33 + 2);
              v38 = *((_DWORD *)&gaClipILDef + 6 * v33 + 3);
            }
            v55 = v38;
            if ( (unsigned __int8)CheckAccess(&v54, &v56) )
              goto LABEL_22;
            if ( !(unsigned int)IsFmtBlocked(a1) )
              goto LABEL_22;
            v53 = PsGetCurrentProcessWin32Process(v21);
            EtwTraceUIPIClipboardError(0LL, v53, a1, *(_QWORD *)(v29 + 20));
          }
        }
      }
LABEL_21:
      v29 = 0LL;
LABEL_22:
      LOBYTE(v3) = v29 != 0;
    }
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v21, v20, v22);
  return v3;
}
