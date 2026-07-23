/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x140736358
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140738734 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     PipRestoreDevNodeState @ 0x14036D950 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x140393D14 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x140393F68 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14039566C (IopDecrementDeviceObjectHandleCount.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14062EA2C (PnpAcquireDependencyRelationsLock.c)
 *     PnpDisableDeviceInterfaces @ 0x1407361DC (PnpDisableDeviceInterfaces.c)
 *     PiDmaGuardProcessPostRemove @ 0x140738890 (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x140738908 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140738AB4 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x1407396AC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeFlags @ 0x140746C34 (PipClearDevNodeFlags.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14074B72C (PipProcessRebuildPowerRelationsQueue.c)
 *     PipConvertResolutionsToReservations @ 0x1407CD888 (PipConvertResolutionsToReservations.c)
 */

__int64 __fastcall PnpSurpriseRemoveLockedDeviceNode(__int64 MaxDataSize, unsigned int a2, unsigned int a3)
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
  __int64 v16; // rcx
  int v18; // eax
  __int64 v19; // rbp
  struct _DMA_ADAPTER *v20; // rbx
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(MaxDataSize + 300);
  v4 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v8 = 768;
  v21 = 0LL;
  if ( v3 == 782 || v3 == 783 )
  {
    v8 = v3;
    PipRestoreDevNodeState(MaxDataSize);
    v3 = *(_DWORD *)(MaxDataSize + 300);
  }
  *(_WORD *)(MaxDataSize + 466) = 0;
  if ( v3 == 785 && v8 == 782 )
  {
    PipClearDevNodeFlags(MaxDataSize, 16LL);
    return PipSetDevNodeState(MaxDataSize, 787);
  }
  v9 = *(_QWORD *)(MaxDataSize + 8);
  if ( v9 )
  {
    do
    {
      v18 = *(_DWORD *)(v9 + 396);
      v19 = *(_QWORD *)v9;
      if ( (v18 & 0x10) != 0 )
      {
        v18 &= ~0x10u;
        *(_DWORD *)(v9 + 396) = v18;
      }
      if ( *(_QWORD *)(v9 + 416) || *(_QWORD *)(v9 + 544) || (v18 & 0x40) != 0 )
        IopReleaseDeviceResources(v9, 0LL);
      PipSetDevNodeState(v9, 787);
      v9 = v19;
    }
    while ( v19 );
  }
  if ( v3 == 778 && (*(_DWORD *)(MaxDataSize + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v4, 1, (ULONG_PTR *)&v21);
    PnpUnlockMountableDevice((__int64)v4);
    PipClearDevNodeFlags(MaxDataSize, 0x1000000LL);
  }
  v10 = *(_DWORD *)(MaxDataSize + 300);
  if ( v10 < 769 || v10 > 770 && (v10 <= 776 || v10 == 778 || (unsigned int)(v10 - 785) > 3) )
  {
    v11 = IopRemoveDevice(v4);
    PnpDisableDeviceInterfaces((unsigned __int16 *)(MaxDataSize + 40));
    if ( v11 >= 0 )
      IopReleaseDeviceResources(MaxDataSize, 0LL);
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
    v20 = (struct _DMA_ADAPTER *)*((_QWORD *)&v21 + 1);
    if ( *((_QWORD *)&v21 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v21 + 1));
      HalPutDmaAdapter(v20);
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
    PipProcessRebuildPowerRelationsQueue(v16);
  }
  return PiDmaGuardProcessPostRemove(MaxDataSize);
}
