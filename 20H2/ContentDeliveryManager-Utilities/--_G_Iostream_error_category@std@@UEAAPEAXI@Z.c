/*
 * XREFs of ??_G_Iostream_error_category@std@@UEAAPEAXI@Z @ 0x180007C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

std::_Iostream_error_category *__fastcall std::_Iostream_error_category::`scalar deleting destructor'(
        std::_Iostream_error_category *this,
        char a2)
{
  *(_QWORD *)this = &std::error_category::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
