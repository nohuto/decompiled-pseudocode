/*
 * XREFs of ??_EServiceModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800B8294
 * Callers:
 *     ??_EServiceModule@Internal@Windows@@WCI@EAAPEAXI@Z @ 0x1800741D0 (--_EServiceModule@Internal@Windows@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$OutOfProcModuleBase@VServiceModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800B78C0 (--1-$OutOfProcModuleBase@VServiceModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ.c)
 *     ??1ServiceModuleBase@Internal@Windows@@QEAA@XZ @ 0x1800B7DA0 (--1ServiceModuleBase@Internal@Windows@@QEAA@XZ.c)
 */

Windows::Internal::ServiceModule *__fastcall Windows::Internal::ServiceModule::`vector deleting destructor'(
        Windows::Internal::ServiceModule *this,
        __int64 a2,
        const unsigned __int16 *a3,
        bool a4)
{
  char v5; // bl

  v5 = a2;
  Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::ServiceModule>::~OutOfProcModuleBase<Windows::Internal::ServiceModule>(
    (Windows::Internal::ServiceModule *)((char *)this + 40),
    a2,
    a3,
    a4);
  Windows::Internal::ServiceModuleBase::~ServiceModuleBase(this);
  if ( (v5 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
