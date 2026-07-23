/*
 * XREFs of DbgBreakPointWithStatus @ 0x140407A90
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140272800 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x140384004 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x140518060 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x1407CFD70 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x1409B6030 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
