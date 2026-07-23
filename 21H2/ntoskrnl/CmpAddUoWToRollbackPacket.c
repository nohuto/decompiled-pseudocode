/*
 * XREFs of CmpAddUoWToRollbackPacket @ 0x140874D30
 * Callers:
 *     CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x1408752AC (CmpSnapshotTxOwnerArrayToRollbackPacket.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     CmpAddPointerToRollbackPacket @ 0x140874CDC (CmpAddPointerToRollbackPacket.c)
 */

__int64 __fastcall CmpAddUoWToRollbackPacket(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbx
  void *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  struct _DMA_ADAPTER *v10; // rcx

  v2 = *(_QWORD *)(a2 + 56);
  if ( (*(_DWORD *)(v2 + 48) & 0x80u) == 0 )
  {
    v5 = *(_QWORD *)(v2 + 72);
    v6 = (void *)v5;
  }
  else
  {
    v5 = *(_QWORD *)(v2 + 56);
    v6 = (void *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  ObfReferenceObject(v6);
  v7 = CmpAddPointerToRollbackPacket(a1, v5);
  v8 = v7;
  if ( v7 != -1073740008 )
  {
    if ( v7 < 0 )
      goto LABEL_8;
    v5 = 0LL;
  }
  v8 = 0;
LABEL_8:
  if ( v5 )
  {
    v9 = *(_QWORD *)(a2 + 56);
    if ( (*(_DWORD *)(v9 + 48) & 0x80u) == 0 )
      v10 = *(struct _DMA_ADAPTER **)(v9 + 72);
    else
      v10 = (struct _DMA_ADAPTER *)(*(_QWORD *)(v9 + 56) & 0xFFFFFFFFFFFFFFFEuLL);
    HalPutDmaAdapter(v10);
  }
  return v8;
}
