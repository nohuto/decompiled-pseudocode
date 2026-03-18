/*
 * XREFs of _EraseBitmap@4 @ 0xB0A62
 * Callers:
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 * Callees:
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 */

int __thiscall EraseBitmap(struct HLFONT__ *this)
{
  int v2; // esi
  int v4[6]; // [esp+8h] [ebp-18h] BYREF

  memset(v4, 0, sizeof(v4));
  GreExtGetObjectW(this, 24, v4);
  v2 = GreSelectBitmap(_ghdcMem, this);
  NtGdiPatBlt(_ghdcMem, 0, 0, v4[1], v4[2], (struct EXFORMOBJ *)0x42);
  return GreSelectBitmap(_ghdcMem, v2);
}
