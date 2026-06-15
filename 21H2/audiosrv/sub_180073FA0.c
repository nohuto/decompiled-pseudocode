/*
 * XREFs of sub_180073FA0 @ 0x180073FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180036510 @ 0x180036510 (sub_180036510.c)
 *     sub_180133808 @ 0x180133808 (sub_180133808.c)
 */

__int64 __fastcall sub_180073FA0(__int64 a1)
{
  if ( (unsigned int)dword_18019C4F0 > 5 )
    sub_180133808(a1, &unk_18016CBCE);
  sub_180036510(*(_QWORD *)(a1 + 16), 1);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 99LL) = 1;
  return sub_180074010(*(_QWORD *)(a1 + 16));
}
