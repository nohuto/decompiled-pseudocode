/*
 * XREFs of sub_18005D19C @ 0x18005D19C
 * Callers:
 *     sub_18005C740 @ 0x18005C740 (sub_18005C740.c)
 *     sub_18005C7D0 @ 0x18005C7D0 (sub_18005C7D0.c)
 *     sub_18005C8D0 @ 0x18005C8D0 (sub_18005C8D0.c)
 *     sub_18005D1C0 @ 0x18005D1C0 (sub_18005D1C0.c)
 *     sub_1800BF1AC @ 0x1800BF1AC (sub_1800BF1AC.c)
 *     sub_1800BF2A0 @ 0x1800BF2A0 (sub_1800BF2A0.c)
 *     sub_1800BF350 @ 0x1800BF350 (sub_1800BF350.c)
 *     sub_1800BFAD0 @ 0x1800BFAD0 (sub_1800BFAD0.c)
 *     sub_1800C0948 @ 0x1800C0948 (sub_1800C0948.c)
 *     sub_1800C0E5C @ 0x1800C0E5C (sub_1800C0E5C.c)
 *     sub_1800C0FE0 @ 0x1800C0FE0 (sub_1800C0FE0.c)
 *     sub_1800C1150 @ 0x1800C1150 (sub_1800C1150.c)
 *     sub_1800C12E0 @ 0x1800C12E0 (sub_1800C12E0.c)
 *     sub_1800C14A0 @ 0x1800C14A0 (sub_1800C14A0.c)
 *     sub_1800C1760 @ 0x1800C1760 (sub_1800C1760.c)
 *     sub_1800C1BA0 @ 0x1800C1BA0 (sub_1800C1BA0.c)
 *     sub_1800C1D20 @ 0x1800C1D20 (sub_1800C1D20.c)
 *     sub_1800C1E20 @ 0x1800C1E20 (sub_1800C1E20.c)
 *     sub_1800C1F20 @ 0x1800C1F20 (sub_1800C1F20.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_18005D19C(_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 >= a1[1] )
    sub_1800B8610(2147942487LL);
  return *a1 + (a2 << 6);
}
