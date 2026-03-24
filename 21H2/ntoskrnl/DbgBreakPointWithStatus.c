/*
 * XREFs of DbgBreakPointWithStatus @ 0x1404078B0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x1402841E0 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x140383EB0 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x140517E20 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x1407CFC00 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x140992A68 (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
