/*
 * XREFs of ??_Ebad_array_new_length@std@@UEAAPEAXI@Z @ 0x18003CB50
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_destroy_0 @ 0x18003C35A (_o___std_exception_destroy_0.c)
 *     ??3@YAXPEAX@Z @ 0x18003CABC (--3@YAXPEAX@Z.c)
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
