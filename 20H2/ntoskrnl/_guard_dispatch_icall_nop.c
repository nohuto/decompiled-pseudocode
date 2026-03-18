/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1403F7950
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1403EECDC (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403EEF8C (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x1403EF144 (SymCryptParallelHashSetNextWork.c)
 *     KeGuardDispatchICall @ 0x140A14330 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
