/*
 * XREFs of _NtUserGetWindowProcessHandle@8 @ 0x7F1F0
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

void *__stdcall NtUserGetWindowProcessHandle(int a1, ACCESS_MASK DesiredAccess)
{
  int v2; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v5; // esi
  int v6; // edi
  char v7; // al
  int v8; // ecx
  int v9; // edx
  void *v10; // esi
  HANDLE ThreadProcessId; // eax
  void *Handle; // [esp+8h] [ebp-8h] BYREF
  PEPROCESS Process; // [esp+Ch] [ebp-4h] BYREF

  Handle = 0;
  EnterSharedCrit(0, 1);
  v2 = ValidateHwnd(a1);
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v5 = *(_DWORD *)(v2 + 8);
    v6 = ThreadWin32Thread;
    if ( *(_DWORD *)(v5 + 248) != *(_DWORD *)(ThreadWin32Thread + 248) )
      goto LABEL_6;
    v7 = Enforced();
    v8 = *(_DWORD *)(v5 + 232);
    v9 = *(_DWORD *)(v6 + 232);
    if ( v7 )
    {
      if ( !(unsigned __int8)CheckAccess(v9 + 496, v8 + 496) && *(int *)(*(_DWORD *)(v6 + 232) + 8) >= 0 )
        goto LABEL_6;
    }
    else if ( *(_DWORD *)(v8 + 424) != *(_DWORD *)(v9 + 424) || *(_DWORD *)(v8 + 428) != *(_DWORD *)(v9 + 428) )
    {
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(v5 + 264) & 0xC) != 0 )
    {
LABEL_6:
      UserSetLastError(5);
      goto LABEL_7;
    }
    Process = 0;
    ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v5);
    if ( PsLookupProcessByProcessId(ThreadProcessId, &Process) < 0 )
    {
      UserSetLastError(87);
    }
    else
    {
      ObOpenObjectByPointer(Process, 0, 0, DesiredAccess, (POBJECT_TYPE)PsProcessType, 0, &Handle);
      ObfDereferenceObject(Process);
    }
  }
LABEL_7:
  v10 = Handle;
  UserSessionSwitchLeaveCrit();
  return v10;
}
