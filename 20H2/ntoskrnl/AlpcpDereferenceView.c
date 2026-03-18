/*
 * XREFs of AlpcpDereferenceView @ 0x1408C43E4
 * Callers:
 *     AlpcpLocateSectionView @ 0x14064AB2C (AlpcpLocateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x14070CA5C (AlpcpMapLegacyPortView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1405F1600 (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpDereferenceView(ULONG_PTR a1)
{
  AlpcpDereferenceBlobEx(a1, 1);
}
