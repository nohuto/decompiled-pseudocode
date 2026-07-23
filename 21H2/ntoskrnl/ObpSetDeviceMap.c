/*
 * XREFs of ObpSetDeviceMap @ 0x14061C8E4
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1405F2340 (SeGetTokenDeviceMap.c)
 *     ObpSetSiloDeviceMap @ 0x1407A122C (ObpSetSiloDeviceMap.c)
 *     ObSetProcessDeviceMap @ 0x1408DF7EC (ObSetProcessDeviceMap.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObpCloseHandle @ 0x140684820 (ObpCloseHandle.c)
 *     ObfDereferenceDeviceMap @ 0x14068F1A4 (ObfDereferenceDeviceMap.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ObpSetDeviceMap(
        struct _DMA_ADAPTER *Object,
        __int64 a2,
        void *a3,
        KPROCESSOR_MODE a4,
        char a5,
        struct _DMA_ADAPTER ***a6)
{
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v9; // rdi
  struct _DMA_ADAPTER **PoolWithTag; // rax
  struct _DMA_ADAPTER **v11; // rbx
  NTSTATUS v12; // ebp
  void *v13; // rbp
  struct _DMA_ADAPTER **v14; // rdi
  void ***ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  void ***v17; // rsi
  struct _DMA_ADAPTER *v18; // rcx
  __int64 v19; // rax
  struct _DMA_ADAPTER *v20; // rdx
  int v21; // ebx
  struct _DMA_ADAPTER *v22; // rcx
  PVOID Objecta; // [rsp+40h] [rbp-28h] BYREF

  Objecta = 0LL;
  result = ObReferenceObjectByHandle(a3, 2u, ObpDirectoryObjectType, a4, &Objecta, 0LL);
  if ( result < 0 )
    return result;
  v9 = (struct _DMA_ADAPTER *)Objecta;
  if ( (a5 & 4) == 0 && (*((_DWORD *)Objecta + 84) & 4) != 0 )
  {
    v21 = -1073741811;
LABEL_25:
    HalPutDmaAdapter(v9);
    return v21;
  }
  PoolWithTag = (struct _DMA_ADAPTER **)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x6D44624Fu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v21 = -1073741670;
    goto LABEL_25;
  }
  memset(PoolWithTag, 0, 0x48uLL);
  *((_DWORD *)v11 + 6) = 1;
  *v11 = v9;
  v12 = ObOpenObjectByPointer(v9, 0x200u, 0LL, 0xF000Fu, ObpDirectoryObjectType, 0, (PHANDLE)v11 + 2);
  if ( v12 < 0 )
  {
    HalPutDmaAdapter(v9);
    ExFreePoolWithTag(v11, 0x6D44624Fu);
    return v12;
  }
  else
  {
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x6D44624Fu);
      v11[8] = Object;
    }
    v13 = 0LL;
    v14 = 0LL;
    ServerSiloGlobals = (void ***)PsGetServerSiloGlobals((__int64)Object);
    CurrentThread = KeGetCurrentThread();
    v17 = ServerSiloGlobals;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(ServerSiloGlobals + 15), 0LL);
    v18 = (struct _DMA_ADAPTER *)Objecta;
    v19 = *((_QWORD *)Objecta + 38);
    if ( v19 )
    {
      v14 = v11;
      v11 = (struct _DMA_ADAPTER **)*((_QWORD *)Objecta + 38);
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 24));
    }
    else
    {
      if ( (a5 & 1) != 0 )
        *v17 = (void **)v11;
      *(_QWORD *)&v18[19].Version = v11;
      if ( (a5 & 2) != 0 )
      {
        v20 = (struct _DMA_ADAPTER *)**v17;
        if ( v18 != v20 )
          v11[1] = v20;
      }
    }
    if ( a2 )
    {
      v13 = *(void **)(a2 + 1416);
      *(_QWORD *)(a2 + 1416) = v11;
    }
    ExReleasePushLockEx((ULONG_PTR)(v17 + 15), 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v14 )
    {
      ObpCloseHandle(v14[2], 0LL);
      HalPutDmaAdapter((PADAPTER_OBJECT)Objecta);
      v22 = v11[8];
      if ( v22 )
        ObfDereferenceObjectWithTag(v22, 0x6D44624Fu);
      ExFreePoolWithTag(v14, 0x6D44624Fu);
    }
    if ( v13 )
      ObfDereferenceDeviceMap(v13);
    if ( a6 )
      *a6 = v11;
    return 0;
  }
}
