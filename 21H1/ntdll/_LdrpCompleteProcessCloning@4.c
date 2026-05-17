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

int __thiscall LdrpCompleteProcessCloning(void *this)
{
  struct _TEB *v1; // eax
  int LoaderEvents; // eax
  int v3; // ecx

  if ( this )
  {
    dword_4B3A5CEC = (int)NtCurrentTeb()->ClientId.UniqueThread;
    v1 = NtCurrentTeb();
    dword_4B3A5CE4 = -2;
    dword_4B3A5CE8 = 1;
    dword_4B3A5CF0 = 0;
    dword_4B3A339C = (int)v1->ClientId.UniqueThread;
    dword_4B3A3394 = -2;
    dword_4B3A3398 = 1;
    dword_4B3A33A0 = 0;
    LoaderEvents = LdrpCreateLoaderEvents();
    if ( LoaderEvents < 0 )
      ZwTerminateProcess(-1, LoaderEvents);
    LdrpMapAndSnapWork = 0;
  }
  RtlLeaveCriticalSection((int)&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v3, 13, 0, v3);
  return LdrpDropLastInProgressCount();
}
