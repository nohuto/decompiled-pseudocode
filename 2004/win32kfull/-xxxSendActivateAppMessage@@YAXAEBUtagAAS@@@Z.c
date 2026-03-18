/*
 * XREFs of ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00336A4
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0037E18 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E0640 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0033860 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F0578 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

void __fastcall xxxSendActivateAppMessage(const struct tagAAS *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned __int64 *i; // r14
  unsigned __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 *v10; // r15
  __int64 v11; // rbx
  int v12; // r8d
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD v20[4]; // [rsp+30h] [rbp-48h] BYREF
  char v21; // [rsp+80h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21);
  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
    UserAtomicCheck::Detach((UserAtomicCheck *)&v21);
  v2 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 24LL) + 112LL));
  v3 = v2;
  if ( v2 )
  {
    for ( i = (unsigned __int64 *)(v2 + 32); ; ++i )
    {
      v5 = *i;
      if ( *i == 1 )
        break;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (CurrentProcess = PsGetCurrentProcess(),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        PsGetThreadWin32Thread(CurrentThread);
      }
      if ( (unsigned __int64)(unsigned __int16)v5 < *(_QWORD *)(gpsi + 8LL) )
      {
        v7 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v5 * LODWORD(gSharedInfo[2]);
        v8 = v5 >> 16;
        v10 = (__int64 *)HMPkheFromPhe(v7);
        if ( ((_WORD)v8 == *(_WORD *)(v7 + 26)
           || (_WORD)v8 == 0xFFFF
           || !(_WORD)v8 && PsGetCurrentProcessWow64Process(v9))
          && (*(_BYTE *)(v7 + 25) & 1) == 0
          && *(_BYTE *)(v7 + 24) == 1 )
        {
          v11 = *v10;
          if ( *v10 )
          {
            if ( *(_QWORD *)(v11 + 16) == *(_QWORD *)a1 )
            {
              v12 = *((_DWORD *)a1 + 3);
              if ( (v12 & 2) != 0 )
              {
                QueueNotifyTransformableMessage((struct tagWND *)v11, 0x1Cu, v12 & 1, *((unsigned int *)a1 + 2), 0, 0);
              }
              else
              {
                v20[2] = 0LL;
                ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                v20[0] = *(_QWORD *)(ThreadWin32Thread + 408);
                *(_QWORD *)(ThreadWin32Thread + 408) = v20;
                v20[1] = v11;
                HMLockObject(v11);
                xxxSendMessage(v11, 28LL, *((_DWORD *)a1 + 3) & 1, *((unsigned int *)a1 + 2));
                ThreadUnlock1(v15, v14, v16);
              }
            }
          }
        }
      }
    }
    FreeHwndList(v3);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v21);
}
