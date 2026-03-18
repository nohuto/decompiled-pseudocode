/*
 * XREFs of PiSwProcessParentRemoveIrp @ 0x140767040
 * Callers:
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     McTemplateK0zzzzdd_EtwWriteTransfer @ 0x1405641AC (McTemplateK0zzzzdd_EtwWriteTransfer.c)
 *     PiSwProcessRemove @ 0x1406619F8 (PiSwProcessRemove.c)
 *     PiSwFindSwDevice @ 0x140767130 (PiSwFindSwDevice.c)
 *     PiSwCloseDescendants @ 0x140811C50 (PiSwCloseDescendants.c)
 *     PiSwDestroyDeviceObject @ 0x140953508 (PiSwDestroyDeviceObject.c)
 */

void __fastcall PiSwProcessParentRemoveIrp(__int64 a1)
{
  char *v1; // rbp
  __int64 v3; // rdx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rdi
  __int64 *v7; // rax
  char *v8; // r8
  const wchar_t *v9; // rcx
  __int64 SwDevice; // rax
  __int64 v11; // rdx
  struct _DEVICE_OBJECT *v12; // r14
  __int64 *DeviceExtension; // r15
  char *DeviceNode; // rcx
  __int64 v15; // rdx
  int v16; // r11d
  const wchar_t *v17; // r10
  const wchar_t *v18; // r8
  const wchar_t *v19; // r9
  const wchar_t *v20; // rcx

  v1 = 0LL;
  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v3 = 0LL;
  v4 = (v3 + 40) & -(__int64)(v3 != 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  v6 = (__int64 *)PiSwGlobalPdoAssociationList;
  while ( v6 != &PiSwGlobalPdoAssociationList )
  {
    v7 = v6;
    v8 = v1;
    v6 = (__int64 *)*v6;
    if ( v7[2] == a1 )
    {
      v12 = (struct _DEVICE_OBJECT *)v7[3];
      DeviceExtension = (__int64 *)v12->DeviceExtension;
      DeviceNode = (char *)v12->DeviceObjectExtension->DeviceNode;
      v15 = *DeviceExtension;
      v1 = DeviceNode + 40;
      if ( !DeviceNode )
        v1 = v8;
      if ( (byte_140C0DD4C & 2) != 0 )
      {
        if ( v15 )
          v16 = *(_DWORD *)(v15 + 4);
        else
          LOBYTE(v16) = 0;
        if ( v4 )
          v17 = *(const wchar_t **)(v4 + 8);
        else
          v17 = &word_140867F00;
        if ( v1 )
          v18 = (const wchar_t *)*((_QWORD *)v1 + 1);
        else
          v18 = &word_140867F00;
        if ( v15 )
        {
          v19 = *(const wchar_t **)(v15 + 8);
          v20 = *(const wchar_t **)(v15 + 16);
        }
        else
        {
          v19 = &word_140867F00;
          v20 = &word_140867F00;
        }
        McTemplateK0zzzzdd_EtwWriteTransfer(
          (__int64)v20,
          v15,
          (__int64)v18,
          v19,
          v20,
          v18,
          v17,
          v16,
          *((_DWORD *)DeviceExtension + 2));
      }
      if ( (DeviceExtension[1] & 0x20) == 0 )
        PiSwProcessRemove((__int64)v12, 0);
      PiSwDestroyDeviceObject(v12);
    }
  }
  if ( v4 )
  {
    v9 = *(const wchar_t **)(v4 + 8);
    if ( v9 )
    {
      SwDevice = PiSwFindSwDevice(v9);
      if ( !SwDevice || (*(_DWORD *)(SwDevice + 4) & 1) == 0 && !*(_DWORD *)(SwDevice + 180) )
      {
        LOBYTE(v11) = 1;
        PiSwCloseDescendants(v4, v11);
      }
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
}
