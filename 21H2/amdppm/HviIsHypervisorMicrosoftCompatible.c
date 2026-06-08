/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1C000EAF4
 * Callers:
 *     HviGetHypervisorFeatures @ 0x1C000EA58 (HviGetHypervisorFeatures.c)
 *     ProcLibGlobalInit @ 0x1C00387D0 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001D90 (__security_check_cookie.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000EA98 (HviIsAnyHypervisorPresent.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  if ( HviIsAnyHypervisorPresent() )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
  }
  else
  {
    LODWORD(_RAX) = 0;
  }
  return (_DWORD)_RAX == 824407624;
}
