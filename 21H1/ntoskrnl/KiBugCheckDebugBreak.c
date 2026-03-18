/*
 * XREFs of KiBugCheckDebugBreak @ 0x140512360
 * Callers:
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x140511F60 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403AF3A0 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x1403FDCE0 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x140512AF8 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
