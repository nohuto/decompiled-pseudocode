/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x1404F5EDC
 * Callers:
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvlNotifyRootCrashdump @ 0x1404F5E14 (HvlNotifyRootCrashdump.c)
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
