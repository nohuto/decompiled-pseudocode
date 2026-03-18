/*
 * XREFs of IopShutdownBaseFileSystems @ 0x1409A82C4
 * Callers:
 *     IoShutdownSystem @ 0x1409A7F68 (IoShutdownSystem.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     IoGetAttachedDevice @ 0x140290C30 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140291080 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140292090 (IopIncrementDeviceObjectRefCount.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     IoBuildSynchronousFsdRequest @ 0x1406E4C40 (IoBuildSynchronousFsdRequest.c)
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
