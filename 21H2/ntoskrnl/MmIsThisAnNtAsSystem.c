/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x14020DC80
 * Callers:
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x14078C978 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x140796320 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x1407963DC (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x1407D3C1C (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140CFB19C;
}
