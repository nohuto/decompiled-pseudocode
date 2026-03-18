/*
 * XREFs of _UnregisterDeviceClassNotifications@0 @ 0xD282C
 * Callers:
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 * Callees:
 *     <none>
 */

int __stdcall UnregisterDeviceClassNotifications()
{
  PVOID v0; // esi
  struct _LIST_ENTRY *Flink; // esi
  struct _LIST_ENTRY *v2; // eax

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  v0 = gCDROMClassRegistrationEntry;
  if ( !gCDROMClassRegistrationEntry )
    goto LABEL_4;
  gCDROMClassRegistrationEntry = 0;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
  IoUnregisterPlugPlayNotification(v0);
  while ( 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
LABEL_4:
    Flink = gCDROMNotifyList.Flink;
    if ( gCDROMNotifyList.Flink->Blink != &gCDROMNotifyList
      || (v2 = gCDROMNotifyList.Flink->Flink, gCDROMNotifyList.Flink->Flink->Blink != gCDROMNotifyList.Flink) )
    {
      __fastfail(3u);
    }
    gCDROMNotifyList.Flink = gCDROMNotifyList.Flink->Flink;
    v2->Blink = &gCDROMNotifyList;
    if ( Flink == &gCDROMNotifyList )
      break;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
    IoUnregisterPlugPlayNotification(Flink[1].Blink);
    Win32FreePool(Flink);
  }
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
}
