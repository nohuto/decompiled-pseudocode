/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x14076AA54
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140741474 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x14036D418 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14037E510 (PipRestoreDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x140393754 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1403939A8 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1403950AC (IopDecrementDeviceObjectHandleCount.c)
 *     PpDevNodeUnlockTree @ 0x14071F9C0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14071FAB4 (PnpAcquireDependencyRelationsLock.c)
 *     PipClearDevNodeFlags @ 0x1407359D4 (PipClearDevNodeFlags.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14073AD94 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiDmaGuardProcessPostRemove @ 0x1407415D0 (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x14074164C (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x1407417F8 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x1407424D8 (PipSetDevNodeProblem.c)
 *     PnpDisableDeviceInterfaces @ 0x14076AC4C (PnpDisableDeviceInterfaces.c)
 *     PipConvertResolutionsToReservations @ 0x1407C9458 (PipConvertResolutionsToReservations.c)
 */

_QWORD *__fastcall PnpSurpriseRemoveLockedDeviceNode(ULONG_PTR MaxDataSize, int a2, int a3)
{
  int v3; // esi
  struct _DEVICE_OBJECT *v4; // r12
  int v8; // r14d
  __int64 v9; // rbx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v17; // eax
  __int64 v18; // rbp
  struct _DMA_ADAPTER *v19; // rbx
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(MaxDataSize + 300);
  v4 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v8 = 768;
  v20 = 0LL;
  if ( v3 == 782 || v3 == 783 )
  {
    v8 = v3;
    PipRestoreDevNodeState(MaxDataSize);
    v3 = *(_DWORD *)(MaxDataSize + 300);
  }
  *(_WORD *)(MaxDataSize + 466) = 0;
  if ( v3 == 785 && v8 == 782 )
  {
    PipClearDevNodeFlags(MaxDataSize, 16);
    return (_QWORD *)PipSetDevNodeState(MaxDataSize, 787);
  }
  v9 = *(_QWORD *)(MaxDataSize + 8);
  if ( v9 )
  {
    do
    {
      v17 = *(_DWORD *)(v9 + 396);
      v18 = *(_QWORD *)v9;
      if ( (v17 & 0x10) != 0 )
      {
        v17 &= ~0x10u;
        *(_DWORD *)(v9 + 396) = v17;
      }
      if ( *(_QWORD *)(v9 + 416) || *(_QWORD *)(v9 + 544) || (v17 & 0x40) != 0 )
        IopReleaseDeviceResources(v9, 0);
      PipSetDevNodeState(v9, 787);
      v9 = v18;
    }
    while ( v18 );
  }
  if ( v3 == 778 && (*(_DWORD *)(MaxDataSize + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v4, 1, (ULONG_PTR *)&v20);
    PnpUnlockMountableDevice((__int64)v4);
    PipClearDevNodeFlags(MaxDataSize, 0x1000000);
  }
  v10 = *(_DWORD *)(MaxDataSize + 300);
  if ( v10 < 769 || v10 > 770 && (v10 <= 776 || v10 == 778 || (unsigned int)(v10 - 785) > 3) )
  {
    v11 = IopRemoveDevice(v4, 23);
    PnpDisableDeviceInterfaces(MaxDataSize + 40);
    if ( v11 >= 0 )
      IopReleaseDeviceResources(MaxDataSize, 0);
    v12 = MaxDataSize;
    if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    {
      v13 = 787;
LABEL_13:
      PipSetDevNodeState(v12, v13);
      goto LABEL_14;
    }
    PipSetDevNodeState(MaxDataSize, 785);
    v13 = 782;
    if ( v8 == 782 )
    {
      v12 = MaxDataSize;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( v3 == 778 )
  {
    v19 = (struct _DMA_ADAPTER *)*((_QWORD *)&v20 + 1);
    if ( *((_QWORD *)&v20 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v20 + 1));
      HalPutDmaAdapter(v19);
    }
  }
  if ( a2 && (*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(MaxDataSize, a2, a3);
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
  return PiDmaGuardProcessPostRemove(MaxDataSize, a2, 0);
}
