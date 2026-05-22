/*
 * XREFs of _std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider_______::_Emplace_reallocate_unsigned_long_const_&_IRawInputProvider___&__::_1_::catch$33 @ 0x1800414F2
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@2@0@Z @ 0x1800416C0 (-_Destroy@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$allocator@U-$.c)
 *     ?deallocate@?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@QEAAXQEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@2@_K@Z @ 0x180041778 (-deallocate@-$allocator@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@QEAAX.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider_______::_Emplace_reallocate_unsigned_long_const___IRawInputProvider______::_1_::catch_33(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Destroy(a1, a2[14], a2[4]);
  std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::deallocate(v3, a2[5], a2[15]);
  throw;
}
