/*
 * XREFs of LdrRegisterDllNotification @ 0x180084F30
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180112FC0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall LdrRegisterDllNotification(int a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 Heap; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 *v11; // rax
  __int64 result; // rax

  if ( a1 || !a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 32LL);
  v8 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_QWORD *)(Heap + 16) = a2;
  *(_QWORD *)(Heap + 24) = a3;
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  v11 = (__int64 *)off_180166638[0];
  if ( *(_UNKNOWN ***)off_180166638[0] != &LdrpDllNotificationList )
    __fastfail(3u);
  *(_QWORD *)v8 = &LdrpDllNotificationList;
  *(_QWORD *)(v8 + 8) = v11;
  *v11 = v8;
  off_180166638[0] = (_UNKNOWN **)v8;
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock, v9, v10);
  result = 0LL;
  *a4 = v8;
  return result;
}
