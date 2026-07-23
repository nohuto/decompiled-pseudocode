/*
 * XREFs of _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD
 * Callers:
 *     _LdrEnumerateLoadedModules@12 @ 0x4B2A9770 (_LdrEnumerateLoadedModules@12.c)
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 *     _LdrpPrepareModuleForExecution@8 @ 0x4B2D2176 (_LdrpPrepareModuleForExecution@8.c)
 *     _LdrpDecrementModuleLoadCountEx@8 @ 0x4B2D9697 (_LdrpDecrementModuleLoadCountEx@8.c)
 *     _RtlExitUserProcess@4 @ 0x4B2DD5D0 (_RtlExitUserProcess@4.c)
 *     _LdrUnlockLoaderLock@8 @ 0x4B2EA6A0 (_LdrUnlockLoaderLock@8.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _LdrpInitializeImportRedirection@0 @ 0x4B2EC596 (_LdrpInitializeImportRedirection@0.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrQueryModuleInfoLocalLoaderUnlock@0 @ 0x4B32E9F0 (_LdrQueryModuleInfoLocalLoaderUnlock@0.c)
 *     _LdrInitShimEngineDynamic@8 @ 0x4B331380 (_LdrInitShimEngineDynamic@8.c)
 *     _LdrpCompleteProcessCloning@4 @ 0x4B333C39 (_LdrpCompleteProcessCloning@4.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpLogError@16 @ 0x4B2EC95F (_LdrpLogError@16.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

NTSTATUS __fastcall LdrpReleaseLoaderLock(int a1, int a2, int a3, int a4)
{
  NTSTATUS v5; // edi
  int v6; // eax
  int v8; // eax

  v5 = RtlLeaveCriticalSection(&LdrpLoaderLock);
  if ( a3 < 0 )
    LdrpLogError(a2, 0);
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 554;
  else
    v6 = 2147353476;
  if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (int)NtCurrentPeb()->SharedData + 555;
    else
      v8 = 2147353477;
    if ( (*(_BYTE *)v8 & 0x20) != 0 )
      LdrpLogEtwEvent(0, a2, 0, 0);
  }
  return v5;
}
