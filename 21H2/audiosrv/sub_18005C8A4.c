/*
 * XREFs of sub_18005C8A4 @ 0x18005C8A4
 * Callers:
 *     sub_18005C8D0 @ 0x18005C8D0 (sub_18005C8D0.c)
 *     sub_1800BF4C0 @ 0x1800BF4C0 (sub_1800BF4C0.c)
 *     sub_1800BFDE0 @ 0x1800BFDE0 (sub_1800BFDE0.c)
 *     sub_1800C00CC @ 0x1800C00CC (sub_1800C00CC.c)
 *     sub_1800C0E5C @ 0x1800C0E5C (sub_1800C0E5C.c)
 *     sub_1800C1150 @ 0x1800C1150 (sub_1800C1150.c)
 *     sub_1800C12E0 @ 0x1800C12E0 (sub_1800C12E0.c)
 *     sub_1800C14A0 @ 0x1800C14A0 (sub_1800C14A0.c)
 *     sub_1800C1760 @ 0x1800C1760 (sub_1800C1760.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18005C8A4(float *a1, float a2)
{
  if ( a1[5] <= a2 )
    a2 = a1[5];
  if ( a2 <= a1[2] )
    a2 = a1[2];
  a1[1] = a2;
}
