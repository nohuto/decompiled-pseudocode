/*
 * XREFs of _local_unwind @ 0x1403D1220
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010E0 (PopThermalZoneDpc.c)
 *     ExpTimerDpcRoutine @ 0x14032C670 (ExpTimerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x14035AC90 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x14035ADA0 (ExpTimeRefreshDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x14035AEC0 (ExpCenturyDpcRoutine.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x14035AFE0 (IopIrpStackProfilerDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x14035B330 (CmpEnableLazyFlushDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140394780 (ExpTimeZoneDpcRoutine.c)
 *     IopTimerDispatch @ 0x1404FF5B0 (IopTimerDispatch.c)
 *     SLGetSubscriptionPfn @ 0x140950768 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140A1E320 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x140A64BBC (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x140A64D60 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A64DB0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A64E00 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A64E50 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A64EA0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A64F00 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A64F60 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A64FC0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A65020 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140A65180 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A651F0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A65240 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x140A652BC (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x14032EAB0 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
