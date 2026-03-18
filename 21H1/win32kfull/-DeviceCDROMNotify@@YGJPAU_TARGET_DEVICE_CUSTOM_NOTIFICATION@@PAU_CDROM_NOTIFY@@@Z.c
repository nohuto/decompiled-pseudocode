/*
 * XREFs of ?DeviceCDROMNotify@@YGJPAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PAU_CDROM_NOTIFY@@@Z @ 0x14AC55
 * Callers:
 *     <none>
 * Callees:
 *     _memcmp @ 0xF9295 (_memcmp.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _ShowAutorunCursor@4 @ 0x1433B4 (_ShowAutorunCursor@4.c)
 */

NTSTATUS __stdcall DeviceCDROMNotify(_DWORD *NotificationStructure, PVOID Context)
{
  char *v2; // esi
  int v3; // eax
  struct _LIST_ENTRY *v4; // eax
  struct _LIST_ENTRY *v5; // esi
  struct _LIST_ENTRY *Flink; // eax
  struct _FAST_MUTEX *v7; // ecx
  _DWORD *v8; // eax
  PVOID *v9; // ecx
  int v11; // [esp+0h] [ebp-8h]

  if ( _gProtocolType )
    return 0;
  v2 = (char *)(NotificationStructure + 1);
  if ( !memcmp(NotificationStructure + 1, &GUID_IO_MEDIA_ARRIVAL, 0x10u) )
  {
    v3 = 1;
    goto LABEL_6;
  }
  if ( !memcmp(v2, &GUID_IO_MEDIA_REMOVAL, 0x10u) )
  {
    v3 = 2;
LABEL_6:
    *((_DWORD *)Context + 4) = v3;
    v4 = (struct _LIST_ENTRY *)Win32AllocPoolNonPaged(*((_DWORD *)Context + 2), 1886417749);
    v5 = v4;
    if ( v4 )
    {
      memcpy(v4, Context, *((_DWORD *)Context + 2));
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
      Flink = gMediaChangeList.Flink;
      if ( gMediaChangeList.Flink->Blink == &gMediaChangeList )
      {
        v5->Blink = &gMediaChangeList;
        v7 = gMediaChangeMutex;
        v5->Flink = Flink;
        Flink->Blink = v5;
        gMediaChangeList.Flink = v5;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v7);
        KeSetEvent((PRKEVENT)gpEventMediaChange, 1, 0);
        return 0;
      }
LABEL_15:
      __fastfail(3u);
    }
    return 0;
  }
  if ( !memcmp(v2, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0x10u) )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
    if ( !gCDROMClassRegistrationEntry )
    {
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
      return 0;
    }
    v8 = *(_DWORD **)Context;
    if ( *(PVOID *)(*(_DWORD *)Context + 4) == Context )
    {
      v9 = (PVOID *)*((_DWORD *)Context + 1);
      if ( *v9 == Context )
      {
        *v9 = v8;
        v8[1] = v9;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
        IoUnregisterPlugPlayNotification(*((PVOID *)Context + 3));
        Win32FreePool(Context);
        return 0;
      }
    }
    goto LABEL_15;
  }
  if ( !memcmp(v2, &GUID_IO_DEVICE_BECOMING_READY, 0x10u) )
    ShowAutorunCursor((void *)(10 * NotificationStructure[9]), v11);
  return 0;
}
