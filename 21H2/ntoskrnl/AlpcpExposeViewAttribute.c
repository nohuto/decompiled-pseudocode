/*
 * XREFs of AlpcpExposeViewAttribute @ 0x1407A717C
 * Callers:
 *     AlpcpExposeViewAttribute32 @ 0x1407A723C (AlpcpExposeViewAttribute32.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407A6A34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x1407A7F84 (AlpcpReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407B0F40 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpExposeViewAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rbx
  int v11; // esi
  __int64 v12; // rcx

  v4 = *(_QWORD *)(a2 + 144);
  if ( v4 )
  {
    v9 = *(_QWORD *)(v4 + 16);
    AlpcpReferenceBlob(v9);
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 144) + 16LL);
    AlpcpLockForCachedReferenceBlob(v10);
    v11 = *(_DWORD *)(v10 + 48);
    AlpcpUnlockBlob(v10);
    AlpcpDereferenceBlobEx(v9, 1);
    v12 = *(_QWORD *)(a2 + 144);
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(v12 + 40);
    *(_QWORD *)(a3 + 24) = *(_QWORD *)(v12 + 48);
    if ( (v11 & 1) != 0 )
      *(_DWORD *)a3 = 0x40000;
    *a4 |= 0x40000000u;
  }
  return 0LL;
}
