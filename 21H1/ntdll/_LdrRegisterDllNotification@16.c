/*
 * XREFs of _LdrRegisterDllNotification@16 @ 0x4B2AB330
 * Callers:
 *     _RtlSetIoCompletionCallback@12 @ 0x4B385470 (_RtlSetIoCompletionCallback@12.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

NTSTATUS __cdecl LdrRegisterDllNotification(
        ULONG Flags,
        PLDR_DLL_NOTIFICATION_FUNCTION NotificationFunction,
        PVOID Context,
        PVOID *Cookie)
{
  _DWORD *Heap; // esi
  _DWORD *v5; // eax
  SIZE_T v7; // [esp-4h] [ebp-10h]

  if ( Flags || !Cookie || !NotificationFunction )
    return -1073741811;
  LODWORD(v7) = 16;
  Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, v7);
  if ( !Heap )
    return -1073741801;
  Heap[2] = NotificationFunction;
  Heap[3] = Context;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  v5 = off_4B3A33CC[0];
  if ( *(_UNKNOWN ***)off_4B3A33CC[0] != &LdrpDllNotificationList )
    __fastfail(3u);
  *Heap = &LdrpDllNotificationList;
  Heap[1] = v5;
  *v5 = Heap;
  off_4B3A33CC[0] = (_UNKNOWN **)Heap;
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  *Cookie = Heap;
  return 0;
}
