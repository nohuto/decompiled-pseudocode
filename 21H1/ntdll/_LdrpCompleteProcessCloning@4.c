/*
 * XREFs of _LdrpCompleteProcessCloning@4 @ 0x4B333C39
 * Callers:
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpCreateLoaderEvents@0 @ 0x4B2DFE5B (_LdrpCreateLoaderEvents@0.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 */

NTSTATUS __thiscall LdrpCompleteProcessCloning(void *this)
{
  struct _TEB *v1; // eax
  NTSTATUS LoaderEvents; // eax
  int v3; // ecx

  if ( this )
  {
    LdrpWorkQueueLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
    v1 = NtCurrentTeb();
    LdrpWorkQueueLock.LockCount = -2;
    LdrpWorkQueueLock.RecursionCount = 1;
    LdrpWorkQueueLock.LockSemaphore = 0;
    LdrpLoaderLock.OwningThread = v1->ClientId.UniqueThread;
    LdrpLoaderLock.LockCount = -2;
    LdrpLoaderLock.RecursionCount = 1;
    LdrpLoaderLock.LockSemaphore = 0;
    LoaderEvents = LdrpCreateLoaderEvents();
    if ( LoaderEvents < 0 )
      ZwTerminateProcess((HANDLE)0xFFFFFFFF, LoaderEvents);
    LdrpMapAndSnapWork = 0;
  }
  RtlLeaveCriticalSection(&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v3, 13, 0, v3);
  return LdrpDropLastInProgressCount();
}
