/*
 * XREFs of ?DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0284258
 * Callers:
 *     ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C0047C08 (-DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVIRTUALMACHINE::DecrementNumVmProcesses(DXGVIRTUALMACHINE *this)
{
  _InterlockedDecrement((volatile signed __int32 *)this);
}
