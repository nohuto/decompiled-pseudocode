/*
 * XREFs of ??0bad_array_new_length@std@@QEAA@AEBV01@@Z @ 0x18003CAC8
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18003C34E (_o___std_exception_copy_0.c)
 */

std::bad_array_new_length *__fastcall std::bad_array_new_length::bad_array_new_length(
        std::bad_array_new_length *this,
        const struct std::bad_array_new_length *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  *(_QWORD *)this = &std::bad_array_new_length::`vftable';
  return this;
}
