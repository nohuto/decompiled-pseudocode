/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x140736198
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140738574 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     PipRestoreDevNodeState @ 0x14036D7A0 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeState @ 0x14036F9E8 (PipSetDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x140393BC4 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x140393E18 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14039551C (IopDecrementDeviceObjectHandleCount.c)
 *     PpDevNodeUnlockTree @ 0x140639BC0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140639C1C (PnpAcquireDependencyRelationsLock.c)
 *     PnpDisableDeviceInterfaces @ 0x14073601C (PnpDisableDeviceInterfaces.c)
 *     PiDmaGuardProcessPostRemove @ 0x1407386D0 (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x140738748 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x1407388F4 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x1407394EC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeFlags @ 0x140746A74 (PipClearDevNodeFlags.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14074B56C (PipProcessRebuildPowerRelationsQueue.c)
 *     PipConvertResolutionsToReservations @ 0x1407CD718 (PipConvertResolutionsToReservations.c)
 */

__int64 __fastcall PnpSurpriseRemoveLockedDeviceNode(__int64 MaxDataSize, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // esi
  struct _DEVICE_OBJECT *v5; // r12
  unsigned int v6; // r13d
  unsigned int v7; // r15d
  int v9; // r14d
  __int64 v10; // rbx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v18; // eax
  __int64 v19; // rbp
  struct _DMA_ADAPTER *v20; // rbx
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(MaxDataSize + 300);
  v5 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v6 = a3;
  v7 = a2;
  v9 = 768;
  v21 = 0LL;
  if ( v4 == 782 || v4 == 783 )
  {
    v9 = v4;
    PipRestoreDevNodeState(MaxDataSize);
    v4 = *(_DWORD *)(MaxDataSize + 300);
  }
  *(_WORD *)(MaxDataSize + 466) = 0;
  if ( v4 == 785 && v9 == 782 )
  {
    PipClearDevNodeFlags(MaxDataSize, 16LL);
    return PipSetDevNodeState(MaxDataSize, 787);
  }
  v10 = *(_QWORD *)(MaxDataSize + 8);
  if ( v10 )
  {
    do
    {
      v18 = *(_DWORD *)(v10 + 396);
      v19 = *(_QWORD *)v10;
      if ( (v18 & 0x10) != 0 )
      {
        v18 &= ~0x10u;
        *(_DWORD *)(v10 + 396) = v18;
      }
      if ( *(_QWORD *)(v10 + 416) || *(_QWORD *)(v10 + 544) || (v18 & 0x40) != 0 )
        IopReleaseDeviceResources(v10, 0LL);
      PipSetDevNodeState(v10, 787);
      v10 = v19;
    }
    while ( v19 );
  }
  if ( v4 == 778 && (*(_DWORD *)(MaxDataSize + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v5, 1, (ULONG_PTR *)&v21);
    PnpUnlockMountableDevice((__int64)v5);
    PipClearDevNodeFlags(MaxDataSize, 0x1000000LL);
  }
  v11 = *(_DWORD *)(MaxDataSize + 300);
  if ( v11 < 769 || v11 > 770 && (v11 <= 776 || v11 == 778 || (unsigned int)(v11 - 785) > 3) )
  {
    v12 = IopRemoveDevice(v5);
    PnpDisableDeviceInterfaces((unsigned __int16 *)(MaxDataSize + 40));
    if ( v12 >= 0 )
      IopReleaseDeviceResources(MaxDataSize, 0LL);
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
    v20 = (struct _DMA_ADAPTER *)*((_QWORD *)&v21 + 1);
    if ( *((_QWORD *)&v21 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v21 + 1), a2, a3, a4);
      HalPutDmaAdapter(v20);
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
    PipProcessRebuildPowerRelationsQueue(v16);
  }
  return PiDmaGuardProcessPostRemove(MaxDataSize);
}
