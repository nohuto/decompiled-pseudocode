/*
 * XREFs of ?_RethrowException@exception_ptr@std@@QEBAXXZ @ 0x180081094
 * Callers:
 *     sub_180081B90 @ 0x180081B90 (sub_180081B90.c)
 * Callees:
 *     ?__ExceptionPtrRethrow@@YAXPEBX@Z @ 0x180125356 (-__ExceptionPtrRethrow@@YAXPEBX@Z.c)
 */

void __fastcall __noreturn std::exception_ptr::_RethrowException(std::exception_ptr *this)
{
  __ExceptionPtrRethrow(this);
  JUMPOUT(0x18008109DLL);
}
