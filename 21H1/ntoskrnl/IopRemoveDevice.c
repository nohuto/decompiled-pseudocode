/*
 * XREFs of IopRemoveDevice @ 0x140734134
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036C538 (PnpRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407201FC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpDeleteLockedDeviceNode @ 0x140733DB4 (PnpDeleteLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736D5C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x14089D96C (PnpDisableDevice.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PnpFindMountableDevice @ 0x14036C8C0 (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x140390724 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x14039091C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x140390978 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14039203C (IopDecrementDeviceObjectHandleCount.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IopSynchronousCall @ 0x140687B88 (IopSynchronousCall.c)
 *     PiPnpRtlEndOperation @ 0x1406A5E98 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406A6604 (PiPnpRtlBeginOperation.c)
 *     IopUncacheInterfaceInformation @ 0x140723A8C (IopUncacheInterfaceInformation.c)
 *     PipClearDevNodeFlags @ 0x14072C104 (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x14072EA8C (PipClearDevNodeUserFlags.c)
 *     PoFxAbandonDevice @ 0x140734340 (PoFxAbandonDevice.c)
 *     PiSwStopDestroy @ 0x1407344C4 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x14073456C (PiSwProcessParentRemoveIrp.c)
 *     IopInvalidateVolumesForDevice @ 0x140766E80 (IopInvalidateVolumesForDevice.c)
 *     IopDecDisableableDepends @ 0x1407BF168 (IopDecDisableableDepends.c)
 */

__int64 __fastcall IopRemoveDevice(PDEVICE_OBJECT DeviceObject, int a2)
{
  int v2; // r15d
  _DWORD *DeviceNode; // rsi
  struct _DEVICE_OBJECT *v6; // rbp
  __int64 v7; // rcx
  int v8; // r14d
  struct _DMA_ADAPTER *v9; // rbp
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v14[80]; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  v13 = 0LL;
  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  P = 0LL;
  PiPnpRtlBeginOperation(&P);
  if ( a2 == 2 )
    IopUncacheInterfaceInformation((__int64)DeviceObject, 1);
  memset(v14, 0, 0x48uLL);
  v14[0] = 27;
  v14[1] = a2;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v2 = 1;
    PnpLockMountableDevice(DeviceObject);
    v6 = (struct _DEVICE_OBJECT *)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)&v13);
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
  v8 = IopSynchronousCall(v6, (__int64)v14, -1073741637, 0LL, 0LL);
  if ( v2 )
  {
    PnpLockMountableDevice(DeviceObject);
    if ( (unsigned int)(a2 - 2) <= 1 )
      PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 0, (ULONG_PTR *)&v13);
    v9 = (struct _DMA_ADAPTER *)*((_QWORD *)&v13 + 1);
    if ( *((_QWORD *)&v13 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v13 + 1));
      HalPutDmaAdapter(v9);
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
    v10 = *((_QWORD *)DeviceNode + 81);
    if ( v10 )
    {
      if ( (v10 & 1) != 0 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
        *((_QWORD *)DeviceNode + 81) = v11;
        --*(_DWORD *)(v11 + 656);
      }
    }
  }
LABEL_26:
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v8;
}
