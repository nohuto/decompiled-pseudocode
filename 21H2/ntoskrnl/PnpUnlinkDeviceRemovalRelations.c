/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x140737C58
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x140735D08 (PipRemoveDevicesInRelationList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x140735DD0 (PiEventRemovalPostSurpriseRemove.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140736914 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     PpDevNodeRemoveFromTree @ 0x14036D8B4 (PpDevNodeRemoveFromTree.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14036DA64 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PiPnpRtlEndOperation @ 0x140633ED8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140634680 (PiPnpRtlBeginOperation.c)
 *     PpDevNodeUnlockTree @ 0x140639BC0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140639C54 (PpDevNodeLockTree.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140736390 (PnpCleanupDeviceRegistryValues.c)
 *     IopEnumerateRelations @ 0x1407384F0 (IopEnumerateRelations.c)
 *     IopIsDescendantNode @ 0x140738684 (IopIsDescendantNode.c)
 *     _PnpSetObjectProperty @ 0x140745C24 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746040 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     IopRemoveCurrentRelationFromList @ 0x1408B2814 (IopRemoveCurrentRelationFromList.c)
 */

void __fastcall PnpUnlinkDeviceRemovalRelations(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  char v5; // bl
  bool v6; // zf
  __int64 v7; // rcx
  unsigned __int8 (__fastcall *FlushAdapterBuffers)(_DMA_ADAPTER *, _MDL *, void *, void *, unsigned int, unsigned __int8); // rdi
  __int64 v9; // [rsp+50h] [rbp-10h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+90h] [rbp+30h] BYREF
  int v11; // [rsp+98h] [rbp+38h] BYREF
  int v12; // [rsp+9Ch] [rbp+3Ch]
  char v13; // [rsp+A0h] [rbp+40h] BYREF
  PVOID P; // [rsp+A8h] [rbp+48h] BYREF

  DmaAdapter = 0LL;
  v9 = 0LL;
  P = 0LL;
  PpDevNodeLockTree(4);
  if ( a2 && *(_BYTE *)(a2 + 8) )
  {
    v12 = 0;
    v11 = 1;
    while ( (unsigned __int8)IopEnumerateRelations(
                               a2,
                               (unsigned int)&v11,
                               (unsigned int)&DmaAdapter,
                               (unsigned int)&v13,
                               0LL) )
    {
      FlushAdapterBuffers = DmaAdapter[19].DmaOperations->FlushAdapterBuffers;
      IopIsDescendantNode(a2);
      if ( (unsigned int)(*((_DWORD *)FlushAdapterBuffers + 75) - 787) <= 1 )
      {
        CurrentThread = KeGetCurrentThread();
        v4 = *((_QWORD *)FlushAdapterBuffers + 2);
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PnpCleanupDeviceRegistryValues((__int64)FlushAdapterBuffers + 40);
        v5 = PpDevNodeRemoveFromTree(FlushAdapterBuffers);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        if ( v5 )
        {
          v6 = *((_QWORD *)FlushAdapterBuffers + 6) == 0LL;
          *((_QWORD *)FlushAdapterBuffers + 81) = v4;
          if ( !v6 )
          {
            PiPnpRtlBeginOperation(&P);
            v9 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              PiPnpRtlCtx,
              *((_QWORD *)FlushAdapterBuffers + 6),
              1,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)&v9,
              8,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *((_QWORD *)FlushAdapterBuffers + 6), 1LL);
            PnpSetDeviceInstanceRemovalEvent((__int64)FlushAdapterBuffers);
            if ( P )
            {
              PiPnpRtlEndOperation((PVOID **)P);
              P = 0LL;
            }
          }
          if ( *((_DWORD *)FlushAdapterBuffers + 75) == 788 )
            IopRemoveCurrentRelationFromList(a2, DmaAdapter, &v11);
          HalPutDmaAdapter(DmaAdapter);
        }
      }
    }
  }
  PpDevNodeUnlockTree(4);
}
