/*
 * XREFs of LdrpAcquireLoaderLock @ 0x18003E6B4
 * Callers:
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x180001BB0 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18000FC98 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     LdrpPrepareModuleForExecution @ 0x18003D878 (LdrpPrepareModuleForExecution.c)
 *     LdrEnumerateLoadedModules @ 0x18005D870 (LdrEnumerateLoadedModules.c)
 *     RtlExitUserProcess @ 0x18005D980 (RtlExitUserProcess.c)
 *     LdrLockLoaderLock @ 0x18007D040 (LdrLockLoaderLock.c)
 *     LdrpInitializeImportRedirection @ 0x180081AF4 (LdrpInitializeImportRedirection.c)
 *     RtlPrepareForProcessCloning @ 0x18009B4B0 (RtlPrepareForProcessCloning.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0410 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x1800D6360 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x1800CF0E0 (LdrpLogEtwEvent.c)
 */

__int64 LdrpAcquireLoaderLock()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rdi
  unsigned __int32 v3; // esi
  int v5; // r8d
  int v6; // r9d
  char *v7; // rcx
  int v8; // r8d
  int v9; // r9d

  v0 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v1 = 2147353476LL;
  v2 = 2147353477LL;
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v7 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v7 & 0x20) != 0 )
    {
      LOBYTE(v6) = -1;
      LOBYTE(v5) = -1;
      LdrpLogEtwEvent(5248, -1, v5, v6, 0LL, 0LL);
    }
  }
  v3 = RtlEnterCriticalSection(&LdrpLoaderLock);
  if ( RtlGetCurrentServiceSessionId() )
    v0 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v2 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v2 & 0x20) != 0 )
    {
      LOBYTE(v9) = -1;
      LOBYTE(v8) = -1;
      LdrpLogEtwEvent(5249, -1, v8, v9, 0LL, 0LL);
    }
  }
  return v3;
}
