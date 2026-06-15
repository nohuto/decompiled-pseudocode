/*
 * XREFs of sub_180108EE0 @ 0x180108EE0
 * Callers:
 *     sub_1801059D0 @ 0x1801059D0 (sub_1801059D0.c)
 *     sub_180105B20 @ 0x180105B20 (sub_180105B20.c)
 *     sub_180108CC0 @ 0x180108CC0 (sub_180108CC0.c)
 * Callees:
 *     sub_18000410C @ 0x18000410C (sub_18000410C.c)
 */

void __fastcall sub_180108EE0(__int64 a1)
{
  void *v2; // rcx

  *(_BYTE *)(a1 + 136) = 1;
  v2 = *(void **)(a1 + 224);
  if ( v2 )
    sub_18000410C(v2);
  sub_1801081D4(a1);
}
