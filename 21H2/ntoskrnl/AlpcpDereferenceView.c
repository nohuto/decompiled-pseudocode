/*
 * XREFs of AlpcpDereferenceView @ 0x140965B94
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x14066C1DC (AlpcpMapLegacyPortView.c)
 *     AlpcpLocateSectionView @ 0x1407A4858 (AlpcpLocateSectionView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 */

unsigned __int64 __fastcall AlpcpDereferenceView(ULONG_PTR a1)
{
  return AlpcpDereferenceBlobEx(a1, 1);
}
