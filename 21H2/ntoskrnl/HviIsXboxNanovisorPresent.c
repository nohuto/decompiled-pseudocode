/*
 * XREFs of HviIsXboxNanovisorPresent @ 0x1403CE794
 * Callers:
 *     HalpTscSynchronization @ 0x1403CE6F0 (HalpTscSynchronization.c)
 *     KiIntSteerInit @ 0x140A4D1CC (KiIntSteerInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

char HviIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140C10E68;
  if ( byte_140C10E68 == -1 )
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
    byte_140C10E68 = v0;
  }
  return v0;
}
