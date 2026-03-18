/*
 * XREFs of ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C007F5A4
 * Callers:
 *     xxxSetInformationThread @ 0x1C007DA60 (xxxSetInformationThread.c)
 * Callees:
 *     IsPrivileged @ 0x1C001A7F0 (IsPrivileged.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x1C007F83C (-NotifyLogon@@YAHK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InitiateShutdownW(PETHREAD Thread, unsigned int *a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  unsigned int v7; // ebx
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rbp
  __int64 v11; // rsi
  int v12; // ebx
  int v13; // ecx
  __int64 result; // rax
  __int64 ThreadWin32Thread; // rdi
  char v16; // di
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = 0LL;
  GetProcessLuid(Thread, &v17, a3, a4);
  v6 = *a2;
  if ( v17 == __PAIR64__(luidSystem[1], luidSystem[0]) )
    v7 = v6 | 0x100;
  else
    v7 = v6 & 0xFFFFFEFF;
  ThreadProcess = PsGetThreadProcess(Thread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v10 = ProcessWin32Process;
  if ( !ProcessWin32Process )
    return 3221225480LL;
  v11 = *(_QWORD *)(ProcessWin32Process + 664);
  if ( PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon )
    goto LABEL_5;
  v7 &= ~0x200u;
  *a2 = v7;
  if ( !v11 )
    return 3221225480LL;
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v10 + 680), 0x40u) )
    return 3221225506LL;
  if ( (v7 & 1) != 0 )
  {
    if ( !(unsigned int)IsPrivileged(&RequiredPrivileges) )
      return 3221225569LL;
  }
  else if ( (*(_DWORD *)(v11 + 64) & 4) != 0 )
  {
    return 3221225488LL;
  }
LABEL_5:
  if ( gdwThreadEndSession )
  {
    if ( v17 == *(_QWORD *)(grpwinstaLogoff + 176LL) || gpidEndSession == (void *)gpidLogon )
    {
      v16 = v7 & ~(_BYTE)gdwShutdownFlags & 7;
      if ( !v16 || (unsigned int)PsGetCurrentThreadId() == gdwThreadEndSession )
        return 259LL;
      if ( (v7 & 1) == 0 && v11 != grpwinstaLogoff )
        return 2147483665LL;
      if ( (v16 & 4) == 0 )
        return 259LL;
    }
    return 3221226029LL;
  }
  else
  {
    if ( PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon )
    {
LABEL_7:
      v12 = v7 | 0x200;
      *a2 = v12;
      gdwShutdownFlags = v12;
      gdwThreadEndSession = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(gpsi + 2236LL) |= 1u;
      gpidEndSession = (void *)PsGetCurrentThreadProcessId();
      LockObjectAssignment(grpwinstaLogoff, v11);
      v13 = *(_DWORD *)(v11 + 64);
      *(_QWORD *)(v11 + 176) = v17;
      gdwLocks = v13 & 3;
      result = 0LL;
      *(_DWORD *)(v11 + 64) = v13 | 0xA;
      return result;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread(Thread);
    if ( (v7 & 0x8000) != 0 )
    {
      v7 &= ~0x8000u;
      *a2 = v7;
    }
    if ( (unsigned int)NotifyLogon(v7) )
      return 259LL;
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 896) )
      goto LABEL_7;
    return 3221225688LL;
  }
}
