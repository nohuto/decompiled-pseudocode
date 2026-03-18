/*
 * XREFs of DbgBreakPointWithStatus @ 0x140405240
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140364830 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x140383898 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x1405162E0 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x1407CB940 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x140995A68 (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x1409B8030 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
