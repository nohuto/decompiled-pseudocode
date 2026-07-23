/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800D4DB8
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009C2C0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009C400 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6700 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x18003E6A4 (LdrpReleaseLoaderLock.c)
 *     LdrpCreateLoaderEvents @ 0x18007E1A0 (LdrpCreateLoaderEvents.c)
 *     ZwTerminateProcess @ 0x18009D630 (ZwTerminateProcess.c)
 */

NTSTATUS __fastcall LdrpCompleteProcessCloning(int a1)
{
  void *UniqueThread; // rcx
  void *v2; // rcx
  NTSTATUS LoaderEvents; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    LdrpWorkQueueLock.LockSemaphore = 0LL;
    LdrpWorkQueueLock.OwningThread = UniqueThread;
    LdrpWorkQueueLock.RecursionCount = 1;
    LdrpWorkQueueLock.LockCount = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    LdrpLoaderLock.LockSemaphore = 0LL;
    LdrpLoaderLock.OwningThread = v2;
    LdrpLoaderLock.LockCount = -2;
    LdrpLoaderLock.RecursionCount = 1;
    LoaderEvents = LdrpCreateLoaderEvents();
    if ( LoaderEvents < 0 )
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, LoaderEvents);
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection(&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v4, 13, 0);
  return LdrpDropLastInProgressCount();
}
