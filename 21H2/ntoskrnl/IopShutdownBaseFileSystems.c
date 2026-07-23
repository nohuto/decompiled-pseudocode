/*
 * XREFs of IopShutdownBaseFileSystems @ 0x1409AC064
 * Callers:
 *     IoShutdownSystem @ 0x1409ABD08 (IoShutdownSystem.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     IoGetAttachedDevice @ 0x14035E490 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x14035E8E0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14035F8F0 (IopIncrementDeviceObjectRefCount.c)
 *     IoBuildSynchronousFsdRequest @ 0x1406A8BA0 (IoBuildSynchronousFsdRequest.c)
 */

void __fastcall IopShutdownBaseFileSystems(__int64 **a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rax
  struct _DMA_ADAPTER *v4; // rsi
  PDEVICE_OBJECT AttachedDevice; // rbx
  IRP *v6; // rax
  __int64 *v7; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v2 = *a1;
  if ( (__int64 **)(*a1)[1] != a1 || (v3 = (__int64 *)*v2, *(__int64 **)(*v2 + 8) != v2) )
LABEL_14:
    __fastfail(3u);
  *a1 = v3;
  v3[1] = (__int64)a1;
  while ( v2 != (__int64 *)a1 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    ObfReferenceObject(v2 - 10);
    IopIncrementDeviceObjectRefCount((ULONG_PTR)(v2 - 10), 1);
    AttachedDevice = (PDEVICE_OBJECT)(v2 - 10);
    v4 = (struct _DMA_ADAPTER *)AttachedDevice;
    if ( AttachedDevice->AttachedDevice )
      AttachedDevice = IoGetAttachedDevice(AttachedDevice);
    v6 = IoBuildSynchronousFsdRequest(0x10u, AttachedDevice, 0LL, 0, 0LL, &Object, &IoStatusBlock);
    if ( v6 && IofCallDriver(AttachedDevice, v6) == 259 )
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v2 = *a1;
    if ( (__int64 **)(*a1)[1] != a1 )
      goto LABEL_14;
    v7 = (__int64 *)*v2;
    if ( *(__int64 **)(*v2 + 8) != v2 )
      goto LABEL_14;
    *a1 = v7;
    v7[1] = (__int64)a1;
    KeResetEvent(&Object);
    IopDecrementDeviceObjectRef((ULONG_PTR)v4, 0, 1u);
    HalPutDmaAdapter(v4);
  }
}
