/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x1407317B4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407303C4 (PnpProcessQueryRemoveAndEject.c)
 *     PipRemoveDevicesInRelationList @ 0x14075F02C (PipRemoveDevicesInRelationList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x140760938 (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14036D53C (PnpSetDeviceInstanceRemovalEvent.c)
 *     PpDevNodeRemoveFromTree @ 0x14036D608 (PpDevNodeRemoveFromTree.c)
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     PpDevNodeUnlockTree @ 0x1406A5D00 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A5E2C (PpDevNodeLockTree.c)
 *     _PnpSetObjectProperty @ 0x1407260F4 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140726510 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     IopEnumerateRelations @ 0x14073204C (IopEnumerateRelations.c)
 *     IopIsDescendantNode @ 0x1407321E0 (IopIsDescendantNode.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14073376C (PnpCleanupDeviceRegistryValues.c)
 *     IopRemoveCurrentRelationFromList @ 0x1408AF714 (IopRemoveCurrentRelationFromList.c)
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
        PnpCleanupDeviceRegistryValues((char *)FlushAdapterBuffers + 40);
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
              *(__int64 *)&PiPnpRtlCtx,
              *((_QWORD *)FlushAdapterBuffers + 6),
              1u,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)&v9,
              8u,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *((_QWORD *)FlushAdapterBuffers + 6), 1);
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
