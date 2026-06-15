/*
 * XREFs of sub_1800C6AA4 @ 0x1800C6AA4
 * Callers:
 *     sub_18006DEE0 @ 0x18006DEE0 (sub_18006DEE0.c)
 *     sub_1800F83A0 @ 0x1800F83A0 (sub_1800F83A0.c)
 * Callees:
 *     _o_pow @ 0x18006AB5C (_o_pow.c)
 */

float __fastcall sub_1800C6AA4(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return o_pow();
}
