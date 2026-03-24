/*
 * XREFs of IopDeleteDevice @ 0x1406B2FD0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IopCleanupNotifications @ 0x14037C458 (IopCleanupNotifications.c)
 *     IopDestroyDeviceNode @ 0x1406B3034 (IopDestroyDeviceNode.c)
 *     PnpDeleteAllDependencyRelations @ 0x1406B314C (PnpDeleteAllDependencyRelations.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteDevice(__int64 a1)
{
  void *v2; // rcx
  struct _DMA_ADAPTER *v3; // rcx

  PnpDeleteAllDependencyRelations(a1);
  IopDestroyDeviceNode(*(PVOID *)(*(_QWORD *)(a1 + 312) + 40LL));
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) & 0x1000) != 0 )
    IopCleanupNotifications(*(PVOID *)(a1 + 8), (PVOID)a1);
  v2 = (void *)_InterlockedExchange64((volatile __int64 *)(a1 + 56), 0LL);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(struct _DMA_ADAPTER **)(a1 + 8);
  if ( v3 )
    HalPutDmaAdapter(v3);
}
