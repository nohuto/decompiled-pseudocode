/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1403F2DA0
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1403EC04C (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403EC2FC (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x1403EC4B4 (SymCryptParallelHashSetNextWork.c)
 *     KeGuardDispatchICall @ 0x140A0E330 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
