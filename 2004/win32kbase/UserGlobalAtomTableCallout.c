/*
 * XREFs of UserGlobalAtomTableCallout @ 0x1C000F1EC
 * Callers:
 *     RealInternalRemoveProp @ 0x1C000EC30 (RealInternalRemoveProp.c)
 *     DeleteProperties @ 0x1C000F0D0 (DeleteProperties.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x1C00CC658 (ApiSetIsCurrentProcessWinstaLocked.c)
 *     IsProcessWin32kLockedOut @ 0x1C00CC700 (IsProcessWin32kLockedOut.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ApiSetEditionIsPerJobObjectAtomTableSupported @ 0x1C01C885C (ApiSetEditionIsPerJobObjectAtomTableSupported.c)
 */

__int64 UserGlobalAtomTableCallout()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // eax
  __int64 CurrentProcess; // rax
  __int64 ProcessJob; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // edi
  int v13; // eax
  __int64 v14; // rax
  __int64 ProcessWin32WindowStation; // rdx
  int v16; // eax
  _QWORD *i; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0LL;
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v5 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0x20000000) != 0 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 768LL);
      v6 = *(_DWORD *)(v4 + 24) & 0x20;
    }
    else
    {
      v6 = 0;
    }
    if ( v6 )
      return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 416) + 768LL) + 16LL);
  }
  CurrentProcess = PsGetCurrentProcess(v4, v3);
  ProcessJob = PsGetProcessJob(CurrentProcess);
  v11 = ProcessJob;
  if ( !v5 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
  {
    if ( (unsigned int)ApiSetEditionIsPerJobObjectAtomTableSupported() )
    {
      for ( i = (_QWORD *)gpJobsList; i && i[1] != v11; i = (_QWORD *)*i )
        ;
      return i[2];
    }
    if ( (unsigned __int8)IsProcessWin32kLockedOut(-1LL) )
    {
      UserSetLastError(5LL);
      return v0;
    }
  }
  v12 = -1073741637;
  if ( qword_1C0252968 )
    v13 = qword_1C0252968();
  else
    v13 = -1073741637;
  if ( v13 >= 0 )
  {
    v14 = PsGetCurrentProcess(v10, v9);
    ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v14);
    v16 = qword_1C0252970 ? qword_1C0252970(CurrentThread, ProcessWin32WindowStation, 32LL, &v23, 1) : -1073741637;
    if ( v16 >= 0 )
      return *(_QWORD *)(v23 + 168);
  }
  if ( (unsigned __int8)IsProcessWin32kLockedOut(-1LL)
    || !PsGetCurrentProcessWin32Process(v20, v19, v21, v22)
    || !(unsigned int)ApiSetIsCurrentProcessWinstaLocked() )
  {
    if ( qword_1C0252978 )
      v12 = qword_1C0252978();
    if ( v12 >= 0 && qword_1C0252980 )
      return qword_1C0252980();
  }
  return v0;
}
