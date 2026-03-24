/*
 * XREFs of IopShutdownBaseFileSystems @ 0x1409AB134
 * Callers:
 *     IoShutdownSystem @ 0x1409AADD8 (IoShutdownSystem.c)
 * Callees:
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     IofCallDriver @ 0x1403519C0 (IofCallDriver.c)
 *     IoGetAttachedDevice @ 0x140353740 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140353B90 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140354BA0 (IopIncrementDeviceObjectRefCount.c)
 *     IoBuildSynchronousFsdRequest @ 0x1406D18C0 (IoBuildSynchronousFsdRequest.c)
 */

void __fastcall IopShutdownBaseFileSystems(__int64 **a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rax
  struct _DMA_ADAPTER *v4; // rsi
  __int64 v5; // r8
  _DWORD *v6; // r9
  PDEVICE_OBJECT AttachedDevice; // rbx
  IRP *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r8
  _DWORD *v11; // r9
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
    IopIncrementDeviceObjectRefCount((ULONG_PTR)(v2 - 10), 1, v5, v6);
    AttachedDevice = (PDEVICE_OBJECT)(v2 - 10);
    v4 = (struct _DMA_ADAPTER *)AttachedDevice;
    if ( AttachedDevice->AttachedDevice )
      AttachedDevice = IoGetAttachedDevice(AttachedDevice);
    v8 = IoBuildSynchronousFsdRequest(0x10u, AttachedDevice, 0LL, 0, 0LL, &Object, &IoStatusBlock);
    if ( v8 && IofCallDriver(AttachedDevice, v8) == 259 )
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v2 = *a1;
    if ( (__int64 **)(*a1)[1] != a1 )
      goto LABEL_14;
    v9 = (__int64 *)*v2;
    if ( *(__int64 **)(*v2 + 8) != v2 )
      goto LABEL_14;
    *a1 = v9;
    v9[1] = (__int64)a1;
    KeResetEvent(&Object);
    LOBYTE(v10) = 1;
    IopDecrementDeviceObjectRef((ULONG_PTR)v4, 0, v10, v11);
    HalPutDmaAdapter(v4);
  }
}
