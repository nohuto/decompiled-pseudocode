/*
 * XREFs of sub_180081B90 @ 0x180081B90
 * Callers:
 *     sub_18007E8F0 @ 0x18007E8F0 (sub_18007E8F0.c)
 *     sub_18011B6C0 @ 0x18011B6C0 (sub_18011B6C0.c)
 * Callees:
 *     ?_RethrowException@exception_ptr@std@@QEBAXXZ @ 0x180081094 (-_RethrowException@exception_ptr@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall __noreturn sub_180081B90(std::exception_ptr *a1)
{
  std::exception_ptr::_RethrowException(a1);
}
