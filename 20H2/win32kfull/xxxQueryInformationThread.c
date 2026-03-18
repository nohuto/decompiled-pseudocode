/*
 * XREFs of xxxQueryInformationThread @ 0x1C007CDC8
 * Callers:
 *     NtUserQueryInformationThread @ 0x1C007CC00 (NtUserQueryInformationThread.c)
 * Callees:
 *     ?IsProcessUserService@@YAHQEAU_EPROCESS@@@Z @ 0x1C007D1EC (-IsProcessUserService@@YAHQEAU_EPROCESS@@@Z.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C007DBE0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C007DE70 (xxxSetCsrssThreadDesktop.c)
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C008E314 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     LockW32Thread @ 0x1C00BAF00 (LockW32Thread.c)
 *     IsThreadHung @ 0x1C00C171C (IsThreadHung.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     GetTaskName @ 0x1C01D27C4 (GetTaskName.c)
 */

NTSTATUS __fastcall xxxQueryInformationThread(void *a1, int a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r13
  struct _KTHREAD *v7; // r12
  __int64 ThreadWin32Thread; // r14
  __int64 ProcessWin32Process; // rbx
  NTSTATUS result; // eax
  NTSTATUS v11; // r15d
  PEPROCESS ThreadProcess; // rax
  unsigned int v13; // r13d
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rax
  PEPROCESS v17; // rbx
  bool v18; // bl
  PEPROCESS v19; // rax
  struct _KPROCESS *v20; // rax
  __int64 v21; // rax
  struct _KTHREAD *v22; // rcx
  unsigned int v23; // r14d
  int v24; // eax
  unsigned __int64 v25; // rcx
  __int64 i; // rbx
  HANDLE ThreadId; // rcx
  __int64 v28; // rax
  struct _KTHREAD *v29; // [rsp+30h] [rbp-40h]
  PVOID v30; // [rsp+38h] [rbp-38h] BYREF
  PVOID Object; // [rsp+40h] [rbp-30h] BYREF
  __int64 v32; // [rsp+48h] [rbp-28h] BYREF
  __int128 v33; // [rsp+50h] [rbp-20h] BYREF
  __int64 v34; // [rsp+60h] [rbp-10h]

  v4 = 0;
  v5 = a4;
  v29 = 0LL;
  v7 = 0LL;
  ThreadWin32Thread = 0LL;
  ProcessWin32Process = 0LL;
  if ( a2 == 11 )
  {
    v30 = 0LL;
    v11 = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &v30, 0LL);
    v29 = (struct _KTHREAD *)v30;
    if ( v11 < 0 )
      return v11;
    if ( (unsigned int)PsGetProcessSessionId(v30) == gSessionId )
      ProcessWin32Process = PsGetProcessWin32Process(v29);
  }
  else
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
    v7 = (struct _KTHREAD *)Object;
    v11 = result;
    if ( result < 0 )
      return result;
    ThreadProcess = PsGetThreadProcess((PETHREAD)Object);
    if ( (unsigned int)PsGetProcessSessionId(ThreadProcess) == gSessionId )
      ThreadWin32Thread = W32GetThreadWin32Thread(v7);
  }
  switch ( a2 )
  {
    case 0:
      v13 = a3[3];
      *(_OWORD *)a3 = 0LL;
      if ( ThreadWin32Thread )
      {
        v14 = *(_QWORD *)(ThreadWin32Thread + 456);
        if ( v14 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 64LL) & 4) == 0 )
          {
            v15 = *(__int64 **)(*(_QWORD *)(v14 + 8) + 24LL);
            if ( v15 )
              v16 = *v15;
            else
              v16 = 0LL;
            *(_QWORD *)a3 = v16;
          }
        }
      }
      if ( PsGetThreadProcessId(v7) != (HANDLE)gpidLogon && PsGetThreadProcessId(v7) != (HANDLE)gpidLogonUI )
      {
        v17 = PsGetThreadProcess(v7);
        AutoSharedPushLock::AutoSharedPushLock(
          (AutoSharedPushLock *)&v32,
          (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
        v18 = UmfdHostLifeTimeManager::s_UmfdHostProcess == v17;
        if ( v32 )
        {
          GreReleasePushLockShared(v32);
          KeLeaveCriticalRegion();
        }
        if ( !v18 )
        {
          v19 = PsGetThreadProcess(v7);
          if ( !(unsigned int)IsProcessDwm(v19) )
          {
            v20 = PsGetThreadProcess(v7);
            if ( !(unsigned int)IsProcessUserService(v20) )
            {
              if ( !ThreadWin32Thread || !*(_QWORD *)(ThreadWin32Thread + 456) )
              {
                a3[2] = 2;
LABEL_23:
                if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 896) )
                  a3[3] |= 1u;
                if ( (a3[3] & 1) == 0 )
                  goto LABEL_27;
                if ( a3[2] )
                  goto LABEL_27;
                v33 = 0LL;
                v34 = 0LL;
                if ( *(_QWORD *)(gptiCurrent + 456LL) == *(_QWORD *)(ThreadWin32Thread + 456) )
                  goto LABEL_27;
                LockW32Thread(ThreadWin32Thread, &v33);
                if ( *(_QWORD *)(gptiCurrent + 456LL) )
                  v11 = xxxRestoreCsrssThreadDesktop(a3 + 4, 0LL);
                if ( v11 >= 0 )
                  v11 = xxxSetCsrssThreadDesktop(*(PVOID *)(ThreadWin32Thread + 456));
                PopAndFreeW32ThreadLock(&v33);
                goto LABEL_51;
              }
              v21 = *(_QWORD *)(ThreadWin32Thread + 424);
              if ( !v21 || *(char *)(v21 + 820) >= 0 || (v13 & 0x800) != 0 )
                goto LABEL_23;
            }
          }
        }
      }
      a3[2] = 1;
      goto LABEL_23;
    case 1:
      if ( ThreadWin32Thread )
      {
        *a3 = *(_DWORD *)(ThreadWin32Thread + 488);
        goto LABEL_27;
      }
      goto LABEL_69;
    case 2:
      if ( ThreadWin32Thread )
      {
        GetTaskName(ThreadWin32Thread, a3, (unsigned int)v5);
        goto LABEL_27;
      }
