/*
 * XREFs of _std::vector_unsigned_long_std::allocator_unsigned_long___::_Emplace_reallocate_unsigned_long_const_&__::_1_::catch$0 @ 0x18003C023
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@K@std@@QEAAXQEAK_K@Z @ 0x18001A100 (-deallocate@-$allocator@K@std@@QEAAXQEAK_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003AE03 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_long_std::allocator_unsigned_long___::_Emplace_reallocate_unsigned_long_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<unsigned long>::deallocate(a1, *(_QWORD **)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
