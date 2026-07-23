/*
 * XREFs of _LdrpDereferenceModule@4 @ 0x4B2CD3B1
 * Callers:
 *     _LdrpCorInitialize@4 @ 0x4B2A6100 (_LdrpCorInitialize@4.c)
 *     _LdrpInitShimEngine@4 @ 0x4B2A63CD (_LdrpInitShimEngine@4.c)
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     sub_4B2B4F68 @ 0x4B2B4F68 (sub_4B2B4F68.c)
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrResolveDelayLoadedAPI@24 @ 0x4B2CCA20 (_LdrResolveDelayLoadedAPI@24.c)
 *     _LdrGetDllFullName@8 @ 0x4B2CCBB0 (_LdrGetDllFullName@8.c)
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrLoadDll@16 @ 0x4B2CDD70 (_LdrLoadDll@16.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpFastpthReloadedDll@16 @ 0x4B2CE2E0 (_LdrpFastpthReloadedDll@16.c)
 *     _LdrFindEntryForAddress@8 @ 0x4B2CF200 (_LdrFindEntryForAddress@8.c)
 *     _LdrGetDllHandleByName@12 @ 0x4B2CF2C0 (_LdrGetDllHandleByName@12.c)
 *     _LdrpHandleProtectedDelayload@24 @ 0x4B2CF930 (_LdrpHandleProtectedDelayload@24.c)
 *     _LdrAddRefDll@8 @ 0x4B2D20F0 (_LdrAddRefDll@8.c)
 *     _LdrpFindOrPrepareLoadingModule@28 @ 0x4B2D2238 (_LdrpFindOrPrepareLoadingModule@28.c)
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 *     _LdrpLoadContextReplaceModule@8 @ 0x4B2DE80E (_LdrpLoadContextReplaceModule@8.c)
 *     _LdrGetDllHandleByMapping@8 @ 0x4B2E5810 (_LdrGetDllHandleByMapping@8.c)
 *     _LdrDisableThreadCalloutsForDll@4 @ 0x4B2E69B0 (_LdrDisableThreadCalloutsForDll@4.c)
 *     _LdrpFindLoadedDll@12 @ 0x4B2E9CFC (_LdrpFindLoadedDll@12.c)
 *     _LdrpFreeReplacedModule@4 @ 0x4B2F2697 (_LdrpFreeReplacedModule@4.c)
 *     _LdrpResolveProcedureAddress@24 @ 0x4B306029 (_LdrpResolveProcedureAddress@24.c)
 *     _LdrIsModuleSxsRedirected@4 @ 0x4B32E8A0 (_LdrIsModuleSxsRedirected@4.c)
 *     _LdrQueryModuleServiceTags@12 @ 0x4B32EA10 (_LdrQueryModuleServiceTags@12.c)
 *     _LdrSetImplicitPathOptions@8 @ 0x4B32EF60 (_LdrSetImplicitPathOptions@8.c)
 *     _LdrpHandleUnprotectedDelayLoad@24 @ 0x4B32F837 (_LdrpHandleUnprotectedDelayLoad@24.c)
 *     _AVrfCallAPILookupCallback@20 @ 0x4B338404 (_AVrfCallAPILookupCallback@20.c)
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 * Callees:
 *     _LdrpReleaseTlsEntry@8 @ 0x4B2A7CB1 (_LdrpReleaseTlsEntry@8.c)
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrpFreeUnicodeString@4 @ 0x4B2DE399 (_LdrpFreeUnicodeString@4.c)
 *     _LdrpUnmapModule@4 @ 0x4B2E67DF (_LdrpUnmapModule@4.c)
 */

int *__thiscall LdrpDereferenceModule(char *BaseAddress)
{
  int *result; // eax
  char **v3; // edx
  PVOID *v4; // ecx
  _DWORD *v5; // edi
  _DWORD *v6; // ebx
  int v7; // eax

  result = (int *)*((_DWORD *)BaseAddress + 20);
  if ( result[3] != -1 )
  {
    result = (int *)*result;
    if ( (*(_BYTE *)(result - 8) & 0x20) == 0 )
    {
      result = (int *)_InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 39, 0xFFFFFFFF);
      if ( !result )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v3 = (char **)*((_DWORD *)BaseAddress + 21);
        if ( v3[1] != BaseAddress + 84 || (v4 = (PVOID *)*((_DWORD *)BaseAddress + 22), *v4 != BaseAddress + 84) )
          __fastfail(3u);
        *v4 = v3;
        v3[1] = (char *)v4;
        v5 = (_DWORD *)*((_DWORD *)BaseAddress + 20);
        v6 = (_DWORD *)*v5;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *((_WORD *)BaseAddress + 29) )
          LdrpReleaseTlsEntry((int)BaseAddress, 0);
        LdrpUnmapModule(BaseAddress);
        v7 = *((_DWORD *)BaseAddress + 18);
        if ( v7 && v7 != -1 )
          RtlReleaseActivationContext(*((PACTIVATION_CONTEXT *)BaseAddress + 18));
        if ( *((_DWORD *)BaseAddress + 10) )
          LdrpFreeUnicodeString(BaseAddress + 36);
        result = (int *)RtlFreeHeap(LdrpHeap, 0, BaseAddress);
        if ( v6 == v5 )
          return (int *)LdrpDestroyNode(v5);
      }
    }
  }
  return result;
}
