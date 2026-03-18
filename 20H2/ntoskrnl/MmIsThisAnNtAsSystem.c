/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x14031F360
 * Callers:
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x1407889D8 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x14078BC00 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14078BCBC (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x1407CF6BC (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140CFB19C;
}
