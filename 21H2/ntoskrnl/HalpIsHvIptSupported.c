/*
 * XREFs of HalpIsHvIptSupported @ 0x1404C25DC
 * Callers:
 *     HalpProcGetFeatureBits @ 0x1403A8DCC (HalpProcGetFeatureBits.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A20E8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall HalpIsHvIptSupported(__int64 a1)
{
  char v1; // r10

  if ( HalpIsMicrosoftCompatibleHvLoaded(a1) )
  {
    _RAX = 0x40000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x4000000B )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      if ( (_RDX & 0x8000000) != 0 )
        return 1;
    }
  }
  return v1;
}
