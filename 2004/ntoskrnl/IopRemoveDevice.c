/*
 * XREFs of IopRemoveDevice @ 0x140732450
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036C6D8 (PnpRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407220BC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpDeleteLockedDeviceNode @ 0x1407320D0 (PnpDeleteLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14075C2E4 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x14089EC8C (PnpDisableDevice.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     PnpFindMountableDevice @ 0x14036CA60 (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x140391294 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x14039148C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1403914E8 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140392BEC (IopDecrementDeviceObjectHandleCount.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     IopSynchronousCall @ 0x14063A00C (IopSynchronousCall.c)
 *     PipClearDevNodeFlags @ 0x140726F44 (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x14072A900 (PipClearDevNodeUserFlags.c)
 *     IopUncacheInterfaceInformation @ 0x14072C9C4 (IopUncacheInterfaceInformation.c)
 *     PoFxAbandonDevice @ 0x14073265C (PoFxAbandonDevice.c)
 *     PiSwProcessParentRemoveIrp @ 0x14073279C (PiSwProcessParentRemoveIrp.c)
 *     PiSwStopDestroy @ 0x14073287C (PiSwStopDestroy.c)
 *     IopInvalidateVolumesForDevice @ 0x140769260 (IopInvalidateVolumesForDevice.c)
 *     IopDecDisableableDepends @ 0x1407C2668 (IopDecDisableableDepends.c)
 */

__int64 __fastcall IopRemoveDevice(PDEVICE_OBJECT DeviceObject, int a2)
{
  int v2; // r15d
  _DWORD *DeviceNode; // rsi
  struct _DEVICE_OBJECT *v6; // rbp
  __int64 v7; // rcx
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  struct _DMA_ADAPTER *v12; // rbp
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v17[80]; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  v16 = 0LL;
  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  P = 0LL;
  PiPnpRtlBeginOperation(&P);
  if ( a2 == 2 )
    IopUncacheInterfaceInformation((__int64)DeviceObject, 1);
  memset(v17, 0, 0x48uLL);
  v17[0] = 27;
  v17[1] = a2;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v2 = 1;
    PnpLockMountableDevice(DeviceObject);
    v6 = (struct _DEVICE_OBJECT *)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)&v16);
    PnpUnlockMountableDevice((__int64)DeviceObject);
  }
  else
  {
    v6 = DeviceObject;
  }
  if ( a2 == 2 || a2 == 23 )
  {
    if ( (DeviceNode[100] & 8) != 0 )
    {
      PipClearDevNodeUserFlags((__int64)DeviceNode, 8);
      IopDecDisableableDepends(DeviceNode);
    }
    if ( a2 == 2 )
    {
      PiSwProcessParentRemoveIrp(DeviceObject);
      PiSwStopDestroy(v7, *((_QWORD *)DeviceNode + 6));
    }
  }
  v8 = IopSynchronousCall(v6, (__int64)v17, -1073741637, 0LL, 0LL);
  if ( v2 )
  {
    PnpLockMountableDevice(DeviceObject);
    if ( (unsigned int)(a2 - 2) <= 1 )
      PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 0, (ULONG_PTR *)&v16);
    v12 = (struct _DMA_ADAPTER *)*((_QWORD *)&v16 + 1);
    if ( *((_QWORD *)&v16 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v16 + 1), v9, v10, v11);
      HalPutDmaAdapter(v12);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( (a2 != 1 || v8 < 0) && a2 != 23 )
    {
LABEL_21:
      if ( a2 != 2 )
        goto LABEL_26;
      goto LABEL_22;
    }
    v8 = IopInvalidateVolumesForDevice(DeviceObject);
  }
  if ( a2 != 23 )
    goto LABEL_21;
LABEL_22:
  PoFxAbandonDevice(DeviceNode);
  DeviceNode[39] = 0;
  if ( a2 == 2 )
  {
    PipClearDevNodeFlags((__int64)DeviceNode, 4104);
    v13 = *((_QWORD *)DeviceNode + 81);
    if ( v13 )
    {
      if ( (v13 & 1) != 0 )
      {
        v14 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
        *((_QWORD *)DeviceNode + 81) = v14;
        --*(_DWORD *)(v14 + 656);
      }
    }
  }
LABEL_26:
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v8;
}
