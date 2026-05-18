/*
 * XREFs of ?_RethrowException@exception_ptr@std@@QEBAXXZ @ 0x18007B7C4
 * Callers:
 *     sub_18007C2C0 @ 0x18007C2C0 (sub_18007C2C0.c)
 * Callees:
 *     ?__ExceptionPtrRethrow@@YAXPEBX@Z @ 0x18011FA86 (-__ExceptionPtrRethrow@@YAXPEBX@Z.c)
 */

void __fastcall __noreturn std::exception_ptr::_RethrowException(std::exception_ptr *this)
{
  __ExceptionPtrRethrow(this);
  JUMPOUT(0x18007B7CDLL);
}
