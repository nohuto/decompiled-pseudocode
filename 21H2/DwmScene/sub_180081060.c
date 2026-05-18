/*
 * XREFs of sub_180081060 @ 0x180081060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180081060(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  *a2 = &std::_Func_impl_no_alloc<_lambda_282fed377bbce3f6fdb465d5ebb3ef93_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[1] = *(_QWORD *)(a1 + 8);
  a2[2] = *(_QWORD *)(a1 + 16);
  result = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
