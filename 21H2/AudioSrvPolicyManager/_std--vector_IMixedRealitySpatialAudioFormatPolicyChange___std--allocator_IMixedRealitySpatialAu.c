/*
 * XREFs of _std::vector_IMixedRealitySpatialAudioFormatPolicyChange___std::allocator_IMixedRealitySpatialAudioFormatPolicyChange_____::_Emplace_reallocate_IMixedRealitySpatialAudioFormatPolicyChange___const_&__::_1_::catch$0 @ 0x18003BFF9
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@std@@QEAAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@_K@Z @ 0x180009230 (-deallocate@-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$.c)
 *     _CxxThrowException_0 @ 0x18003AE03 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_IMixedRealitySpatialAudioFormatPolicyChange___std::allocator_IMixedRealitySpatialAudioFormatPolicyChange_____::_Emplace_reallocate_IMixedRealitySpatialAudioFormatPolicyChange___const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>::deallocate(
    a1,
    *(_QWORD **)(a2 + 88),
    *(_QWORD *)(a2 + 80));
  throw;
}
