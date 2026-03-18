/*
 * XREFs of PsReleaseSiloHardReference @ 0x140200940
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x14020B5C0 (IopDeleteFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x14031600C (IopCloseFileObjectExtension.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14062CB7C (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020096C (PspHardDereferenceSiloWorker.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
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
