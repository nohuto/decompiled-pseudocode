/*
 * XREFs of ObpDeleteNameCheck @ 0x1405E06C0
 * Callers:
 *     ObpDereferenceNamedObject @ 0x140204B80 (ObpDereferenceNamedObject.c)
 *     ObMakeTemporaryObject @ 0x1405D6DB0 (ObMakeTemporaryObject.c)
 *     ObpDecrementHandleCount @ 0x1405E04F8 (ObpDecrementHandleCount.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 *     ObpIncrementHandleCountEx @ 0x1406169E0 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14020AE7C (ObpReleaseLookupContext.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ObpLockDirectoryExclusive @ 0x14030FB48 (ObpLockDirectoryExclusive.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406B51E8 (ObpLookupDirectoryEntryEx.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1406BB4A4 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406BB720 (ObpDeleteSymbolicLinkName.c)
 *     ObpDeleteDirectoryEntry @ 0x1406C0530 (ObpDeleteDirectoryEntry.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+48h] [rbp-30h]
  __int16 v19; // [rsp+4Ch] [rbp-2Ch]
  __int16 v20; // [rsp+4Eh] [rbp-2Ah]
  int v21; // [rsp+50h] [rbp-28h]
  int v22; // [rsp+54h] [rbp-24h]

  v1 = *(_BYTE *)(a1 + 26);
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v22 = 0;
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
        v20 = 0;
        v21 = -60876;
        *(_OWORD *)v16 = 0LL;
        ObpLockDirectoryExclusive((__int64)v16, v6);
        v8 = KeGetCurrentThread();
        --v8->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
        v9 = *(struct _DMA_ADAPTER **)v4;
        if ( *(struct _DMA_ADAPTER **)v4 == v6 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
          break;
        ObpReleaseLookupContext((__int64)v16);
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
        v13 = (struct _DMA_ADAPTER *)ObpLookupDirectoryEntryEx(v9, 0, (__int64)v16);
        v11 = v13;
        if ( v12 == ObpDirectoryObjectType )
          ObfReferenceObject(v13);
        else
          v11 = 0LL;
        ObpDeleteDirectoryEntry(v16, v14, v15);
      }
      ObpReleaseLookupContext((__int64)v16);
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
