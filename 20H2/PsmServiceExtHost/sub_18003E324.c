/*
 * XREFs of sub_18003E324 @ 0x18003E324
 * Callers:
 *     sub_18003C3C0 @ 0x18003C3C0 (sub_18003C3C0.c)
 *     sub_18003EC60 @ 0x18003EC60 (sub_18003EC60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003E324(char a1)
{
  if ( (a1 & 1) != 0 )
    return 0LL;
  else
    return (unsigned int)((a1 & 2) != 0) + 1;
}
