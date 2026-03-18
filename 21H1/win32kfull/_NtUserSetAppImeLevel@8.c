/*
 * XREFs of _NtUserSetAppImeLevel@8 @ 0x168730
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 */

int __stdcall NtUserSetAppImeLevel(int a1, int a2)
{
  int v2; // esi
  int v3; // edi

  v2 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    if ( (*_gpsi & 4) != 0 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v3 + 8) + 232) == PsGetCurrentProcessWin32Process() )
      {
        InternalSetProp(v3, (unsigned __int16)atomImeLevel, a2, 5);
        v2 = 1;
      }
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0x78);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
