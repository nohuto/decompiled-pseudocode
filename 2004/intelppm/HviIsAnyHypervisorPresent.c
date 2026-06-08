/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1C0001C68
 * Callers:
 *     RegisterKernelPepIdleStatesV2 @ 0x1C00362FC (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelPlatformStates @ 0x1C0036C6C (RegisterKernelPlatformStates.c)
 *     ProcLibGlobalInit @ 0x1C003B758 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
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
