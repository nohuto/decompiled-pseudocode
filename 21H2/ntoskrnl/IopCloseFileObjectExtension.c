/*
 * XREFs of IopCloseFileObjectExtension @ 0x1402B9618
 * Callers:
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     IoCancelFileOpen @ 0x140893620 (IoCancelFileOpen.c)
 * Callees:
 *     PsReleaseSiloHardReference @ 0x140200960 (PsReleaseSiloHardReference.c)
 */

LONG_PTR __fastcall IopCloseFileObjectExtension(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // rcx
  LONG_PTR result; // rax

  v1 = *(_QWORD **)(a1 + 208);
  if ( v1 != IopRevocationExtension )
  {
    v2 = v1[8];
    if ( v2 )
    {
      *(_DWORD *)(v2 + 4) &= ~1u;
      return PsReleaseSiloHardReference(*(PVOID *)(v2 + 8));
    }
  }
  return result;
}
