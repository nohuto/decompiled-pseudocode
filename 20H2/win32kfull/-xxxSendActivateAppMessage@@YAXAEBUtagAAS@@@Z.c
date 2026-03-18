/*
 * XREFs of ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00C0738
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00C0444 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DF980 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C001B338 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C00C08F4 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 */

void __fastcall xxxSendActivateAppMessage(const struct tagAAS *a1)
{
  struct tagBWL *v2; // rax
  __int64 v3; // rcx
  struct tagBWL *v4; // rbp
  unsigned __int64 *i; // r14
  unsigned __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 *v13; // r15
  unsigned __int64 v14; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v21; // rcx
  __int64 CurrentThreadProcess; // rax
  _QWORD v23[4]; // [rsp+30h] [rbp-48h] BYREF
  char v24; // [rsp+80h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v24);
  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
    UserAtomicCheck::Detach((UserAtomicCheck *)&v24);
  v2 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 24LL) + 112LL), 2, 0LL);
  v4 = v2;
  if ( v2 )
  {
    for ( i = (unsigned __int64 *)((char *)v2 + 32); ; ++i )
    {
      v6 = *i;
      if ( *i == 1 )
        break;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v3)
        || (CurrentProcess = PsGetCurrentProcess(v9, v8, v10),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v21),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        PsGetThreadWin32Thread(CurrentThread);
      }
      v3 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v6 < *(_QWORD *)(gpsi + 8LL) )
      {
        v11 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v6 * LODWORD(gSharedInfo[2]);
        v12 = v6 >> 16;
        v13 = (unsigned __int64 *)HMPkheFromPhe(v11);
        if ( ((_WORD)v12 == *(_WORD *)(v11 + 26)
           || (_WORD)v12 == 0xFFFF
           || !(_WORD)v12 && PsGetCurrentProcessWow64Process(v3))
          && (*(_BYTE *)(v11 + 25) & 1) == 0
          && *(_BYTE *)(v11 + 24) == 1 )
        {
          v14 = *v13;
          if ( *v13 )
          {
            if ( *(_QWORD *)(v14 + 16) == *(_QWORD *)a1 )
            {
              if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
              {
                QueueNotifyTransformableMessage(
                  (struct tagWND *)v14,
                  28,
                  *((_DWORD *)a1 + 3) & 1,
                  *((_DWORD *)a1 + 2),
                  0,
                  0);
              }
              else
              {
                v23[2] = 0LL;
                ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                v23[0] = *(_QWORD *)(ThreadWin32Thread + 416);
                *(_QWORD *)(ThreadWin32Thread + 416) = v23;
                v23[1] = v14;
                HMLockObject(v14);
                xxxSendMessage(v14, 0x1Cu, *((_DWORD *)a1 + 3) & 1, (struct _LARGE_STRING *)*((unsigned int *)a1 + 2));
                ThreadUnlock1(v17, v16, v18);
              }
            }
          }
        }
      }
    }
    FreeHwndList(v4);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v24);
}
