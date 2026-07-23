/*
 * XREFs of _local_unwind @ 0x1403CE590
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010E0 (PopThermalZoneDpc.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x140328950 (CmpEnableLazyFlushDpcRoutine.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x140328A20 (IopIrpStackProfilerDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x140328D70 (ExpCenturyDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x140328E90 (ExpTimeRefreshDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140328FB0 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimerDpcRoutine @ 0x14035BC10 (ExpTimerDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x1403922C0 (ExpTimeZoneDpcRoutine.c)
 *     IopTimerDispatch @ 0x1404FBCE0 (IopTimerDispatch.c)
 *     SLGetSubscriptionPfn @ 0x14094A9A8 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x140A5D85C (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x140A5DA00 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A5DA50 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A5DAA0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A5DAF0 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A5DB40 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A5DBA0 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A5DC00 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A5DC60 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A5DCC0 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140A5DE20 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A5DE90 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A5DEE0 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x140A5DF5C (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x14035E150 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
