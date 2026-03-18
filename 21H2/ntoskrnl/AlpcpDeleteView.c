/*
 * XREFs of AlpcpDeleteView @ 0x1407A58A4
 * Callers:
 *     NtAlpcCreateSectionView @ 0x14066C3C0 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x1406BC370 (NtAlpcDeleteSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1407A4638 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1407A4E8C (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     AlpcpDeleteBlob @ 0x1407A59D8 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2);
  return 1;
}
