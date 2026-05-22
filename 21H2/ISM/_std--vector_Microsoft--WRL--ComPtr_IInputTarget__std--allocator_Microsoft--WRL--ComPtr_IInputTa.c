/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IInputTarget__std::allocator_Microsoft::WRL::ComPtr_IInputTarget_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IInputTarget____::_1_::catch$58 @ 0x18004E050
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@0@@Z @ 0x18000D590 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$Com.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IInputTarget__std::allocator_Microsoft::WRL::ComPtr_IInputTarget_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IInputTarget____::_1_::catch_58(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IInputTarget>>>(
    *(__int64 **)(a2 + 136),
    *(__int64 **)(a2 + 48));
  std::_Deallocate<16,0>(*(void **)(a2 + 128), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 152)));
  throw;
}
