/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x14054CE04
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x14039DA34 (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvlpPrepareFlushHeader @ 0x14039DC38 (HvlpPrepareFlushHeader.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall HvlpSlowFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+30h] [rbp-58h]
  __int64 v10; // [rsp+38h] [rbp-50h]
  __int64 v11; // [rsp+40h] [rbp-48h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v8, 1, (__int64)&v11, 24LL);
  HvlpPrepareFlushHeader(v6, a1, a2, a3);
  HvcallInitiateHypercall(2);
  return HvlpReleaseHypercallPage((__int64)&v8);
}
