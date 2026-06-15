/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_ISaDeviceProxy__std::allocator_Microsoft::WRL::ComPtr_ISaDeviceProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ISaDeviceProxy__const_&__::_1_::catch$33 @ 0x1800CE26E
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180074C37 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CE10C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_ISaDeviceProxy__std::allocator_Microsoft::WRL::ComPtr_ISaDeviceProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ISaDeviceProxy__const____::_1_::catch_33(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
