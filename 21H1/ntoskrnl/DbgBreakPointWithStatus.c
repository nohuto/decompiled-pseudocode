/*
 * XREFs of DbgBreakPointWithStatus @ 0x1403FDCE0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x14033C750 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x140381378 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x140512360 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x1407B9F40 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
