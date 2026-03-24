/*
 * XREFs of PiSwProcessParentRemoveIrp @ 0x140738D80
 * Callers:
 *     IopRemoveDevice @ 0x1407388F4 (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     PiSwProcessRemove @ 0x140732BD8 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140732CF8 (PiSwDestroyDeviceObject.c)
 *     PiSwCloseDescendants @ 0x140738E64 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x140738EE4 (PiSwFindSwDevice.c)
 */

_QWORD *__fastcall PiSwProcessParentRemoveIrp(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rdi
  __int64 *v5; // rbp
  const wchar_t *v6; // rcx
  __int64 SwDevice; // rax
  __int64 v8; // rdx
  struct _DEVICE_OBJECT *v10; // rbp

  v1 = a1;
  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  v2 = (a1 + 40) & -(__int64)(a1 != 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  v4 = (__int64 *)PiSwGlobalPdoAssociationList;
  while ( v4 != &PiSwGlobalPdoAssociationList )
  {
    v5 = v4;
    v4 = (__int64 *)*v4;
    if ( v5[2] == v1 )
    {
      v10 = (struct _DEVICE_OBJECT *)v5[3];
      if ( (*((_DWORD *)v10->DeviceExtension + 2) & 0x20) == 0 )
        PiSwProcessRemove((__int64)v10, 0);
      PiSwDestroyDeviceObject(v10);
    }
  }
  if ( v2 )
  {
    v6 = *(const wchar_t **)(v2 + 8);
    if ( v6 )
    {
      SwDevice = PiSwFindSwDevice(v6);
      if ( !SwDevice || (*(_DWORD *)(SwDevice + 4) & 1) == 0 && !*(_DWORD *)(SwDevice + 180) )
      {
        LOBYTE(v8) = 1;
        PiSwCloseDescendants(v2, v8);
      }
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
