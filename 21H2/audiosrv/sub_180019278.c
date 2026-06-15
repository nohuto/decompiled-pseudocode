/*
 * XREFs of sub_180019278 @ 0x180019278
 * Callers:
 *     sub_1800188D0 @ 0x1800188D0 (sub_1800188D0.c)
 *     sub_1800D4504 @ 0x1800D4504 (sub_1800D4504.c)
 * Callees:
 *     sub_18001B4A0 @ 0x18001B4A0 (sub_18001B4A0.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 */

__int64 __fastcall sub_180019278(unsigned int *a1, __int64 a2)
{
  if ( a1[2] )
    sub_18001B4A0(a2, L"%d|#", a1[1]);
  else
    sub_18001B4A0(a2, L"%d|%d", a1[1], *a1);
  return 0LL;
}
