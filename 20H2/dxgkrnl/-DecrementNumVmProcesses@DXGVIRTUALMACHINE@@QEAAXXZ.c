/*
 * XREFs of ?DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0283278
 * Callers:
 *     ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C0047B48 (-DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVIRTUALMACHINE::DecrementNumVmProcesses(DXGVIRTUALMACHINE *this)
{
  _InterlockedDecrement((volatile signed __int32 *)this);
}
