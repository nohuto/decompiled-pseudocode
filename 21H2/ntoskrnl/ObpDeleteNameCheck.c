/*
 * XREFs of ObpDeleteNameCheck @ 0x140663D60
 * Callers:
 *     ObpDereferenceNamedObject @ 0x14026D018 (ObpDereferenceNamedObject.c)
 *     ObMakeTemporaryObject @ 0x14061C330 (ObMakeTemporaryObject.c)
 *     ObOpenObjectByNameEx @ 0x14064AAF0 (ObOpenObjectByNameEx.c)
 *     ObpDecrementHandleCount @ 0x140663B94 (ObpDecrementHandleCount.c)
 *     ObpIncrementHandleCountEx @ 0x14070D340 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     ObpLockDirectoryExclusive @ 0x140229730 (ObpLockDirectoryExclusive.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObpReleaseLookupContext @ 0x14026CA70 (ObpReleaseLookupContext.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1405F18B0 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1405F1B2C (ObpDeleteSymbolicLinkName.c)
 *     ObpDeleteDirectoryEntry @ 0x1405FB640 (ObpDeleteDirectoryEntry.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406F1554 (ObpLookupDirectoryEntryEx.c)
 */

void __fastcall ObpDeleteNameCheck(__int64 a1)
{
  char v1; // al
  __int64 v3; // rax
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v6; // rbp
  char v7; // al
  struct _KTHREAD *v8; // rax
  struct _DMA_ADAPTER *v9; // r10
  struct _DMA_ADAPTER *v11; // r14
  struct _OBJECT_TYPE *v12; // r15
  struct _DMA_ADAPTER *v13; // rax
  __int64 v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+48h] [rbp-30h]
  __int16 v17; // [rsp+4Ch] [rbp-2Ch]
  __int16 v18; // [rsp+4Eh] [rbp-2Ah]
  int v19; // [rsp+50h] [rbp-28h]
  int v20; // [rsp+54h] [rbp-24h]

  v1 = *(_BYTE *)(a1 + 26);
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v20 = 0;
  if ( (v1 & 2) != 0 )
  {
    v3 = ObpInfoMaskToOffset[v1 & 3];
    v4 = a1 - v3;
    if ( a1 != v3 )
    {
      while ( 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        v6 = *(struct _DMA_ADAPTER **)v4;
        if ( !*(_QWORD *)v4 || ((*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) ? (v7 = 0) : (v7 = 1), !v7) )
        {
          ExReleasePushLockEx(a1 + 16, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        ObfReferenceObject(*(PVOID *)v4);
        ExReleasePushLockEx(a1 + 16, 0LL);
        KeLeaveCriticalRegion();
        v18 = 0;
        v19 = -60876;
        *(_OWORD *)v14 = 0LL;
        ObpLockDirectoryExclusive((__int64)v14, v6);
        v8 = KeGetCurrentThread();
        --v8->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        v9 = *(struct _DMA_ADAPTER **)v4;
        if ( *(struct _DMA_ADAPTER **)v4 == v6 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
          break;
        ObpReleaseLookupContext((__int64)v14);
        ExReleasePushLockEx(a1 + 16, 0LL);
        KeLeaveCriticalRegion();
        HalPutDmaAdapter(v6);
      }
      v11 = 0LL;
      if ( !*(_DWORD *)(v4 + 24) )
      {
        v12 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
        if ( v12 == ObpSymbolicLinkObjectType )
        {
          ObpDeleteSymbolicLinkName(a1 + 48);
          v9 = *(struct _DMA_ADAPTER **)v4;
        }
        v13 = (struct _DMA_ADAPTER *)ObpLookupDirectoryEntryEx(v9, 0, (__int64)v14);
        v11 = v13;
        if ( v12 == ObpDirectoryObjectType )
          ObfReferenceObject(v13);
        else
          v11 = 0LL;
        ObpDeleteDirectoryEntry((__int64)v14);
      }
      ObpReleaseLookupContext((__int64)v14);
      ExReleasePushLockEx(a1 + 16, 0LL);
      KeLeaveCriticalRegion();
      HalPutDmaAdapter(v6);
      if ( v11 )
      {
        ObpMarkDirectoryTreeTemporary(v11);
        HalPutDmaAdapter(v11);
      }
    }
  }
}
