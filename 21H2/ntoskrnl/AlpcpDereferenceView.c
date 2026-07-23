/*
 * XREFs of AlpcpDereferenceView @ 0x1408C1D04
 * Callers:
 *     AlpcpLocateSectionView @ 0x140656EBC (AlpcpLocateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x1406A9428 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpDereferenceView(ULONG_PTR a1)
{
  AlpcpDereferenceBlobEx(a1, 1);
}
