/*
 * XREFs of sub_1C0001B10 @ 0x1C0001B10
 * Callers:
 *     sub_1C0001010 @ 0x1C0001010 (sub_1C0001010.c)
 *     sub_1C0001850 @ 0x1C0001850 (sub_1C0001850.c)
 *     sub_1C0001BF0 @ 0x1C0001BF0 (sub_1C0001BF0.c)
 * Callees:
 *     sub_1C000406C @ 0x1C000406C (sub_1C000406C.c)
 */

__int64 __fastcall sub_1C0001B10(__int64 a1, unsigned int a2)
{
  if ( byte_1C0007358 )
    sub_1C000406C(a1, a2 == 1);
  return KeUpdateThreadTag(*(_QWORD *)(a1 + 96), a2);
}
