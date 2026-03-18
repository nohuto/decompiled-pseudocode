/*
 * XREFs of VslFlushSecureAddressSpace @ 0x1404F6A08
 * Callers:
 *     KeFlushTb @ 0x1402775A0 (KeFlushTb.c)
 *     HvlpSlowFlushListTb @ 0x1404F579C (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1404F591C (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
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
