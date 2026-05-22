/*
 * XREFs of _std::vector_LegacyInputInfo_std::allocator_LegacyInputInfo___::_Emplace_reallocate_LegacyInputInfo_&__::_1_::catch$31 @ 0x180089898
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@ULegacyInputInfo@@@std@@QEAAXQEAULegacyInputInfo@@_K@Z @ 0x18008B010 (-deallocate@-$allocator@ULegacyInputInfo@@@std@@QEAAXQEAULegacyInputInfo@@_K@Z.c)
 */

void __fastcall __noreturn std::vector_LegacyInputInfo_std::allocator_LegacyInputInfo___::_Emplace_reallocate_LegacyInputInfo____::_1_::catch_31(
        __int64 a1,
        __int64 a2)
{
  std::allocator<LegacyInputInfo>::deallocate(a1, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 96));
  throw;
}
