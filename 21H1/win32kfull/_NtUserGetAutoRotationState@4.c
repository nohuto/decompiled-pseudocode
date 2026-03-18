/*
 * XREFs of _NtUserGetAutoRotationState@4 @ 0x161C46
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetAutoRotationState(int *a1)
{
  int v1; // esi
  int v2; // edx
  int *v3; // ecx

  UserSessionSwitchEnterCrit();
  v1 = (int)a1;
  if ( a1 )
  {
    v2 = (*(int (__thiscall **)(PVOID))(*(_DWORD *)dword_274060 + 8))(dword_274060);
    v3 = a1;
    if ( (unsigned int)a1 >= _MmUserProbeAddress )
      v3 = (int *)_MmUserProbeAddress;
    *v3 = *v3;
    *a1 = v2;
    v1 = 1;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  LeaveCrit();
  return v1;
}
