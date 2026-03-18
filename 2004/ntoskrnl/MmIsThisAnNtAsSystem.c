/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x14026FF10
 * Callers:
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x14077A3D8 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x14077E660 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14077E71C (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x1407C0E2C (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140CFB19C;
}
