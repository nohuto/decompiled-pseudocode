/*
 * XREFs of ??_Glogic_error@std@@UEAAPEAXI@Z @ 0x1800B5420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _o___std_exception_destroy_0 @ 0x18006B48E (_o___std_exception_destroy_0.c)
 */

std::logic_error *__fastcall std::logic_error::`scalar deleting destructor'(std::logic_error *this, char a2)
{
  *(_QWORD *)this = &std::logic_error::`vftable';
  o___std_exception_destroy_0((__int64)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
