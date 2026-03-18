/*
 * XREFs of KiBugCheckDebugBreak @ 0x1405162E0
 * Callers:
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x140515EE0 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403BBE60 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x140405240 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x140516A78 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
