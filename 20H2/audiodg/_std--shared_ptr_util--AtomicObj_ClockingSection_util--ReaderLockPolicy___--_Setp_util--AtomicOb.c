/*
 * XREFs of _std::shared_ptr_util::AtomicObj_ClockingSection_util::ReaderLockPolicy___::_Setp_util::AtomicObj_ClockingSection_util::ReaderLockPolicy____::_1_::catch$1 @ 0x140068848
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x140029D37 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn std::shared_ptr_util::AtomicObj_ClockingSection_util::ReaderLockPolicy___::_Setp_util::AtomicObj_ClockingSection_util::ReaderLockPolicy____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v2 )
    (**v2)(v2, 1LL);
  throw;
}
