/*
 * XREFs of _LdrpDrainWorkQueue@4 @ 0x4B2D19AF
 * Callers:
 *     _LdrEnumerateLoadedModules@12 @ 0x4B2A9770 (_LdrEnumerateLoadedModules@12.c)
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpFastpthReloadedDll@16 @ 0x4B2CE2E0 (_LdrpFastpthReloadedDll@16.c)
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 *     _RtlExitUserProcess@4 @ 0x4B2DD5D0 (_RtlExitUserProcess@4.c)
 *     _LdrpFindLoadedDll@12 @ 0x4B2E9CFC (_LdrpFindLoadedDll@12.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _LdrpInitializeImportRedirection@0 @ 0x4B2EC596 (_LdrpInitializeImportRedirection@0.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrInitShimEngineDynamic@8 @ 0x4B331380 (_LdrInitShimEngineDynamic@8.c)
 *     _LdrpPrepareForProcesscloning@0 @ 0x4B333CB9 (_LdrpPrepareForProcesscloning@0.c)
 * Callees:
 *     _LdrpUpdateStatistics@0 @ 0x4B2B7214 (_LdrpUpdateStatistics@0.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 */

struct _TEB *__thiscall LdrpDrainWorkQueue(void *this)
{
  HANDLE v1; // eax
  char v3; // bl
  char v4; // bh
  int *v5; // esi
  int v6; // eax
  struct _TEB *result; // eax
  int v8; // eax
  int v9; // eax
  HANDLE Handle; // [esp+Ch] [ebp-4h]

  v1 = LdrpLoadCompleteEvent;
  v3 = 0;
  if ( this )
    v1 = LdrpWorkCompleteEvent;
  Handle = v1;
  while ( 1 )
  {
    while ( 1 )
    {
      RtlEnterCriticalSection(&LdrpWorkQueueLock);
      v4 = LdrpDetourExist;
      if ( !LdrpDetourExist || this == (void *)1 )
      {
        v5 = (int *)LdrpWorkQueue;
        if ( *(int **)(LdrpWorkQueue + 4) != &LdrpWorkQueue
          || (v6 = *(_DWORD *)LdrpWorkQueue, *(_DWORD *)(*(_DWORD *)LdrpWorkQueue + 4) != LdrpWorkQueue) )
        {
          __fastfail(3u);
        }
        LdrpWorkQueue = *(_DWORD *)LdrpWorkQueue;
        *(_DWORD *)(v6 + 4) = &LdrpWorkQueue;
        if ( v5 == &LdrpWorkQueue )
        {
          if ( (void *)LdrpWorkInProgress == this )
          {
            LdrpWorkInProgress = 1;
            v3 = 1;
          }
        }
        else
        {
          if ( !v4 )
            ++LdrpWorkInProgress;
          LdrpUpdateStatistics();
        }
      }
      else
      {
        if ( (void *)LdrpWorkInProgress == this )
        {
          LdrpWorkInProgress = 1;
          v3 = 1;
        }
        v5 = &LdrpWorkQueue;
      }
      RtlLeaveCriticalSection(&LdrpWorkQueueLock);
      if ( v3 )
        break;
      if ( v5 == &LdrpWorkQueue )
        ZwWaitForSingleObject(Handle, 0, 0);
      else
        LdrpProcessWork((int)(v5 - 9), v4);
    }
    if ( !this || (int *)LdrpRetryQueue == &LdrpRetryQueue )
      break;
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v8 = LdrpRetryQueue;
    *(_DWORD *)(LdrpRetryQueue + 4) = &LdrpWorkQueue;
    LdrpWorkQueue = v8;
    v9 = dword_4B3A5CC4;
    *(_DWORD *)dword_4B3A5CC4 = &LdrpWorkQueue;
    LdrpRetryingModuleIndex.Root = 0;
    LdrpRetryingModuleIndex.Min = 0;
    dword_4B3A5D04 = v9;
    dword_4B3A5CC4 = (int)&LdrpRetryQueue;
    LdrpRetryQueue = (int)&LdrpRetryQueue;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    v3 = 0;
  }
  result = NtCurrentTeb();
  result->SameTebFlags |= 0x1000u;
  return result;
}
