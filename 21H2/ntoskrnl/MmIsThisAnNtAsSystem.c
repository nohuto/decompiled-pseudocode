/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x14020C520
 * Callers:
 *     IopMountVolume @ 0x14068E624 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x14068F5DC (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x140825358 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140825414 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140863C68 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140D051DC;
}
