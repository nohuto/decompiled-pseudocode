/*
 * XREFs of WheapInitializeInUsePageOfflineNotifications @ 0x1407B21C8
 * Callers:
 *     WheaInitializeServices @ 0x140A68924 (WheaInitializeServices.c)
 * Callees:
 *     <none>
 */

PVOID *WheapInitializeInUsePageOfflineNotifications()
{
  PVOID *result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  WheapInUsePageOfflineNotifyLock = 0LL;
  result = &WheapInUsePageOfflineNotifyList;
  qword_140CF4528 = (__int64)&WheapInUsePageOfflineNotifyList;
  WheapInUsePageOfflineNotifyList = &WheapInUsePageOfflineNotifyList;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  WheapInUsePageOfflineNotifyInit = 1;
  return result;
}
