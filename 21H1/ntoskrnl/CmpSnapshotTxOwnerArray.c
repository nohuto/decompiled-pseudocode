/*
 * XREFs of CmpSnapshotTxOwnerArray @ 0x140873A8C
 * Callers:
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 * Callees:
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpSnapshotTxOwnerArray(__int64 a1, unsigned int *a2, void ***a3)
{
  __int64 v3; // rbx
  unsigned int v8; // edi
  __int64 v9; // r12
  void **PoolWithTag; // rax
  __int64 v11; // r8
  void **v12; // rdx
  __int64 v13; // rcx
  void *v14; // rcx
  void **v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  void *v18; // rcx

  v3 = 0LL;
  if ( !*(_DWORD *)a1 )
    return 3221225485LL;
  v8 = *(_DWORD *)a1 & 0x7FFFFFFF;
  *a2 = 0;
  v9 = v8;
  PoolWithTag = (void **)ExAllocatePoolWithTag(PagedPool, 8LL * v8, 0x36344D43u);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 8LL * v8);
  if ( v8 == 1 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *a3;
    v13 = *(_QWORD *)(v11 + 56);
    if ( (*(_DWORD *)(v13 + 48) & 0x80u) == 0 )
    {
      *v12 = *(void **)(v13 + 72);
      v14 = **a3;
    }
    else
    {
      *v12 = *(void **)(v13 + 56);
      v14 = (void *)(*(_QWORD *)(*(_QWORD *)(v11 + 56) + 56LL) & 0xFFFFFFFFFFFFFFFEuLL);
    }
    ObfReferenceObject(v14);
  }
  else if ( v8 )
  {
    do
    {
      v15 = *a3;
      v16 = *(_QWORD *)(v3 * 8 + *(_QWORD *)(a1 + 8));
      v17 = *(_QWORD *)(v16 + 56);
      if ( (*(_DWORD *)(v17 + 48) & 0x80u) == 0 )
      {
        v15[v3] = *(void **)(v17 + 72);
        v18 = (*a3)[v3];
      }
      else
      {
        v15[v3] = *(void **)(v17 + 56);
        v18 = (void *)(*(_QWORD *)(*(_QWORD *)(v16 + 56) + 56LL) & 0xFFFFFFFFFFFFFFFEuLL);
      }
      ObfReferenceObject(v18);
      ++v3;
      --v9;
    }
    while ( v9 );
  }
  *a2 = v8;
  return 0LL;
}
