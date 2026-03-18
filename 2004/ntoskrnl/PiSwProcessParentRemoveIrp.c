/*
 * XREFs of PiSwProcessParentRemoveIrp @ 0x14073279C
 * Callers:
 *     IopRemoveDevice @ 0x140732450 (IopRemoveDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PiSwProcessRemove @ 0x140720878 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140720998 (PiSwDestroyDeviceObject.c)
 *     PiSwCloseDescendants @ 0x140732924 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x140732A40 (PiSwFindSwDevice.c)
 */

_QWORD *__fastcall PiSwProcessParentRemoveIrp(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rsi
  __int64 *v5; // rbp
  const wchar_t *v6; // rcx
  __int64 SwDevice; // rax
  struct _DEVICE_OBJECT *v9; // rbp

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
      v9 = (struct _DEVICE_OBJECT *)v5[3];
      if ( (*((_DWORD *)v9->DeviceExtension + 2) & 0x20) == 0 )
        PiSwProcessRemove((__int64)v9, 0);
      PiSwDestroyDeviceObject(v9);
    }
  }
  if ( v2 )
  {
    v6 = *(const wchar_t **)(v2 + 8);
    if ( v6 )
    {
      SwDevice = PiSwFindSwDevice(v6);
      if ( !SwDevice || (*(_DWORD *)(SwDevice + 4) & 1) == 0 && !*(_DWORD *)(SwDevice + 180) )
        PiSwCloseDescendants(v2);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
