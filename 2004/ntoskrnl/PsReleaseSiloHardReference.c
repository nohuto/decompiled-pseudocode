/*
 * XREFs of PsReleaseSiloHardReference @ 0x140200940
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140269E64 (IopDeleteFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x1403451C8 (IopCloseFileObjectExtension.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14065867C (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020096C (PspHardDereferenceSiloWorker.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
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
