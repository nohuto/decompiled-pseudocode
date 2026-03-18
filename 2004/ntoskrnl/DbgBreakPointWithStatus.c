/*
 * XREFs of DbgBreakPointWithStatus @ 0x1403FEF70
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x1403613C0 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x140381BB8 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x1405129B0 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x1407BD0B0 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x14098FAAC (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
