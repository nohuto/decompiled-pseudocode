/*
 * XREFs of KiBugCheckDebugBreak @ 0x140517E20
 * Callers:
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x140517A20 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403AF760 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x1404078B0 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x1405185B8 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
