/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x14075C2E4
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1407320D0 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x14036B438 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14037C7E0 (PipRestoreDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x140391294 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1403914E8 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140392BEC (IopDecrementDeviceObjectHandleCount.c)
 *     PpDevNodeUnlockTree @ 0x1406A5D00 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A5DF4 (PnpAcquireDependencyRelationsLock.c)
 *     PipClearDevNodeFlags @ 0x140726F44 (PipClearDevNodeFlags.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14072C304 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiDmaGuardProcessPostRemove @ 0x14073222C (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x1407322A4 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140732450 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x140733048 (PipSetDevNodeProblem.c)
 *     PnpDisableDeviceInterfaces @ 0x14075C4DC (PnpDisableDeviceInterfaces.c)
 *     PipConvertResolutionsToReservations @ 0x1407BABC8 (PipConvertResolutionsToReservations.c)
 */

void __fastcall PnpSurpriseRemoveLockedDeviceNode(ULONG_PTR MaxDataSize, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // esi
  struct _DEVICE_OBJECT *v5; // r12
  int v6; // r13d
  int v7; // r15d
  int v9; // r14d
  __int64 v10; // rbx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rbp
  struct _DMA_ADAPTER *v18; // rbx
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(MaxDataSize + 300);
  v5 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v6 = a3;
  v7 = a2;
  v9 = 768;
  v19 = 0LL;
  if ( v4 == 782 || v4 == 783 )
  {
    v9 = v4;
    PipRestoreDevNodeState(MaxDataSize);
    v4 = *(_DWORD *)(MaxDataSize + 300);
  }
  *(_WORD *)(MaxDataSize + 466) = 0;
  if ( v4 == 785 && v9 == 782 )
  {
    PipClearDevNodeFlags(MaxDataSize, 16);
    PipSetDevNodeState(MaxDataSize, 787);
    return;
  }
  v10 = *(_QWORD *)(MaxDataSize + 8);
  if ( v10 )
  {
    do
    {
      v16 = *(_DWORD *)(v10 + 396);
      v17 = *(_QWORD *)v10;
      if ( (v16 & 0x10) != 0 )
      {
        v16 &= ~0x10u;
        *(_DWORD *)(v10 + 396) = v16;
      }
      if ( *(_QWORD *)(v10 + 416) || *(_QWORD *)(v10 + 544) || (v16 & 0x40) != 0 )
        IopReleaseDeviceResources(v10, 0);
      PipSetDevNodeState(v10, 787);
      v10 = v17;
    }
    while ( v17 );
  }
  if ( v4 == 778 && (*(_DWORD *)(MaxDataSize + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v5, 1, (ULONG_PTR *)&v19);
    PnpUnlockMountableDevice((__int64)v5);
    PipClearDevNodeFlags(MaxDataSize, 0x1000000);
  }
  v11 = *(_DWORD *)(MaxDataSize + 300);
  if ( v11 < 769 || v11 > 770 && (v11 <= 776 || v11 == 778 || (unsigned int)(v11 - 785) > 3) )
  {
    v12 = IopRemoveDevice(v5, 23);
    PnpDisableDeviceInterfaces(MaxDataSize + 40);
    if ( v12 >= 0 )
      IopReleaseDeviceResources(MaxDataSize, 0);
    v13 = MaxDataSize;
    if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    {
      LODWORD(a2) = 787;
LABEL_13:
      PipSetDevNodeState(v13, a2);
      goto LABEL_14;
    }
    PipSetDevNodeState(MaxDataSize, 785);
    a2 = 782LL;
    if ( v9 == 782 )
    {
      v13 = MaxDataSize;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( v4 == 778 )
  {
    v18 = (struct _DMA_ADAPTER *)*((_QWORD *)&v19 + 1);
    if ( *((_QWORD *)&v19 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v19 + 1), a2, a3, a4);
      HalPutDmaAdapter(v18);
    }
  }
  if ( v7 && (*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(MaxDataSize, v7, v6);
  *(_DWORD *)(MaxDataSize + 704) &= ~2u;
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
  {
    PnpAcquireDependencyRelationsLock(1);
    v14 = *(_QWORD *)(MaxDataSize + 32);
    if ( v14 )
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 80LL);
    else
      v15 = 0LL;
    if ( v15 )
      PipConvertResolutionsToReservations(v15);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    PipProcessRebuildPowerRelationsQueue();
  }
  PiDmaGuardProcessPostRemove(MaxDataSize, v7, 0);
}
