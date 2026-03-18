/*
 * XREFs of NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C01FA020
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C00283C8 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferencesByProcessId(int a1, _DWORD *a2, _DWORD *a3)
{
  void *v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 ProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v5 = (void *)a1;
  v6 = 0;
  Object = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( (int)LockProcessByClientId(v5, (PEPROCESS *)&Object) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    if ( ProcessWin32Process )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = *(_DWORD *)(ProcessWin32Process + 920);
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = 0;
      v6 = 1;
    }
    else
    {
      UserSetLastError(5LL, v13, v14);
    }
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87LL, v7, v8);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v6;
}
