/*
 * XREFs of VslFlushSecureAddressSpace @ 0x1404FA8E8
 * Callers:
 *     KeFlushTb @ 0x1402EA180 (KeFlushTb.c)
 *     HvlpSlowFlushListTb @ 0x1404F967C (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1404F97FC (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
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
