/*
 * XREFs of AlpcpDeleteView @ 0x14064AC88
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1405F7698 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcDeleteSectionView @ 0x14064A6A0 (NtAlpcDeleteSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14064A90C (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcCreateSectionView @ 0x14070CC40 (NtAlpcCreateSectionView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1405F1600 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1405F16DC (AlpcpDeleteBlob.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
  return 1;
}
