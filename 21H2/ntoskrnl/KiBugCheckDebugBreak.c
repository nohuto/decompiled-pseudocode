/*
 * XREFs of KiBugCheckDebugBreak @ 0x1405672C0
 * Callers:
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x140566EC0 (KeEnterKernelDebugger.c)
 *     KiAttemptBugcheckRecovery @ 0x1405788B0 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403C2310 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x140429800 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x140567D6C (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
