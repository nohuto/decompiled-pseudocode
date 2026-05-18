/*
 * XREFs of sub_180117260 @ 0x180117260
 * Callers:
 *     <none>
 * Callees:
 *     __std_type_info_compare @ 0x180123988 (__std_type_info_compare.c)
 */

__int64 __fastcall sub_180117260(__int64 a1, __int64 a2)
{
  if ( (unsigned int)_std_type_info_compare(a2 + 8, &qword_18021E7C8) )
    return 0LL;
  else
    return a1 + 16;
}
