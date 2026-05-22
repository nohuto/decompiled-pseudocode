/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_LegacyInputInfo_______lambda_1157ceaaacdd00f9cf6535b50f5a150f___ @ 0x180089CEC
 * Callers:
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x18008ACD0 (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 * Callees:
 *     memcpy_0 @ 0x18004A63B (memcpy_0.c)
 */

_QWORD *__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_LegacyInputInfo_______lambda_1157ceaaacdd00f9cf6535b50f5a150f___(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        int a4)
{
  _DWORD *i; // rsi
  _DWORD *j; // rbp
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 508 )
  {
    if ( i[1] == a4 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 508; j != a3; j += 508 )
    {
      if ( j[1] != a4 )
      {
        memcpy_0(i, j, 0x7F0uLL);
        i += 508;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
