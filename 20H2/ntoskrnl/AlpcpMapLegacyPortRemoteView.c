/*
 * XREFs of AlpcpMapLegacyPortRemoteView @ 0x14076BFD4
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1405E85DC (AlpcpAcceptConnectPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1405E7A94 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1405EEEC0 (AlpcpUnlockBlob.c)
 *     AlpcpInsertResourcePort @ 0x1405F5090 (AlpcpInsertResourcePort.c)
 *     AlpcpRemoveResourcePort @ 0x140685C50 (AlpcpRemoveResourcePort.c)
 */

__int64 __fastcall AlpcpMapLegacyPortRemoteView(signed __int64 *Object, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  signed __int64 *v4; // rdi
  signed __int64 *v7; // rcx

  v3 = *(_QWORD *)(a2 + 40);
  v4 = Object + 44;
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v3 + 16));
  v7 = *(signed __int64 **)(v3 + 24);
  if ( Object != v7 )
  {
    AlpcpRemoveResourcePort((__int64)v7, v3);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(v3 + 24));
    ObfReferenceObject(Object);
    *(_QWORD *)(v3 + 24) = Object;
    AlpcpInsertResourcePort((__int64)Object, v3);
  }
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)a3 = 24;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v3 + 40);
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(v3 + 48);
  AlpcpUnlockBlob(*(_QWORD *)(v3 + 16));
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return 0LL;
}
