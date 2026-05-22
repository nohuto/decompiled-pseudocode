/*
 * XREFs of std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_2e17bef57c72db371333aa9a3de53833___ @ 0x18019EB4C
 * Callers:
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801A1020 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     _lambda_2e17bef57c72db371333aa9a3de53833_::operator() @ 0x18019F7B0 (_lambda_2e17bef57c72db371333aa9a3de53833_--operator().c)
 */

_QWORD *__fastcall std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_2e17bef57c72db371333aa9a3de53833___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  while ( a2 != a3 )
  {
    v8 = a2[3];
    v11 = 0LL;
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v8 = a2[3];
    }
    v9 = a2[2];
    *((_QWORD *)&v11 + 1) = v8;
    *(_QWORD *)&v11 = v9;
    if ( (unsigned __int8)lambda_2e17bef57c72db371333aa9a3de53833_::operator()(a4, &v11) )
      break;
    a2 = (_QWORD *)*a2;
  }
  result = a1;
  *a1 = a2;
  return result;
}
