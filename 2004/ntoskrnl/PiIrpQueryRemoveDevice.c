/*
 * XREFs of PiIrpQueryRemoveDevice @ 0x1407221AC
 * Callers:
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407220BC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x14089EC8C (PnpDisableDevice.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     PnpFindMountableDevice @ 0x14036CA60 (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x140391294 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x14039148C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1403914E8 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140392BEC (IopDecrementDeviceObjectHandleCount.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PnpAsynchronousCall @ 0x140756E24 (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x140769260 (IopInvalidateVolumesForDevice.c)
 */

__int64 __fastcall PiIrpQueryRemoveDevice(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  int v4; // r14d
  PDEVICE_OBJECT v5; // rdi
  int v6; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  struct _DMA_ADAPTER *v11; // rsi
  __int64 v12; // [rsp+38h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-21h] BYREF
  int v14; // [rsp+58h] [rbp-9h]
  int v15; // [rsp+5Ch] [rbp-5h]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+60h] [rbp-1h] BYREF
  _WORD v17[36]; // [rsp+70h] [rbp+Fh] BYREF

  v15 = 0;
  v4 = 0;
  *(_OWORD *)DmaAdapter = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset(v17, 0, sizeof(v17));
  v17[0] = 283;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v4 = 1;
    PnpLockMountableDevice(DeviceObject);
    v5 = (PDEVICE_OBJECT)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)DmaAdapter);
    PnpUnlockMountableDevice((__int64)DeviceObject);
  }
  else
  {
    v5 = DeviceObject;
  }
  v12 = 0LL;
  v14 = -1073741823;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = PnpAsynchronousCall(v5, v17, PnpDiagnosticCompletionRoutine, &v12);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v14;
  }
  if ( a2 )
    *a2 = v12;
  if ( v4 )
  {
    PnpLockMountableDevice(DeviceObject);
    v11 = DmaAdapter[1];
    if ( DmaAdapter[1] )
    {
      IopDecrementDeviceObjectHandleCount((ULONG_PTR)DmaAdapter[1], v8, v9, v10);
      HalPutDmaAdapter(v11);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( v6 >= 0 )
      return (unsigned int)IopInvalidateVolumesForDevice(DeviceObject);
  }
  return (unsigned int)v6;
}
