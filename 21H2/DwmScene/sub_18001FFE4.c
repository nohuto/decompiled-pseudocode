/*
 * XREFs of sub_18001FFE4 @ 0x18001FFE4
 * Callers:
 *     sub_180019674 @ 0x180019674 (sub_180019674.c)
 * Callees:
 *     sub_18001FF78 @ 0x18001FF78 (sub_18001FF78.c)
 */

void __fastcall sub_18001FFE4(__int64 a1)
{
  if ( a1 )
  {
    if ( qword_18021F968 )
      sub_18001FF78((LPCRITICAL_SECTION)&qword_18021F968[25], qword_18021F968, a1);
  }
}
