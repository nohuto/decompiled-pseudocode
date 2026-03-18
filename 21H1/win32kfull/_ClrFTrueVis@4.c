/*
 * XREFs of _ClrFTrueVis@4 @ 0x1CDFA
 * Callers:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _ClrFTrueVis@4 @ 0x1CDFA (_ClrFTrueVis@4.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _ClrFTrueVis@4 @ 0x1CDFA (_ClrFTrueVis@4.c)
 *     _DecPaintCount@4 @ 0xAA80E (_DecPaintCount@4.c)
 */

int __thiscall ClrFTrueVis(_DWORD *this)
{
  int result; // eax
  int i; // esi

  result = this[5];
  if ( *(_DWORD *)(result + 92) || (*(_BYTE *)(result + 9) & 0x10) != 0 )
  {
    DeleteMaybeSpecialRgn(*(_DWORD *)(result + 92));
    SetOrClrWF(0, (int)this, 0x110u, 1);
    *(_DWORD *)(this[5] + 92) = 0;
    result = DecPaintCount(this);
  }
  for ( i = this[15]; i; i = *(_DWORD *)(i + 48) )
  {
    result = *(_DWORD *)(i + 20);
    if ( (*(_BYTE *)(result + 23) & 0x10) != 0 )
      result = ClrFTrueVis(i);
  }
  return result;
}
