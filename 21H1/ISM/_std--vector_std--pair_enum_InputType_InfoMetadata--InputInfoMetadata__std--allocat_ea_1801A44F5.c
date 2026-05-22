/*
 * XREFs of _std::vector_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata__std::allocator_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata_____::_Emplace_reallocate_enum_InputType_&_InfoMetadata::InputInfoMetadata_&__::_1_::catch$36 @ 0x1801A44F5
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@@@std@@YAXPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@0AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x1801A425C (--$_Destroy_range@V-$allocator@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@.c)
 */

void __fastcall __noreturn std::vector_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata__std::allocator_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata_____::_Emplace_reallocate_enum_InputType___InfoMetadata::InputInfoMetadata____::_1_::catch_36(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
    *(_QWORD *)(a2 + 160),
    *(_QWORD *)(a2 + 64));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(328LL * *(_QWORD *)(a2 + 168)));
  throw;
}
