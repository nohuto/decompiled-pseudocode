/*
 * XREFs of _NtUserSetImeInfoEx@4 @ 0xEB3D8
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _SetImeInfoEx@8 @ 0xEB462 (_SetImeInfoEx@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserSetImeInfoEx(const void *a1)
{
  int v1; // esi
  int CurrentProcessWin32Process; // eax
  _BYTE v4[348]; // [esp+10h] [ebp-178h] BYREF
  CPPEH_RECORD ms_exc; // [esp+170h] [ebp-18h]

  v1 = 0;
  EnterCrit(0, 1);
  if ( (*_gpsi & 4) != 0 )
  {
    qmemcpy(v4, a1, sizeof(v4));
    ms_exc.registration.TryLevel = -2;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v1 = SetImeInfoEx(*(_DWORD *)(CurrentProcessWin32Process + 356), v4);
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x78);
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
