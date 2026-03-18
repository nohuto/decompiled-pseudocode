/*
 * XREFs of VslFlushSecureAddressSpace @ 0x1404F7058
 * Callers:
 *     KeFlushTb @ 0x14021E550 (KeFlushTb.c)
 *     HvlpSlowFlushListTb @ 0x1404F5DEC (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1404F5F6C (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS VslFlushSecureAddressSpace()
{
  _QWORD v1[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
    return 255;
  v1[1] = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
  return VslpEnterIumSecureMode(2u, 240, 0, (__int64)v1);
}
