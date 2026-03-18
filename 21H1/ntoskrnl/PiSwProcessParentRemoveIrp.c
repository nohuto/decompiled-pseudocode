/*
 * XREFs of PiSwProcessParentRemoveIrp @ 0x14073456C
 * Callers:
 *     IopRemoveDevice @ 0x140734134 (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PiSwProcessRemove @ 0x14071EAD8 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x14071EBF8 (PiSwDestroyDeviceObject.c)
 *     PiSwCloseDescendants @ 0x14073464C (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x140734680 (PiSwFindSwDevice.c)
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
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _DEVICE_OBJECT *v12; // rbp

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
      v12 = (struct _DEVICE_OBJECT *)v5[3];
      if ( (*((_DWORD *)v12->DeviceExtension + 2) & 0x20) == 0 )
        PiSwProcessRemove((__int64)v12, 0);
      PiSwDestroyDeviceObject(v12);
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
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
}
