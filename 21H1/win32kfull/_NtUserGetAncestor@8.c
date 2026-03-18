/*
 * XREFs of _NtUserGetAncestor@8 @ 0xB52B4
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __GetAncestor@8 @ 0xB52FC (__GetAncestor@8.c)
 */

int __stdcall NtUserGetAncestor(int a1, int a2)
{
  int v2; // esi
  int v3; // ecx
  int *Ancestor; // eax

  v2 = 0;
  EnterSharedCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    if ( (unsigned int)(a2 - 1) > 2 )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
    }
    else
    {
      Ancestor = (int *)_GetAncestor(v3, a2);
      if ( Ancestor )
        v2 = *Ancestor;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
