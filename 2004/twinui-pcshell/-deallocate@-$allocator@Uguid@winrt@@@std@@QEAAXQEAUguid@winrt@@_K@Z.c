/*
 * XREFs of ?deallocate@?$allocator@Uguid@winrt@@@std@@QEAAXQEAUguid@winrt@@_K@Z @ 0x1800CDABC
 * Callers:
 *     _std::vector_winrt::guid_std::allocator_winrt::guid___::_Emplace_reallocate_winrt::guid_const_&__::_1_::catch$32 @ 0x1800C45E4 (_std--vector_winrt--guid_std--allocator_winrt--guid___--_Emplace_reallocate_winrt--guid_const_-_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<winrt::guid>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(16 * a3));
}
