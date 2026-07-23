/*
 * XREFs of _LdrpAcquireLoaderLock@0 @ 0x4B2D2725
 * Callers:
 *     _LdrEnumerateLoadedModules@12 @ 0x4B2A9770 (_LdrEnumerateLoadedModules@12.c)
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 *     _LdrpPrepareModuleForExecution@8 @ 0x4B2D2176 (_LdrpPrepareModuleForExecution@8.c)
 *     _LdrpDecrementModuleLoadCountEx@8 @ 0x4B2D9697 (_LdrpDecrementModuleLoadCountEx@8.c)
 *     _RtlExitUserProcess@4 @ 0x4B2DD5D0 (_RtlExitUserProcess@4.c)
 *     _LdrLockLoaderLock@12 @ 0x4B2E85B0 (_LdrLockLoaderLock@12.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _LdrpInitializeImportRedirection@0 @ 0x4B2EC596 (_LdrpInitializeImportRedirection@0.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrQueryModuleInfoLocalLoaderLock@0 @ 0x4B32E9E0 (_LdrQueryModuleInfoLocalLoaderLock@0.c)
 *     _LdrInitShimEngineDynamic@8 @ 0x4B331380 (_LdrInitShimEngineDynamic@8.c)
 *     _LdrpPrepareForProcesscloning@0 @ 0x4B333CB9 (_LdrpPrepareForProcesscloning@0.c)
 * Callees:
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

NTSTATUS __stdcall LdrpAcquireLoaderLock()
{
  int v0; // esi
  int v1; // eax
  int v2; // edi
  NTSTATUS v3; // ebx
  char *v5; // eax

  v0 = 2147353476;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (int)NtCurrentPeb()->SharedData + 554;
  else
    v1 = 2147353476;
  v2 = 2147353477;
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v5 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v5 & 0x20) != 0 )
      LdrpLogEtwEvent(-1, -1, 0, 0);
  }
  v3 = RtlEnterCriticalSection(&LdrpLoaderLock);
  if ( RtlGetCurrentServiceSessionId() )
    v0 = (int)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v2 = (int)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v2 & 0x20) != 0 )
      LdrpLogEtwEvent(-1, -1, 0, 0);
  }
  return v3;
}