LABEL_69:
      v11 = -1073741816;
      goto LABEL_27;
    case 3:
      *(_OWORD *)a3 = 0LL;
      goto LABEL_27;
    case 4:
      if ( ThreadWin32Thread )
        v4 = IsThreadHung(ThreadWin32Thread, *a3);
      *a3 = v4;
      goto LABEL_27;
    case 11:
      v23 = 0;
      if ( (unsigned int)v5 < 8 )
      {
        v11 = -1073741811;
      }
      else if ( ProcessWin32Process && (v24 = *(_DWORD *)(ProcessWin32Process + 384)) != 0 )
      {
        v25 = 8LL * (unsigned int)(v24 + 1);
        if ( v25 > v5 )
        {
          *(_QWORD *)a3 = v25;
          v11 = -1073741801;
        }
        else
        {
          for ( i = *(_QWORD *)(ProcessWin32Process + 320); i; i = *(_QWORD *)(i + 664) )
          {
            ThreadId = PsGetThreadId(*(PETHREAD *)i);
            v28 = v23++;
            *(_QWORD *)&a3[2 * v28] = ThreadId;
          }
          *(_QWORD *)&a3[2 * v23] = 0LL;
        }
      }
      else
      {
        *(_QWORD *)a3 = 0LL;
      }
      goto LABEL_57;
  }
  v11 = -1073741821;
LABEL_51:
  if ( a2 == 11 )
  {
LABEL_57:
    v22 = v29;
    goto LABEL_28;
  }
LABEL_27:
  v22 = v7;
LABEL_28:
  ObfDereferenceObject(v22);
  return v11;
}
