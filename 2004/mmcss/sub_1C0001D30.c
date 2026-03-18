/*
 * XREFs of sub_1C0001D30 @ 0x1C0001D30
 * Callers:
 *     sub_1C000B290 @ 0x1C000B290 (sub_1C000B290.c)
 * Callees:
 *     sub_1C000B920 @ 0x1C000B920 (sub_1C000B920.c)
 *     sub_1C000B950 @ 0x1C000B950 (sub_1C000B950.c)
 */

__int64 __fastcall sub_1C0001D30(__int64 a1)
{
  __int64 v2; // rbx

  v2 = 0LL;
  sub_1C000B950();
  if ( (*(_BYTE *)(a1 + 148) & 2) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 72);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 48)) <= 1 )
      __fastfail(0xEu);
  }
  sub_1C000B920(a1);
  return v2;
}
