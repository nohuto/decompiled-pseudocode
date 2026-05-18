/*
 * XREFs of sub_1800B1EC0 @ 0x1800B1EC0
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     sub_18001FA88 @ 0x18001FA88 (sub_18001FA88.c)
 *     sub_1800C32D0 @ 0x1800C32D0 (sub_1800C32D0.c)
 *     sub_1800C4F74 @ 0x1800C4F74 (sub_1800C4F74.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_1800CB014 @ 0x1800CB014 (sub_1800CB014.c)
 *     sub_180100170 @ 0x180100170 (sub_180100170.c)
 *     sub_180100BE0 @ 0x180100BE0 (sub_180100BE0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B1EC0(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 544) |= a2;
  if ( (a2 & 4) != 0 )
    *(_BYTE *)(a1 + 1612) = 1;
}
