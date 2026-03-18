/*
 * XREFs of AlpcpDeleteView @ 0x14068AF78
 * Callers:
 *     NtAlpcCreateSectionView @ 0x1406103A0 (NtAlpcCreateSectionView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14062EAF0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcDeleteSectionView @ 0x140648FD0 (NtAlpcDeleteSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14064923C (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x14068896C (AlpcpDeleteBlob.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
  return 1;
}
