/*
 * XREFs of NtSetSystemPowerState @ 0x14099BF40
 * Callers:
 *     NtShutdownSystem @ 0x1405B0EC0 (NtShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 */

__int64 __fastcall NtSetSystemPowerState(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v7[100]; // [rsp+20h] [rbp-1B8h] BYREF

  memset(&v7[3], 0, 0x17CuLL);
  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  return PopTransitionSystemPowerStateEx(v7);
}
