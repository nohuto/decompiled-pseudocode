/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VDuckingDescriptor@@@std@@EEAAXXZ @ 0x18000D490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall std::_Ref_count_obj<DuckingDescriptor>::_Destroy(__int64 a1)
{
  void **result; // rax

  result = &IDuckingDescriptor::`vftable';
  *(_QWORD *)(a1 + 16) = &IDuckingDescriptor::`vftable';
  return result;
}
