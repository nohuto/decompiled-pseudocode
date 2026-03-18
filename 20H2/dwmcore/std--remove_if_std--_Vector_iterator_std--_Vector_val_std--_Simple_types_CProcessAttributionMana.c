/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_CProcessAttributionManager::Record_________lambda_73f2a4da0cca98f221385d01cc2cbc64___ @ 0x18015134C
 * Callers:
 *     ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x18015160C (-NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z.c)
 * Callees:
 *     _lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator() @ 0x18015158C (_lambda_73f2a4da0cca98f221385d01cc2cbc64_--operator().c)
 */

_QWORD *__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_CProcessAttributionManager::Record_________lambda_73f2a4da0cca98f221385d01cc2cbc64___(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  _QWORD *i; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  _QWORD *result; // rax

  for ( i = a2; i != (_QWORD *)a3; ++i )
  {
    if ( (unsigned __int8)lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator()(a1, *i) )
      break;
  }
  if ( i != (_QWORD *)a3 )
  {
    v6 = i + 1;
    v7 = 0LL;
    v8 = (a3 - (unsigned __int64)(i + 1) + 7) >> 3;
    if ( (unsigned __int64)(i + 1) > a3 )
      v8 = 0LL;
    if ( v8 )
    {
      do
      {
        if ( !(unsigned __int8)lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator()(a1, *v6) )
          *i++ = *v6;
        ++v6;
        ++v7;
      }
      while ( v7 != v8 );
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
