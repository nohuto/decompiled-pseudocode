/*
 * XREFs of _NtUserGetDisplayAutoRotationPreferencesByProcessId@12 @ 0x162940
 * Callers:
 *     <none>
 * Callees:
 *     _LockProcessByClientId@8 @ 0x1AD58 (_LockProcessByClientId@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetDisplayAutoRotationPreferencesByProcessId(HANDLE ProcessId, ULONG a2, ULONG a3)
{
  int v3; // esi
  int ProcessWin32Process; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  PVOID Object; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v3 = 0;
  Object = 0;
  EnterSharedCrit(0, 1);
  if ( LockProcessByClientId(ProcessId, (PEPROCESS *)&Object) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    if ( ProcessWin32Process )
    {
      v5 = *(_DWORD *)(ProcessWin32Process + 520);
      ms_exc.registration.TryLevel = 0;
      v6 = (_DWORD *)a2;
      if ( a2 >= _MmUserProbeAddress )
        v6 = (_DWORD *)_MmUserProbeAddress;
      *v6 = v5;
      v7 = (_DWORD *)a3;
      if ( a3 >= _MmUserProbeAddress )
        v7 = (_DWORD *)_MmUserProbeAddress;
      *v7 = 0;
      ms_exc.registration.TryLevel = -2;
      v3 = 1;
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)5);
    }
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
