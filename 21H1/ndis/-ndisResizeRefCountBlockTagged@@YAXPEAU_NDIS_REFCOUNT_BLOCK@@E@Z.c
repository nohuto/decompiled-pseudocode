/*
 * XREFs of ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C0008BCC
 * Callers:
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0008C68 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

void __fastcall ndisResizeRefCountBlockTagged(struct _NDIS_REFCOUNT_BLOCK *a1, unsigned __int8 a2)
{
  SIZE_T v4; // rbp
  _NDIS_REFCOUNT_TAGGED_ENTRY *PoolWithTag; // rax
  _NDIS_REFCOUNT_TAGGED_ENTRY *v6; // rdi
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // rdx

  v4 = 2 * (unsigned int)a2;
  PoolWithTag = (_NDIS_REFCOUNT_TAGGED_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x7872444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v4);
    Tags = a1->TaggedRefCounts.Tags;
    if ( Tags )
      memmove(v6, Tags, 2LL * a1->NumOverflowTaggedEntries);
    ndisFreeRefCountAuxiliaryMemory(a1);
    a1->TaggedRefCounts.Tags = v6;
    a1->NumOverflowTaggedEntries = a2;
  }
  else
  {
    ndisFreeRefCountAuxiliaryMemory(a1);
    a1->Type = 2;
  }
}
