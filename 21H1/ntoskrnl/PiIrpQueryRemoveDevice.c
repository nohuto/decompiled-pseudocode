/*
 * XREFs of PiIrpQueryRemoveDevice @ 0x1407202EC
 * Callers:
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407201FC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x14089D96C (PnpDisableDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PnpFindMountableDevice @ 0x14036C8C0 (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x140390724 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x14039091C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x140390978 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14039203C (IopDecrementDeviceObjectHandleCount.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PnpAsynchronousCall @ 0x14075478C (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x140766E80 (IopInvalidateVolumesForDevice.c)
 */

__int64 __fastcall PiIrpQueryRemoveDevice(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  int v4; // r14d
  PDEVICE_OBJECT v5; // rdi
  int v6; // edi
  struct _DMA_ADAPTER *v8; // rsi
  __int64 v9; // [rsp+38h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-21h] BYREF
  int v11; // [rsp+58h] [rbp-9h]
  int v12; // [rsp+5Ch] [rbp-5h]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+60h] [rbp-1h] BYREF
  _WORD v14[36]; // [rsp+70h] [rbp+Fh] BYREF

  v12 = 0;
  v4 = 0;
  *(_OWORD *)DmaAdapter = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset(v14, 0, sizeof(v14));
  v14[0] = 283;
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
  v9 = 0LL;
  v11 = -1073741823;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = PnpAsynchronousCall(v5, v14, PnpDiagnosticCompletionRoutine, &v9);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v11;
  }
  if ( a2 )
    *a2 = v9;
  if ( v4 )
  {
    PnpLockMountableDevice(DeviceObject);
    v8 = DmaAdapter[1];
    if ( DmaAdapter[1] )
    {
      IopDecrementDeviceObjectHandleCount((ULONG_PTR)DmaAdapter[1]);
      HalPutDmaAdapter(v8);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( v6 >= 0 )
      return (unsigned int)IopInvalidateVolumesForDevice(DeviceObject);
  }
  return (unsigned int)v6;
}
