/*
 * XREFs of ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C00578B8
 * Callers:
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C033534C (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 * Callees:
 *     ?DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C03350B8 (-DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSVMWP::DecrementNumVmProcesses(DXGVIRTUALMACHINE **this)
{
  DXGVIRTUALMACHINE::DecrementNumVmProcesses(this[76]);
}
