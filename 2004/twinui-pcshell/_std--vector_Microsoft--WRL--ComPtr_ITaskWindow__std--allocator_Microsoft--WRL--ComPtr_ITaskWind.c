/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_ITaskWindow__std::allocator_Microsoft::WRL::ComPtr_ITaskWindow_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ITaskWindow____::_1_::catch$58 @ 0x1801028A3
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18008DF14 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x18014545C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_ITaskWindow__std::allocator_Microsoft::WRL::ComPtr_ITaskWindow_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ITaskWindow____::_1_::catch_58(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
