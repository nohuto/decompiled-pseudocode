/*
 * XREFs of ?ndisMBeginNormalMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0039BF0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0104684 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMBeginNormalMode(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int64 *p_SpinLock; // rbx
  KIRQL v3; // al
  void (__fastcall *v4)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r8

  p_SpinLock = &a1->PeriodicReceiveQueue.SpinLock;
  a1->InitMode = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&a1->PeriodicReceiveQueue.SpinLock);
  v4 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMIndicateReceiveNblsWithThrottling;
  if ( a1->PeriodicReceiveQueue.State != PeriodicReceivesOn )
    v4 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  a1->NormalTopReceive = a1->PeriodicReceiveQueue.State != PeriodicReceivesOn;
  a1->TopIndicateNetBufferListsHandler = v4;
  a1->TopIndicateLoopbackNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  KeReleaseSpinLock(p_SpinLock, v3);
}
