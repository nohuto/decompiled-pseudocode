/*
 * XREFs of PiSwProcessParentRemoveIrp @ 0x140738F40
 * Callers:
 *     IopRemoveDevice @ 0x140738AB4 (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     PiSwProcessRemove @ 0x140732D98 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140732EB8 (PiSwDestroyDeviceObject.c)
 *     PiSwCloseDescendants @ 0x140739024 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x1407390A4 (PiSwFindSwDevice.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _DEVICE_OBJECT *v13; // rbp

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
      v13 = (struct _DEVICE_OBJECT *)v5[3];
      if ( (*((_DWORD *)v13->DeviceExtension + 2) & 0x20) == 0 )
        PiSwProcessRemove((__int64)v13, 0);
      PiSwDestroyDeviceObject(v13);
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
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
}
