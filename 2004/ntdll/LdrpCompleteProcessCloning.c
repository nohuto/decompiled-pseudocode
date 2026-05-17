/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800D4A18
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009B370 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009B4B0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6360 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x18003E654 (LdrpReleaseLoaderLock.c)
 *     LdrpCreateLoaderEvents @ 0x18007E0A0 (LdrpCreateLoaderEvents.c)
 *     ZwTerminateProcess @ 0x18009D390 (ZwTerminateProcess.c)
 */

__int64 __fastcall LdrpCompleteProcessCloning(int a1, __int64 a2, __int64 a3)
{
  void *UniqueThread; // rcx
  void *v4; // rcx
  __int64 v5; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18016A3D8 = 0LL;
    qword_18016A3D0 = (__int64)UniqueThread;
    dword_18016A3CC = 1;
    dword_18016A3C8 = -2;
    v4 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180164510 = 0LL;
    qword_180164508 = (__int64)v4;
    dword_180164500 = -2;
    dword_180164504 = 1;
    if ( (int)LdrpCreateLoaderEvents() < 0 )
      ZwTerminateProcess();
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock, a2, a3);
  LdrpReleaseLoaderLock(v5, 13LL, 0LL);
  return LdrpDropLastInProgressCount();
}
