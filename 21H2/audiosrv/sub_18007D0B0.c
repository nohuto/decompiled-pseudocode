/*
 * XREFs of sub_18007D0B0 @ 0x18007D0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069110 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall sub_18007D0B0()
{
  if ( *((_QWORD *)&xmmword_18019F738 + 1) )
    std::_Ref_count_base::_Decwref(*((std::_Ref_count_base **)&xmmword_18019F738 + 1));
}
