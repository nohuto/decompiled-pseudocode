/*
 * XREFs of KiBugCheckDebugBreak @ 0x1405129B0
 * Callers:
 *     KeBugCheck2 @ 0x140511660 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1405125B0 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403B99E0 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x1403FEF70 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x140513148 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
