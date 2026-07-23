/*
 * XREFs of _local_unwind @ 0x1403CD750
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010E0 (PopThermalZoneDpc.c)
 *     ExpTimerDpcRoutine @ 0x14031E020 (ExpTimerDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x140323840 (CmpEnableLazyFlushDpcRoutine.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x140323940 (IopIrpStackProfilerDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x140323C90 (ExpCenturyDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x140323D70 (ExpTimeRefreshDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140323E90 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140391590 (ExpTimeZoneDpcRoutine.c)
 *     IopTimerDispatch @ 0x1404FB690 (IopTimerDispatch.c)
 *     SLGetSubscriptionPfn @ 0x140949608 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x140A5E7BC (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x140A5E960 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A5E9B0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A5EA00 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A5EA50 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A5EAA0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A5EB00 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A5EB60 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A5EBC0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A5EC20 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140A5ED80 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A5EDF0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A5EE40 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x140A5EEBC (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x140320530 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
