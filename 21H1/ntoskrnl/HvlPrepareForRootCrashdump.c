/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x1404F04FC
 * Callers:
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140278400 (KeStallExecutionProcessor.c)
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HvlNotifyRootCrashdump @ 0x1404F0434 (HvlNotifyRootCrashdump.c)
 */

__int64 HvlPrepareForRootCrashdump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  if ( (HvlpFlags & 2) != 0 )
  {
    HvlNotifyRootCrashdump(0);
    KeStallExecutionProcessor(0xC350u);
  }
  if ( VslVsmEnabled )
  {
    memset(v1, 0, 0x68uLL);
    VslpEnterIumSecureMode(2u, 260, 0, (__int64)v1);
    if ( (HvlpFlags & 2) != 0 )
      PoAllProcIntrDisabled = 1;
  }
  if ( (HvlpFlags & 2) != 0 )
    HvlNotifyRootCrashdump(1);
  off_140C007A0[0]();
  return ((__int64 (__fastcall *)(__int64))off_140C00698[0])(1LL);
}
