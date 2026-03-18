/*
 * XREFs of HviIsXboxNanovisorPresent @ 0x1403CA2D4
 * Callers:
 *     HalpTscSynchronization @ 0x1403CA230 (HalpTscSynchronization.c)
 *     KiIntSteerInit @ 0x140A40168 (KiIntSteerInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

char HviIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140C10DC0;
  if ( byte_140C10DC0 == -1 )
  {
    _RAX = 1LL;
    v0 = 0;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140C10DC0 = v0;
  }
  return v0;
}
