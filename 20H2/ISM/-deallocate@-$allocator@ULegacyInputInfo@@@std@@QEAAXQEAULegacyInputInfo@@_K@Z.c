/*
 * XREFs of ?deallocate@?$allocator@ULegacyInputInfo@@@std@@QEAAXQEAULegacyInputInfo@@_K@Z @ 0x18008B010
 * Callers:
 *     _std::vector_LegacyInputInfo_std::allocator_LegacyInputInfo___::_Emplace_reallocate_LegacyInputInfo_&__::_1_::catch$31 @ 0x180089898 (_std--vector_LegacyInputInfo_std--allocator_LegacyInputInfo___--_Emplace_reallocate_LegacyInputI.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<LegacyInputInfo>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(2032 * a3));
}
