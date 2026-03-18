/*
 * XREFs of HalpIsHvIptSupported @ 0x1404BD4AC
 * Callers:
 *     HalpProcGetFeatureBits @ 0x1403ABABC (HalpProcGetFeatureBits.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14039F208 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
