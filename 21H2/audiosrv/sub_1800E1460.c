/*
 * XREFs of sub_1800E1460 @ 0x1800E1460
 * Callers:
 *     sub_1800E15FC @ 0x1800E15FC (sub_1800E15FC.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 */

__int64 __fastcall sub_1800E1460(__int64 a1, __int64 a2)
{
  std::_Ref_count_base *v3; // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = off_18014A208;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 56) = a1;
  v3 = *(std::_Ref_count_base **)(a2 + 16);
  if ( v3 )
    sub_180052600(v3);
  return a1;
}
