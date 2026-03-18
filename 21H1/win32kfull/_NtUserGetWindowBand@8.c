/*
 * XREFs of _NtUserGetWindowBand@8 @ 0x9944E
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetWindowBand(int a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // edx

  v2 = 0;
  EnterSharedCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    if ( a2 )
    {
      v4 = a2;
      if ( (unsigned int)a2 >= _MmUserProbeAddress )
        v4 = (_DWORD *)_MmUserProbeAddress;
      *v4 = *v4;
      *a2 = *(_DWORD *)(*(_DWORD *)(v3 + 20) + 148);
      v2 = 1;
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0x57);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
