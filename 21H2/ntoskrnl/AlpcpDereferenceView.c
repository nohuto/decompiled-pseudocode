/*
 * XREFs of AlpcpDereferenceView @ 0x1408C1BA4
 * Callers:
 *     AlpcpLocateSectionView @ 0x14066209C (AlpcpLocateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x1406D2148 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1405E9FC0 (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpDereferenceView(ULONG_PTR a1)
{
  AlpcpDereferenceBlobEx(a1, 1);
}
