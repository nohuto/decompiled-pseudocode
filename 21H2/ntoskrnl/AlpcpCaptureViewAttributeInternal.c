/*
 * XREFs of AlpcpCaptureViewAttributeInternal @ 0x1407A4638
 * Callers:
 *     AlpcpCaptureViewAttribute32 @ 0x1406DA9E8 (AlpcpCaptureViewAttribute32.c)
 *     AlpcpCaptureViewAttribute @ 0x1407A45E4 (AlpcpCaptureViewAttribute.c)
 * Callees:
 *     AlpcpPrepareViewForDelivery @ 0x1407A4774 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpLocateSectionView @ 0x1407A4858 (AlpcpLocateSectionView.c)
 *     AlpcpDeleteView @ 0x1407A58A4 (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407A6A34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcReferenceBlobByHandle @ 0x1407A7EB0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpUnlockBlob @ 0x1407B0F40 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpCaptureViewAttributeInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  ULONG_PTR v13; // rbx
  int v14; // esi
  ULONG_PTR v15; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)a2 & 0xFFF8FFFF) != 0 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a3 + 144);
  BugCheckParameter2 = v8;
  if ( v8 )
  {
    *(_QWORD *)(a3 + 144) = 0LL;
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v8 + 16));
    --*(_DWORD *)(v8 + 76);
    AlpcpUnlockBlob(*(_QWORD *)(v8 + 16));
    if ( (*(_DWORD *)a2 & 0x10000) != 0 )
      AlpcpDeleteView(v8);
    AlpcpDereferenceBlobEx(v8);
  }
  *(_DWORD *)(a3 + 40) &= ~0x4000u;
  v9 = *(_QWORD *)(a2 + 8);
  if ( !v9 )
    return 0LL;
  v10 = *(_QWORD *)(a2 + 16);
  if ( !v10 )
    return 3221225793LL;
  v11 = *(_QWORD *)(a1 + 16);
  if ( !v11 )
    return 3221225480LL;
  v12 = AlpcReferenceBlobByHandle(v11 + 40, v9, AlpcSectionType);
  v13 = v12;
  if ( !v12 )
    return 3221225480LL;
  v14 = AlpcpLocateSectionView(v12, a1, v10, &BugCheckParameter2);
  if ( v14 >= 0 )
  {
    v15 = BugCheckParameter2;
    v14 = AlpcpPrepareViewForDelivery(BugCheckParameter2);
    if ( v14 < 0 )
      AlpcpDereferenceBlobEx(v15);
    else
      *(_QWORD *)(a4 + 40) = v15;
  }
  AlpcpDereferenceBlobEx(v13);
  return (unsigned int)v14;
}
