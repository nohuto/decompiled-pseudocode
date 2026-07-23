/*
 * XREFs of AlpcpDeleteView @ 0x140657378
 * Callers:
 *     NtAlpcDeleteSectionView @ 0x1405FC380 (NtAlpcDeleteSectionView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140656970 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140656C9C (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcCreateSectionView @ 0x1406A9610 (NtAlpcCreateSectionView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1406D97FC (AlpcpDeleteBlob.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2);
  return 1;
}
