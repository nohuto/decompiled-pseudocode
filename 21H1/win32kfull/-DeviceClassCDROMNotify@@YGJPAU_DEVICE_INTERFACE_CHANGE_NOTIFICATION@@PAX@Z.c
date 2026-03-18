/*
 * XREFs of ?DeviceClassCDROMNotify@@YGJPAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PAX@Z @ 0x14ADAE
 * Callers:
 *     <none>
 * Callees:
 *     _memcmp @ 0xF9295 (_memcmp.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

NTSTATUS __stdcall DeviceClassCDROMNotify(unsigned __int16 **NotificationStructure, PVOID Context)
{
  int v2; // ebx
  int v3; // eax
  struct _LIST_ENTRY *v4; // esi
  size_t v5; // ecx
  struct _LIST_ENTRY *Flink; // eax
  struct _FAST_MUTEX *v7; // ecx
  PDEVICE_OBJECT DeviceObject; // [esp+4h] [ebp-8h] BYREF
  PFILE_OBJECT FileObject; // [esp+8h] [ebp-4h] BYREF

  FileObject = 0;
  DeviceObject = 0;
  if ( !memcmp(NotificationStructure + 1, &GUID_DEVICE_INTERFACE_ARRIVAL, 0x10u)
    && IoGetDeviceObjectPointer((PUNICODE_STRING)NotificationStructure[9], 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    v2 = *NotificationStructure[9] + 24;
    v3 = Win32AllocPool(v2, 1886417749);
    v4 = (struct _LIST_ENTRY *)v3;
    if ( v3 )
    {
      *(_DWORD *)(v3 + 8) = v2;
      v5 = *NotificationStructure[9];
      *(_WORD *)(v3 + 20) = v5;
      memcpy((void *)(v3 + 22), *((const void **)NotificationStructure[9] + 1), v5);
      if ( IoRegisterPlugPlayNotification(
             EventCategoryTargetDeviceChange,
             0,
             FileObject,
             _gpWin32kDriverObject,
             (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DeviceCDROMNotify,
             v4,
             (PVOID *)&v4[1].Blink) < 0 )
      {
        Win32FreePool(v4);
      }
      else
      {
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
        Flink = gCDROMNotifyList.Flink;
        if ( gCDROMNotifyList.Flink->Blink != &gCDROMNotifyList )
          __fastfail(3u);
        v7 = gMediaChangeMutex;
        v4->Flink = gCDROMNotifyList.Flink;
        v4->Blink = &gCDROMNotifyList;
        Flink->Blink = v4;
        gCDROMNotifyList.Flink = v4;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v7);
      }
    }
    ObfDereferenceObject(FileObject);
  }
  return 0;
}
