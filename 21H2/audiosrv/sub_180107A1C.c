/*
 * XREFs of sub_180107A1C @ 0x180107A1C
 * Callers:
 *     sub_1801091F0 @ 0x1801091F0 (sub_1801091F0.c)
 * Callees:
 *     sub_18000410C @ 0x18000410C (sub_18000410C.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_1800D50A8 @ 0x1800D50A8 (sub_1800D50A8.c)
 *     sub_1800D51D8 @ 0x1800D51D8 (sub_1800D51D8.c)
 *     sub_180106C74 @ 0x180106C74 (sub_180106C74.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180107A1C(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+38h] [rbp-10h]

  sub_180106C74(a1, &v3);
  while ( !*(_BYTE *)(a1 + 136) && v3 )
  {
    sub_1800D51D8(*v3);
    v2 = sub_180106C74(a1, &v5);
    sub_1800D50A8(&v3, v2);
    if ( v6 )
      sub_180052600(v6);
  }
  if ( !*(_BYTE *)(a1 + 136) && !*(_BYTE *)(a1 + 137) )
    sub_18000410C(*(void **)(a1 + 224));
  if ( v4 )
    sub_180052600(v4);
}
