/*
 * XREFs of wistd::__function::__func__lambda_025d670431b0b6098eb2d1c47c9e9598__void___cdecl(unsigned_char_const_&)_::destroy @ 0x1802C96B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall wistd::__function::__func__lambda_025d670431b0b6098eb2d1c47c9e9598__void___cdecl_unsigned_char_const____::destroy(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
