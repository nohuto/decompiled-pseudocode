/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1402EE2B0
 * Callers:
 *     IopMountVolume @ 0x1406E5720 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x14078C7B8 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x140796120 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x1407961DC (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x1407D3AAC (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140CFB19C;
}
