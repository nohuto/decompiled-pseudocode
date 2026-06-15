/*
 * XREFs of sub_1800322B0 @ 0x1800322B0
 * Callers:
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_180122FC8 @ 0x180122FC8 (sub_180122FC8.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 */

__int64 __fastcall sub_1800322B0(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    sub_180052600(v2);
  return a1;
}
