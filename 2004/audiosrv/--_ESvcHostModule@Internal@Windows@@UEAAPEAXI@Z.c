/*
 * XREFs of ??_ESvcHostModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800B8F4C
 * Callers:
 *     ??_ESvcHostModule@Internal@Windows@@WCI@EAAPEAXI@Z @ 0x180074CA0 (--_ESvcHostModule@Internal@Windows@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800B857C (--1-$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ.c)
 *     ??1ServiceModuleBase@Internal@Windows@@QEAA@XZ @ 0x1800B8A10 (--1ServiceModuleBase@Internal@Windows@@QEAA@XZ.c)
 */

Windows::Internal::SvcHostModule *__fastcall Windows::Internal::SvcHostModule::`vector deleting destructor'(
        Windows::Internal::SvcHostModule *this,
        __int64 a2,
        const unsigned __int16 *a3,
        bool a4)
{
  char v5; // bl

  v5 = a2;
  Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::~OutOfProcModuleBase<Windows::Internal::SvcHostModule>(
    (Windows::Internal::SvcHostModule *)((char *)this + 40),
    a2,
    a3,
    a4);
  Windows::Internal::ServiceModuleBase::~ServiceModuleBase(this);
  if ( (v5 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
