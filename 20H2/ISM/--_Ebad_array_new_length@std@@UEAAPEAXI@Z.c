/*
 * XREFs of ??_Ebad_array_new_length@std@@UEAAPEAXI@Z @ 0x18003CBD0
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_destroy_0 @ 0x18003C3DA (_o___std_exception_destroy_0.c)
 *     ??3@YAXPEAX@Z @ 0x18003CB3C (--3@YAXPEAX@Z.c)
 */

std::bad_array_new_length *__fastcall std::bad_array_new_length::`vector deleting destructor'(
        std::bad_array_new_length *this,
        char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
