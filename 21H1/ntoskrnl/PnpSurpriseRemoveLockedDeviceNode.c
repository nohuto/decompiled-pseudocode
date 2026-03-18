/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x140736D5C
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140733DB4 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x14036B368 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14036D6E8 (PipRestoreDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x140390724 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x140390978 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14039203C (IopDecrementDeviceObjectHandleCount.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140710724 (PnpAcquireDependencyRelationsLock.c)
 *     PipClearDevNodeFlags @ 0x14072C104 (PipClearDevNodeFlags.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140730E58 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiDmaGuardProcessPostRemove @ 0x140733F10 (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x140733F88 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140734134 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x140734AA4 (PipSetDevNodeProblem.c)
 *     PnpDisableDeviceInterfaces @ 0x140736F54 (PnpDisableDeviceInterfaces.c)
 *     PipConvertResolutionsToReservations @ 0x1407B7A58 (PipConvertResolutionsToReservations.c)
 */

void __fastcall PnpSurpriseRemoveLockedDeviceNode(ULONG_PTR MaxDataSize, int a2, int a3)
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
  int v16; // eax
  __int64 v17; // rbp
  struct _DMA_ADAPTER *v18; // rbx
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(MaxDataSize + 300);
  v4 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v8 = 768;
  v19 = 0LL;
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
    PipSetDevNodeState(MaxDataSize, 787);
    return;
  }
  v9 = *(_QWORD *)(MaxDataSize + 8);
  if ( v9 )
  {
    do
    {
      v16 = *(_DWORD *)(v9 + 396);
      v17 = *(_QWORD *)v9;
      if ( (v16 & 0x10) != 0 )
      {
        v16 &= ~0x10u;
        *(_DWORD *)(v9 + 396) = v16;
      }
      if ( *(_QWORD *)(v9 + 416) || *(_QWORD *)(v9 + 544) || (v16 & 0x40) != 0 )
        IopReleaseDeviceResources(v9, 0);
      PipSetDevNodeState(v9, 787);
      v9 = v17;
    }
    while ( v17 );
  }
  if ( v3 == 778 && (*(_DWORD *)(MaxDataSize + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v4, 1, (ULONG_PTR *)&v19);
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
    v18 = (struct _DMA_ADAPTER *)*((_QWORD *)&v19 + 1);
    if ( *((_QWORD *)&v19 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v19 + 1));
      HalPutDmaAdapter(v18);
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
  PiDmaGuardProcessPostRemove(MaxDataSize, a2, 0);
}
