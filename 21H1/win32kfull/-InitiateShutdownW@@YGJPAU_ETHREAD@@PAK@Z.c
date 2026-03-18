/*
 * XREFs of ?InitiateShutdownW@@YGJPAU_ETHREAD@@PAK@Z @ 0xD3602
 * Callers:
 *     _xxxSetInformationThread@16 @ 0xC9146 (_xxxSetInformationThread@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsPrivileged@4 @ 0xCB7DA (_IsPrivileged@4.c)
 *     ?NotifyLogon@@YGHK@Z @ 0xD4198 (-NotifyLogon@@YGHK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall InitiateShutdownW(struct _KTHREAD *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  PEPROCESS ThreadProcess; // eax
  int ProcessWin32Process; // eax
  int v8; // edi
  int v9; // ecx
  int result; // eax
  int ThreadWin32Thread; // eax
  int v12; // esi
  unsigned int v13; // [esp+0h] [ebp-20h]
  int v14; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+14h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-8h]
  unsigned int *v17; // [esp+1Ch] [ebp-4h]

  v14 = 0;
  v15 = 0;
  v17 = a2;
  GetProcessLuid(a1, &v14);
  v4 = *a2;
  if ( v14 == _luidSystem[0] && v15 == _luidSystem[1] )
    v5 = v4 | 0x100;
  else
    v5 = v4 & 0xFFFFFEFF;
  ThreadProcess = PsGetThreadProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v16 = ProcessWin32Process;
  if ( !ProcessWin32Process )
    return -1073741816;
  v8 = *(_DWORD *)(ProcessWin32Process + 356);
  if ( PsGetThreadProcessId(a1) == (HANDLE)_gpidLogon )
    goto LABEL_5;
  v5 &= ~0x200u;
  *v17 = v5;
  if ( !v8 )
    return -1073741816;
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v16 + 364), 0x40u) )
    return -1073741790;
  if ( (v5 & 1) != 0 )
  {
    if ( !IsPrivileged(&RequiredPrivileges) )
      return -1073741727;
  }
  else if ( (*(_BYTE *)(v8 + 32) & 4) != 0 )
  {
    return -1073741808;
  }
LABEL_5:
  if ( _gdwThreadEndSession )
  {
    if ( (v14 != *(_DWORD *)(_grpwinstaLogoff + 92) || v15 != *(_DWORD *)(_grpwinstaLogoff + 96))
      && gpidEndSession != (void *)_gpidLogon )
    {
      return -1073741267;
    }
    v16 = (unsigned __int8)v5 & (unsigned __int8)~(_BYTE)gdwShutdownFlags & 7;
    if ( ((unsigned __int8)v5 & (unsigned __int8)~(_BYTE)gdwShutdownFlags & 7) != 0
      && PsGetCurrentThreadId() != (HANDLE)_gdwThreadEndSession )
    {
      if ( (v5 & 1) == 0 && v8 != _grpwinstaLogoff )
        return -2147483631;
      if ( (v16 & 4) != 0 )
        return -1073741267;
    }
    return 259;
  }
  if ( PsGetThreadProcessId(a1) == (HANDLE)_gpidLogon )
  {
LABEL_7:
    gdwShutdownFlags = v5 | 0x200;
    *v17 = v5 | 0x200;
    _gdwThreadEndSession = PsGetCurrentThreadId();
    *(_DWORD *)(_gpsi + 1836) |= 1u;
    gpidEndSession = (void *)PsGetCurrentThreadProcessId();
    LockObjectAssignment(_grpwinstaLogoff, v8);
    v9 = *(_DWORD *)(v8 + 32);
    *(_DWORD *)(v8 + 92) = v14;
    *(_DWORD *)(v8 + 96) = v15;
    gdwLocks = v9 & 3;
    result = 0;
    *(_DWORD *)(v8 + 32) = v9 | 0xA;
    return result;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(a1);
  v12 = ThreadWin32Thread;
  if ( (v5 & 0x8000) != 0 )
  {
    if ( ThreadWin32Thread && (*(_BYTE *)(ThreadWin32Thread + 264) & 2) != 0 )
      _gptiShutdownNotify = ThreadWin32Thread;
    v5 &= ~0x8000u;
    *v17 = v5;
  }
  if ( NotifyLogon(v13) )
    return 259;
  if ( !v12 || !*(_DWORD *)(v12 + 504) )
    goto LABEL_7;
  return -1073741608;
}
