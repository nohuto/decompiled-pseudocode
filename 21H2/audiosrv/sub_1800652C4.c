/*
 * XREFs of sub_1800652C4 @ 0x1800652C4
 * Callers:
 *     sub_1800638B0 @ 0x1800638B0 (sub_1800638B0.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069110 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 *sub_1800652C4()
{
  std::_Ref_count_base *v0; // rdx
  std::_Ref_count_base *v1; // rcx

  v0 = qword_18019EEE0;
  if ( qword_18019EEE0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)qword_18019EEE0 + 3);
    v0 = qword_18019EEE0;
  }
  v1 = qword_18019EEF0;
  qword_18019EEE8 = qword_18019EED8;
  qword_18019EEF0 = v0;
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
  return &qword_18019EEE8;
}
