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
 *     LdrInitShimEngineDynamic @ 0x1800D05B0 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4B68 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpLogError @ 0x1800616D8 (LdrpLogError.c)
 *     LdrpLogEtwEvent @ 0x1800CF280 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpReleaseLoaderLock(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  char v4; // di
  unsigned int v5; // esi
  __int64 v6; // r8
  __int64 v7; // rcx
  int v9; // r9d
  __int64 v10; // rcx

  v3 = a3;
  v4 = a2;
  v5 = RtlLeaveCriticalSection((__int64)&LdrpLoaderLock, a2, a3);
  if ( v3 < 0 )
  {
    LOBYTE(v6) = v4;
    LdrpLogError((unsigned int)v3, 5282LL, v6, 0LL);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v7 = 2147353476LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v10 = 2147353477LL;
    if ( (*(_BYTE *)v10 & 0x20) != 0 )
    {
      LOBYTE(v9) = v4;
      LdrpLogEtwEvent(5282, 0, 0, v9, 0LL, 0LL);
    }
  }
  return v5;
}
