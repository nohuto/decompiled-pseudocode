/*
 * XREFs of _LdrRegisterDllNotification@16 @ 0x4B2AB330
 * Callers:
 *     _RtlSetIoCompletionCallback@12 @ 0x4B385470 (_RtlSetIoCompletionCallback@12.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __stdcall LdrRegisterDllNotification(int a1, int a2, int a3, _DWORD *a4)
{
  int Heap; // esi
  _DWORD *v5; // eax

  if ( a1 || !a4 || !a2 )
    return -1073741811;
  Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 16);
  if ( !Heap )
    return -1073741801;
  *(_DWORD *)(Heap + 8) = a2;
  *(_DWORD *)(Heap + 12) = a3;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  v5 = off_4B3A33CC[0];
  if ( *(_UNKNOWN ***)off_4B3A33CC[0] != &LdrpDllNotificationList )
    __fastfail(3u);
  *(_DWORD *)Heap = &LdrpDllNotificationList;
  *(_DWORD *)(Heap + 4) = v5;
  *v5 = Heap;
  off_4B3A33CC[0] = (_UNKNOWN **)Heap;
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  *a4 = Heap;
  return 0;
}
