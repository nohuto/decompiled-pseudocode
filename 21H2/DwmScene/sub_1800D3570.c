/*
 * XREFs of sub_1800D3570 @ 0x1800D3570
 * Callers:
 *     <none>
 * Callees:
 *     __std_type_info_compare @ 0x180123988 (__std_type_info_compare.c)
 */

__int64 __fastcall sub_1800D3570(__int64 a1, __int64 a2)
{
  if ( (unsigned int)_std_type_info_compare(a2 + 8, &qword_18021CE08) )
    return 0LL;
  else
    return a1 + 16;
}
