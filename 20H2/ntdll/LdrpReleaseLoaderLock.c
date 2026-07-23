/*
 * XREFs of LdrpReleaseLoaderLock @ 0x18003E6A4
 * Callers:
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x180001B90 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18000FC98 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     LdrpPrepareModuleForExecution @ 0x18003D8C8 (LdrpPrepareModuleForExecution.c)
 *     LdrEnumerateLoadedModules @ 0x18005D8C0 (LdrEnumerateLoadedModules.c)
 *     RtlExitUserProcess @ 0x18005D9D0 (RtlExitUserProcess.c)
 *     LdrUnlockLoaderLock @ 0x18007DFB0 (LdrUnlockLoaderLock.c)
 *     LdrpInitializeImportRedirection @ 0x180081BF4 (LdrpInitializeImportRedirection.c)
 *     LdrInitShimEngineDynamic @ 0x1800D05F0 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4DB8 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpLogError @ 0x1800601E8 (LdrpLogError.c)
 *     LdrpLogEtwEvent @ 0x1800CF2C0 (LdrpLogEtwEvent.c)
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
