/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1403F1B10
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1403EB20C (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403EB4BC (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x1403EB674 (SymCryptParallelHashSetNextWork.c)
 *     KeGuardDispatchICall @ 0x140A0E330 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
