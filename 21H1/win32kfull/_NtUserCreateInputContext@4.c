/*
 * XREFs of _NtUserCreateInputContext@4 @ 0x160785
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _CreateInputContext@4 @ 0x9A7CC (_CreateInputContext@4.c)
 */

int __stdcall NtUserCreateInputContext(int a1)
{
  int v1; // esi
  int *InputContext; // eax

  v1 = 0;
  EnterCrit(0, 1);
  if ( (*_gpsi & 4) != 0 )
  {
    if ( a1 )
    {
      InputContext = CreateInputContext(a1);
      if ( InputContext )
        v1 = *InputContext;
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0x57);
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x78);
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
