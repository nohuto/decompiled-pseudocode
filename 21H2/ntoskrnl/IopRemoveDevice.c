/*
 * XREFs of IopRemoveDevice @ 0x1407388F4
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036E5C8 (PnpRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407341FC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736198 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDeleteLockedDeviceNode @ 0x140738574 (PnpDeleteLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x1408A1D8C (PnpDisableDevice.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     PnpFindMountableDevice @ 0x14036E950 (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x140393BC4 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x140393DBC (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x140393E18 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14039551C (IopDecrementDeviceObjectHandleCount.c)
 *     memset @ 0x140414200 (memset.c)
 *     PiPnpRtlEndOperation @ 0x140633ED8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140634680 (PiPnpRtlBeginOperation.c)
 *     IopSynchronousCall @ 0x14071DFF0 (IopSynchronousCall.c)
 *     PoFxAbandonDevice @ 0x140738B04 (PoFxAbandonDevice.c)
 *     PiSwStopDestroy @ 0x140738C44 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140738D80 (PiSwProcessParentRemoveIrp.c)
 *     IopUncacheInterfaceInformation @ 0x14073E3F8 (IopUncacheInterfaceInformation.c)
 *     PipClearDevNodeFlags @ 0x140746A74 (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x140749BB4 (PipClearDevNodeUserFlags.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B820 (IopInvalidateVolumesForDevice.c)
 *     IopDecDisableableDepends @ 0x1407D52E8 (IopDecDisableableDepends.c)
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
    IopUncacheInterfaceInformation(DeviceObject, 1LL);
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
      PipClearDevNodeUserFlags(DeviceNode, 8LL);
      IopDecDisableableDepends(DeviceNode);
    }
    if ( a2 == 2 )
    {
      PiSwProcessParentRemoveIrp(DeviceObject);
      PiSwStopDestroy(v7, *((_QWORD *)DeviceNode + 6), *((_QWORD *)DeviceNode + 4));
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
    PipClearDevNodeFlags(DeviceNode, 4104LL);
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
