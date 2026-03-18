/*
 * XREFs of __RegisterShellHookWindow@4 @ 0x8116A
 * Callers:
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?VWPLAddBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@KH@Z @ 0x9B3CC (-VWPLAddBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@KH@Z.c)
 */

int __stdcall _RegisterShellHookWindow(struct tagVWPL **a1)
{
  struct tagVWPL *v1; // eax
  struct tagVWPL *v2; // ecx
  unsigned int v4; // [esp+0h] [ebp-4h]
  int savedregs; // [esp+4h] [ebp+0h]

  v1 = a1[5];
  if ( *((char *)v1 + 12) < 0 || *((char *)v1 + 11) < 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  else
  {
    v2 = a1[3];
    if ( v2 && VWPLAddBase(a1, 2u, *((struct tagWND **)v2 + 1), v4, savedregs) )
    {
      SetOrClrWF(1, (int)a1, 0x740u, 1);
      return 1;
    }
  }
  return 0;
}
