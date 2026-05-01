/*
 * XREFs of sub_1800179D8 @ 0x1800179D8
 * Callers:
 *     sub_1800061F8 @ 0x1800061F8 (sub_1800061F8.c)
 *     sub_180007CF8 @ 0x180007CF8 (sub_180007CF8.c)
 *     sub_180019CB0 @ 0x180019CB0 (sub_180019CB0.c)
 *     sub_18001FEC0 @ 0x18001FEC0 (sub_18001FEC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800179D8(char a1)
{
  if ( (a1 & 0xC0) == 0xC0 )
    return 2LL;
  return (a1 & 0xEu) >= 8 && (a1 & 0x30u) >= 0x20;
}
