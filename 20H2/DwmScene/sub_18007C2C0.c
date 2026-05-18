/*
 * XREFs of sub_18007C2C0 @ 0x18007C2C0
 * Callers:
 *     sub_180079020 @ 0x180079020 (sub_180079020.c)
 *     sub_180115DF0 @ 0x180115DF0 (sub_180115DF0.c)
 * Callees:
 *     ?_RethrowException@exception_ptr@std@@QEBAXXZ @ 0x18007B7C4 (-_RethrowException@exception_ptr@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall __noreturn sub_18007C2C0(std::exception_ptr *a1)
{
  std::exception_ptr::_RethrowException(a1);
}
