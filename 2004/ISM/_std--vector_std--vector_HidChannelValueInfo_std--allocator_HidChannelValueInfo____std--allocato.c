/*
 * XREFs of _std::vector_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo____std::allocator_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo_______::_Emplace_reallocate_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo______::_1_::catch$44 @ 0x1800A4C16
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@0AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x1800A4884 (--$_Destroy_range@V-$allocator@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo.c)
 */

void __fastcall __noreturn std::vector_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo____std::allocator_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo_______::_Emplace_reallocate_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo______::_1_::catch_44(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>(*(_QWORD *)(a2 + 120), *(_QWORD *)(a2 + 112));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(24LL * *(_QWORD *)(a2 + 136)));
  throw;
}
