/*
 * XREFs of ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C0047B48
 * Callers:
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C02834AC (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 * Callees:
 *     ?DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0283278 (-DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSVMWP::DecrementNumVmProcesses(DXGVIRTUALMACHINE **this)
{
  DXGVIRTUALMACHINE::DecrementNumVmProcesses(this[62]);
}
