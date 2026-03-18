/*
 * XREFs of SeValidateImageHeader @ 0x14070F24C
 * Callers:
 *     MiValidateSectionCreate @ 0x14070EA48 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     SepScheduleImageVerificationCallbacks @ 0x14076C5A4 (SepScheduleImageVerificationCallbacks.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeValidateImageHeader(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  if ( qword_140C1D960 )
  {
    if ( (a9 & 1) != 0 )
      _InterlockedCompareExchange(&dword_140CEC6A4, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_140C1D960)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
