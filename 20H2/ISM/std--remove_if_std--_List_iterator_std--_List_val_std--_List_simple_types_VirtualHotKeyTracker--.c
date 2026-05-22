/*
 * XREFs of std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___ @ 0x1800498CC
 * Callers:
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x180180E9C (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     std::_Pass_fn__lambda_c6db7401cba5f9fe705df5cb0dba3b7a__0_ @ 0x180049894 (std--_Pass_fn__lambda_c6db7401cba5f9fe705df5cb0dba3b7a__0_.c)
 *     _lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator() @ 0x180049994 (_lambda_7f079bc5e87df2e09bd622ff86c26e64_--operator().c)
 */

_QWORD *__fastcall std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v8; // rdi
  __int128 v9; // xmm1
  __int64 *v10; // rdi
  __int64 *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  _QWORD *result; // rax
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v8 = *std::_Pass_fn__lambda_c6db7401cba5f9fe705df5cb0dba3b7a__0_(&v17, a4);
  while ( a2 != a3 )
  {
    v9 = *((_OWORD *)a2 + 2);
    v15 = *((_OWORD *)a2 + 1);
    v16 = v9;
    if ( (unsigned __int8)lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator()(v8, &v15) )
      break;
    a2 = (__int64 *)*a2;
  }
  v10 = a2;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v11 = (__int64 *)*a2;
      a2 = v11;
      if ( v11 == a3 )
        break;
      v12 = *((_OWORD *)v11 + 2);
      v15 = *((_OWORD *)v11 + 1);
      v16 = v12;
      if ( !(unsigned __int8)lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator()(a4, &v15) )
      {
        v13 = *((_OWORD *)a2 + 2);
        *((_OWORD *)v10 + 1) = *((_OWORD *)a2 + 1);
        *((_OWORD *)v10 + 2) = v13;
        v10 = (__int64 *)*v10;
      }
    }
  }
  result = a1;
  *a1 = v10;
  return result;
}
