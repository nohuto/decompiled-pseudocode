/*
 * XREFs of ObpMarkDirectoryTreeTemporary @ 0x1405F18B0
 * Callers:
 *     ObpDeleteNameCheck @ 0x140663D60 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x14070CA40 (ObCloseHandleTableEntry.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1405F1928 (ObpMarkDirectoryObjectsTemporary.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
