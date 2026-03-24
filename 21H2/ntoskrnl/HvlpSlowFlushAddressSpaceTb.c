/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x1404FB064
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x1403901AC (KiFlushAddressSpaceTb.c)
 *     HvlFlushAddressSpaceTb @ 0x1403903EC (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpPrepareFlushHeader @ 0x140390398 (HvlpPrepareFlushHeader.c)
 *     HvcallInitiateHypercall @ 0x1403904C0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F2840 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F3430 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpSlowFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rax
  _OWORD v8[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+40h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v8, 1, (__int64)&v9, 24LL);
  HvlpPrepareFlushHeader(v6, a1, a2, a3);
  HvcallInitiateHypercall(2);
  return HvlpReleaseHypercallPage((__int64)v8);
}
