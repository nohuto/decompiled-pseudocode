/*
 * XREFs of ??_EUtcWrapperBase@Diagnostics@Microsoft@@UEAAPEAXI@Z @ 0x18001B200
 * Callers:
 *     <none>
 * Callees:
 *     ??1UtcWrapperBase@Diagnostics@Microsoft@@UEAA@XZ @ 0x1800AAF8C (--1UtcWrapperBase@Diagnostics@Microsoft@@UEAA@XZ.c)
 */

Microsoft::Diagnostics::UtcWrapperBase *__fastcall Microsoft::Diagnostics::UtcWrapperBase::`vector deleting destructor'(
        Microsoft::Diagnostics::UtcWrapperBase *this,
        char a2)
{
  Microsoft::Diagnostics::UtcWrapperBase::~UtcWrapperBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
