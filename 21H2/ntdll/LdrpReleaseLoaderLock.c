/*
 * XREFs of LdrpReleaseLoaderLock @ 0x18003E664
 * Callers:
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x180001B90 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18000FC98 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     LdrpPrepareModuleForExecution @ 0x18003D888 (LdrpPrepareModuleForExecution.c)
 *     LdrEnumerateLoadedModules @ 0x18005EDF0 (LdrEnumerateLoadedModules.c)
 *     RtlExitUserProcess @ 0x18005EF00 (RtlExitUserProcess.c)
 *     LdrUnlockLoaderLock @ 0x18007E950 (LdrUnlockLoaderLock.c)
 *     LdrpInitializeImportRedirection @ 0x180082514 (LdrpInitializeImportRedirection.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0570 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4B28 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpLogError @ 0x1800616D8 (LdrpLogError.c)
 *     LdrpLogEtwEvent @ 0x1800CF240 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpReleaseLoaderLock(__int64 a1, char a2, int a3)
{
  unsigned __int32 v5; // esi
  __int64 v6; // r8
  __int64 v7; // rcx
  int v9; // r9d
  __int64 v10; // rcx

  v5 = RtlLeaveCriticalSection(&LdrpLoaderLock);
  if ( a3 < 0 )
  {
    LOBYTE(v6) = a2;
    LdrpLogError((unsigned int)a3, 5282LL, v6, 0LL);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v7 = 2147353476LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v10 = 2147353477LL;
    if ( (*(_BYTE *)v10 & 0x20) != 0 )
    {
      LOBYTE(v9) = a2;
      LdrpLogEtwEvent(5282, 0, 0, v9, 0LL, 0LL);
    }
  }
  return v5;
}
