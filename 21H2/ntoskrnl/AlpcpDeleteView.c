/*
 * XREFs of AlpcpDeleteView @ 0x140662558
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140661B50 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140661E7C (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcDeleteSectionView @ 0x14069D2B0 (NtAlpcDeleteSectionView.c)
 *     NtAlpcCreateSectionView @ 0x1406D2330 (NtAlpcCreateSectionView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1405E9FC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1405EA09C (AlpcpDeleteBlob.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
  return 1;
}
