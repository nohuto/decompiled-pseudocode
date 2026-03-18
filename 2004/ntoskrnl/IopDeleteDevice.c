/*
 * XREFs of IopDeleteDevice @ 0x1406A5870
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     IopCleanupNotifications @ 0x14037A5C0 (IopCleanupNotifications.c)
 *     IopDestroyDeviceNode @ 0x1406A58D4 (IopDestroyDeviceNode.c)
 *     PnpDeleteAllDependencyRelations @ 0x1406A59EC (PnpDeleteAllDependencyRelations.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
