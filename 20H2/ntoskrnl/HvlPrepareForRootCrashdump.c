/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x1404F43BC
 * Callers:
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140288CF0 (KeStallExecutionProcessor.c)
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     HvlNotifyRootCrashdump @ 0x1404F42F4 (HvlNotifyRootCrashdump.c)
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
