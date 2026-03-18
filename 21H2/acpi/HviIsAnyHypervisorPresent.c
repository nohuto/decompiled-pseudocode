/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1C00027A8
 * Callers:
 *     HviGetHypervisorFeatures @ 0x1C00026C8 (HviGetHypervisorFeatures.c)
 *     AcpiRootIsFeatureSupported @ 0x1C0002730 (AcpiRootIsFeatureSupported.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
