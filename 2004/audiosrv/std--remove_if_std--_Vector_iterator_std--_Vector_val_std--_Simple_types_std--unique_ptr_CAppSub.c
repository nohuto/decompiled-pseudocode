/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_d1ef71c9e005ee3e22f3fa4533c9d9bf___ @ 0x1800F1160
 * Callers:
 *     ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x1800F1470 (-DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z.c)
 * Callees:
 *     ??4?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F1384 (--4-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClientContext@@@std@@@std.c)
 */

_QWORD *__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_d1ef71c9e005ee3e22f3fa4533c9d9bf___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *i; // rsi
  _QWORD *j; // rbp
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( *i == *a4 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( *j != *a4 )
        std::unique_ptr<CAppSubmixClientContext>::operator=(i++, j);
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
