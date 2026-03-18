/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x140547AF4
 * Callers:
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x140578EF0 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvlNotifyRootCrashdump @ 0x140547A48 (HvlNotifyRootCrashdump.c)
 */

__int64 __fastcall HvlPrepareForRootCrashdump(unsigned __int8 a1)
{
  __int64 v1; // rbx
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  v1 = a1;
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlNotifyRootCrashdump(0);
    KeStallExecutionProcessor(0xC350u);
  }
  if ( VslVsmEnabled )
  {
    memset(v3, 0, 0x68uLL);
    v3[1] = v1;
    VslpEnterIumSecureMode(2u, 260, 0, (__int64)v3);
    if ( (HvlpFlags & 2) != 0 )
    {
      if ( (_BYTE)v1 )
        PoAllProcIntrDisabled = 1;
    }
  }
  if ( (HvlpFlags & 2) != 0 )
    HvlNotifyRootCrashdump(1);
  off_140C01DF0[0]();
  return ((__int64 (__fastcall *)(__int64))off_140C01CE8[0])(1LL);
}
