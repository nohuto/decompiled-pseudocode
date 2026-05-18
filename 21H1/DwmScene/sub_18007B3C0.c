/*
 * XREFs of sub_18007B3C0 @ 0x18007B3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18007B3C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = &std::_Func_impl_no_alloc<_lambda_87405cc2c55410793a5c9c24c44d1dd2_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
  a2[1] = 0LL;
  a2[2] = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a2[1] = *(_QWORD *)(a1 + 8);
  a2[2] = *(_QWORD *)(a1 + 16);
  return a2;
}
