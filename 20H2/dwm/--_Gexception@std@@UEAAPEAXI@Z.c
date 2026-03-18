/*
 * XREFs of ??_Gexception@std@@UEAAPEAXI@Z @ 0x14000ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1400031B8 (--3@YAXPEAX_K@Z.c)
 *     _o___std_exception_destroy_0 @ 0x1400041E4 (_o___std_exception_destroy_0.c)
 */

std::exception *__fastcall std::exception::`scalar deleting destructor'(std::exception *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0((__int64)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
