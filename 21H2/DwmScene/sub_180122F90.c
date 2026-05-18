/*
 * XREFs of sub_180122F90 @ 0x180122F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180122F90(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = &std::_Func_impl_no_alloc<_lambda_6b30083816be8ce536ed8143da6c63b4_,void,>::`vftable';
  a2[1] = 0LL;
  a2[2] = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a2[1] = *(_QWORD *)(a1 + 8);
  a2[2] = *(_QWORD *)(a1 + 16);
  return a2;
}
