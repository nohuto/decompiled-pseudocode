/*
 * XREFs of ObpMarkDirectoryTreeTemporary @ 0x1406E1C30
 * Callers:
 *     ObCloseHandleTableEntry @ 0x1405F34B0 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x14063D600 (ObpDeleteNameCheck.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406E1CA8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall ObpMarkDirectoryTreeTemporary(struct _DMA_ADAPTER *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v2; // rdi
  PVOID v3; // rbx

  ObpMarkDirectoryObjectsTemporary(a1);
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
    v3 = ObpPendingObjectDirectoryList;
    if ( ObpPendingObjectDirectoryList )
    {
      v2 = (struct _DMA_ADAPTER *)*((_QWORD *)ObpPendingObjectDirectoryList + 1);
      ObpPendingObjectDirectoryList = *(PVOID *)ObpPendingObjectDirectoryList;
    }
    ExReleasePushLockEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    if ( !v2 )
      break;
    ObpMarkDirectoryObjectsTemporary(v2);
    HalPutDmaAdapter(v2);
  }
}
