/*
 * XREFs of sub_1C0053610 @ 0x1C0053610
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

char __fastcall sub_1C0053610(__int64 a1, _DWORD *a2, _WORD *a3)
{
  if ( (*a2 & 2) != 0 )
  {
    sub_1C000FD80(a1, 256, 1447318320, 0LL, 0LL);
    return 0;
  }
  if ( *a3 != 10 )
  {
    sub_1C000FD80(a1, 256, 1447318321, (unsigned __int16)*a3, 0LL);
    return 0;
  }
  *a2 |= 2u;
  return 1;
}
