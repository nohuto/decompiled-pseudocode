/*
 * XREFs of ?_Destroy@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@2@0@Z @ 0x1800416C0
 * Callers:
 *     _std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider_______::_Emplace_reallocate_unsigned_long_const_&_IRawInputProvider___&__::_1_::catch$33 @ 0x1800414F2 (_std--vector_std--pair_unsigned_long_Microsoft--WRL--ComPtr_IRawInputProvider____std--allocator_.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  return std::_Destroy_range<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(a2, a3);
}
