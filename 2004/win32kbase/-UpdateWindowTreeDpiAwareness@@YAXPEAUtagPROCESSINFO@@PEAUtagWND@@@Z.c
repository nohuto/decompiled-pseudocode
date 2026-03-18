/*
 * XREFs of ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C002068C
 * Callers:
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0020350 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C0020888 (HMValidateSharedHandleNoRip.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UpdateWindowTreeDpiAwareness(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  int v4; // eax
  __int64 v5; // rsi
  unsigned __int64 *i; // r14
  unsigned __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // r15
  unsigned __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  if ( qword_1C0252B70 )
    v4 = qword_1C0252B70();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C0252B78 )
    v5 = qword_1C0252B78(a2, 1LL);
  else
    v5 = 0LL;
  if ( v5 )
  {
    for ( i = (unsigned __int64 *)(v5 + 32); ; ++i )
    {
      v7 = *i;
      if ( *i == 1 )
        break;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (CurrentProcess = PsGetCurrentProcess(v10, v9),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        PsGetThreadWin32Thread(CurrentThread);
      }
      if ( (unsigned __int64)(unsigned __int16)v7 < *((_QWORD *)gpsi + 1) )
      {
        v11 = (char *)qword_1C024AD48 + (unsigned int)(unsigned __int16)v7 * dword_1C024AD50;
        GetDomainLockRef(14LL);
        v13 = gpKernelHandleTable;
        v14 = v7 >> 16;
        v15 = 3LL * (unsigned int)((v11 - (char *)qword_1C024AD48) >> 5);
        if ( ((_WORD)v14 == *((_WORD *)v11 + 13)
           || (_WORD)v14 == 0xFFFF
           || !(_WORD)v14 && PsGetCurrentProcessWow64Process(v12))
          && (v11[25] & 1) == 0
          && v11[24] == 1 )
        {
          v16 = v13[v15];
          if ( v16 )
          {
            if ( qword_1C0252B80 )
              v17 = qword_1C0252B80();
            else
              v17 = -1073741637;
            if ( v17 >= 0 && *(struct tagPROCESSINFO **)(*(_QWORD *)(v16 + 16) + 416LL) == a1 )
            {
              *(_DWORD *)(*(_QWORD *)(v16 + 40) + 288LL) = *((_DWORD *)a1 + 70);
              v18 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v16 + 40) + 256LL));
              if ( qword_1C0252B88 )
                qword_1C0252B88(v16, v18);
            }
          }
        }
      }
    }
    if ( qword_1C0252208 )
      qword_1C0252208(v5);
  }
}
