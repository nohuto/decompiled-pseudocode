/*
 * XREFs of _NtUserSetWindowDisplayAffinity@8 @ 0x16A051
 * Callers:
 *     <none>
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _SetDisplayAffinity@8 @ 0x1A5988 (_SetDisplayAffinity@8.c)
 */

int __stdcall NtUserSetWindowDisplayAffinity(int a1, int a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  int v4; // ecx

  v2 = 0;
  EnterCrit(0, 1);
  v3 = (_DWORD *)ValidateHwnd(a1);
  if ( v3 )
  {
    if ( *(_DWORD *)(v3[2] + 232) == PsGetCurrentProcessWin32Process() )
    {
      v4 = v3[14];
      if ( v4 && (*(_DWORD *)(*(_DWORD *)(v4 + 8) + 688) & 0x40000) != 0 )
        v3 = (_DWORD *)v3[14];
      if ( _IsTopLevelWindow(v3) && (!a2 || (a2 & 0x11) != 0) )
      {
        if ( SetDisplayAffinity(v3) )
          v2 = 1;
        else
          UserSetLastError((struct _NT_TIB *)8);
      }
      else
      {
        UserSetLastError((struct _NT_TIB *)0x57);
      }
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)5);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
