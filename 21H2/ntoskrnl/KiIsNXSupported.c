/*
 * XREFs of KiIsNXSupported @ 0x14099BBF0
 * Callers:
 *     KiInitializeNxSupportDiscard @ 0x140A3A9E4 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x14099BF68 (KiGetCpuVendor.c)
 */

char KiIsNXSupported()
{
  char v5; // bl
  char result; // al
  bool v7; // zf

  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x100000) != 0 )
    return 1;
  v5 = 0;
  v7 = (unsigned int)KiGetCpuVendor(_RCX, _RDX) == 1;
  result = 1;
  if ( !v7 )
    return v5;
  return result;
}
