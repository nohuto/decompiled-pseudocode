/*
 * XREFs of EraseBitmap @ 0x1C002A684
 * Callers:
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 */

__int64 __fastcall EraseBitmap(HBRUSH a1)
{
  __int64 v2; // rbx

  GreExtGetObjectW(a1);
  v2 = GreSelectBitmap(ghdcMem, a1);
  NtGdiPatBlt(ghdcMem, 0, 0, 0, 0, 66);
  return GreSelectBitmap(ghdcMem, v2);
}
