/*
 * XREFs of PsReleaseSiloHardReference @ 0x140200940
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1402D7140 (IopDeleteFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x1403073C8 (IopCloseFileObjectExtension.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140674ADC (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020096C (PspHardDereferenceSiloWorker.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsReleaseSiloHardReference(PVOID Object)
{
  LONG_PTR result; // rax

  if ( Object )
  {
    PspHardDereferenceSiloWorker();
    return ObfDereferenceObjectWithTag(Object, 0x486C6953u);
  }
  return result;
}
