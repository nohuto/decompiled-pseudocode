/*
 * XREFs of IopShutdownBaseFileSystems @ 0x1409A7464
 * Callers:
 *     IoShutdownSystem @ 0x1409A7108 (IoShutdownSystem.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IoGetAttachedDevice @ 0x1402543B0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140254800 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140255810 (IopIncrementDeviceObjectRefCount.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IoBuildSynchronousFsdRequest @ 0x140704490 (IoBuildSynchronousFsdRequest.c)
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
    IopDecrementDeviceObjectRef((ULONG_PTR)v4, 0);
    HalPutDmaAdapter(v4);
  }
}
