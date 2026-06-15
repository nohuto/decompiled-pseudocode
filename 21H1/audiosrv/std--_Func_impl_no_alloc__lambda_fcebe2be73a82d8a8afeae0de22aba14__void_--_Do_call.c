/*
 * XREFs of std::_Func_impl_no_alloc__lambda_fcebe2be73a82d8a8afeae0de22aba14__void_::_Do_call @ 0x180122CA0
 * Callers:
 *     <none>
 * Callees:
 *     ReconsiderSpatialOnComboEndpoints @ 0x1801227A0 (ReconsiderSpatialOnComboEndpoints.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_fcebe2be73a82d8a8afeae0de22aba14__void_::_Do_call(__int64 a1)
{
  ReconsiderSpatialOnComboEndpoints(*(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  CoTaskMemFree(*(LPVOID *)(a1 + 16));
}
