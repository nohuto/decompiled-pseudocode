/*
 * XREFs of sub_1800072D8 @ 0x1800072D8
 * Callers:
 *     sub_180008CD4 @ 0x180008CD4 (sub_180008CD4.c)
 * Callees:
 *     sub_180006510 @ 0x180006510 (sub_180006510.c)
 */

void __fastcall sub_1800072D8(__int64 a1)
{
  if ( a1 )
  {
    if ( qword_18005A050 )
      sub_180006510((LPCRITICAL_SECTION)&qword_18005A050[25], qword_18005A050, a1);
  }
}
