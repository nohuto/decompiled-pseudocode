/*
 * XREFs of ??_ELockScreenDirectorServiceProviderImpl@@EEAAPEAXI@Z @ 0x180216F68
 * Callers:
 *     ??_ELockScreenDirectorServiceProviderImpl@@GDA@EAAPEAXI@Z @ 0x1800F51F0 (--_ELockScreenDirectorServiceProviderImpl@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1LockScreenDirectorServiceProviderImpl@@EEAA@XZ @ 0x180216DEC (--1LockScreenDirectorServiceProviderImpl@@EEAA@XZ.c)
 */

LockScreenDirectorServiceProviderImpl *__fastcall LockScreenDirectorServiceProviderImpl::`vector deleting destructor'(
        LockScreenDirectorServiceProviderImpl *this,
        char a2)
{
  LockScreenDirectorServiceProviderImpl::~LockScreenDirectorServiceProviderImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
