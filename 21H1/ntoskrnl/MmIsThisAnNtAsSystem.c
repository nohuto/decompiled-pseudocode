/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x14033F550
 * Callers:
 *     IopMountVolume @ 0x140701D54 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x140777FC8 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x14077EE70 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14077EF2C (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x1407BDC0C (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140CFB19C;
}
