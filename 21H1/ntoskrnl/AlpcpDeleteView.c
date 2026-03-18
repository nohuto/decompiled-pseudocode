/*
 * XREFs of AlpcpDeleteView @ 0x140612DF8
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140615DDC (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcCreateSectionView @ 0x1406455C0 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x14070A470 (NtAlpcDeleteSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14070A6DC (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1406107EC (AlpcpDeleteBlob.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
  return 1;
}
