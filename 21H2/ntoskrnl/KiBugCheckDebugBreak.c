/*
 * XREFs of KiBugCheckDebugBreak @ 0x140518060
 * Callers:
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x140517C60 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403AF8D0 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x140407A90 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x1405187F8 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
