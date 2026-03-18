/*
 * XREFs of ?xxxSetClassIconEnum@@YGHPAUtagWND@@J@Z @ 0x19C6E6
 * Callers:
 *     _xxxSetClassIcon@16 @ 0x19C737 (_xxxSetClassIcon@16.c)
 * Callees:
 *     _xxxRedrawTitle@8 @ 0x17084 (_xxxRedrawTitle@8.c)
 *     _SendDwmIconChange@4 @ 0x1D802 (_SendDwmIconChange@4.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     _DestroyWindowSmIcon@4 @ 0x71B5C (_DestroyWindowSmIcon@4.c)
 */

int __stdcall xxxSetClassIconEnum(struct tagWND *a1, int a2)
{
  int v2; // eax

  if ( *((_DWORD *)a1 + 19) == a2 )
  {
    v2 = *((_DWORD *)a1 + 5);
    if ( (*(_BYTE *)(v2 + 15) & 0x20) != 0 )
    {
      DestroyWindowSmIcon(a1);
      v2 = *((_DWORD *)a1 + 5);
    }
    if ( !*(_DWORD *)(v2 + 168) )
      xxxRedrawTitle((struct tagVWPL **)a1, 12);
    if ( IsToplevelWindowDesktopComposed(a1) )
      SendDwmIconChange(a1);
  }
  return 1;
}
