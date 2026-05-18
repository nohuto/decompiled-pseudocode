/*
 * XREFs of sub_18003B6B0 @ 0x18003B6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003B6B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = &std::_Func_impl_no_alloc<_lambda_4af3746430e5e2c46cf50146b08287aa_,void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::`vftable';
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 40);
  return result;
}
