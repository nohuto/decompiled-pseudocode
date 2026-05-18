/*
 * XREFs of sub_1801171C8 @ 0x1801171C8
 * Callers:
 *     sub_180115870 @ 0x180115870 (sub_180115870.c)
 *     sub_180115D7C @ 0x180115D7C (sub_180115D7C.c)
 *     sub_180116498 @ 0x180116498 (sub_180116498.c)
 * Callees:
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 */

char __fastcall sub_1801171C8(unsigned int a1, const char *a2)
{
  if ( a1 > 0x4000000 )
  {
    sub_18011BCAC(&unk_180214B30, 3LL, "%s cannot process more than %u vertices (requested: %u)", a2, 0x4000000, a1);
    return 0;
  }
  if ( !a1 )
  {
    sub_18011BCAC(&unk_180214B30, 3LL, "%s cannot process zero vertices", a2);
    return 0;
  }
  return 1;
}
