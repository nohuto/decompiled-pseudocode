/*
 * XREFs of LdrpDereferenceModule @ 0x1800302E4
 * Callers:
 *     LdrDisableThreadCalloutsForDll @ 0x18000EF70 (LdrDisableThreadCalloutsForDll.c)
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x180010140 (LdrAddRefDll.c)
 *     LdrGetDllFullName @ 0x180010240 (LdrGetDllFullName.c)
 *     LdrResolveDelayLoadedAPI @ 0x180010380 (LdrResolveDelayLoadedAPI.c)
 *     RtlQueryInformationActivationContext @ 0x180012DE0 (RtlQueryInformationActivationContext.c)
 *     LdrGetDllHandleEx @ 0x1800168A0 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x180016A10 (LdrLoadDll.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpFindLoadedDll @ 0x18001DB20 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18001FC80 (LdrpFastpthReloadedDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 *     LdrpLoadContextReplaceModule @ 0x1800602FC (LdrpLoadContextReplaceModule.c)
 *     LdrpFreeReplacedModule @ 0x180066618 (LdrpFreeReplacedModule.c)
 *     LdrFindEntryForAddress @ 0x18006A350 (LdrFindEntryForAddress.c)
 *     LdrpUnloadNode @ 0x18006A4F8 (LdrpUnloadNode.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18006B230 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpInitShimEngine @ 0x18006B74C (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18006B8F4 (LdrpLoadShimEngine.c)
 *     LdrGetDllHandleByMapping @ 0x180074710 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x1800770B0 (LdrGetDllHandleByName.c)
 *     LdrpCorInitialize @ 0x180082BB4 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x180083114 (LdrpLoadWow64.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x180087AFC (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CD188 (LdrpCleanupEnclaveLoadState.c)
 *     LdrIsModuleSxsRedirected @ 0x1800CE020 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800CE210 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800CE6B0 (LdrSetImplicitPathOptions.c)
 *     AVrfCallAPILookupCallback @ 0x1800D99F0 (AVrfCallAPILookupCallback.c)
 *     AVrfInitializeVerifier @ 0x1800D9B98 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180013570 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpFreeUnicodeString @ 0x18005F8E0 (LdrpFreeUnicodeString.c)
 *     LdrpDestroyNode @ 0x18006E5B4 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x180070DB0 (LdrpUnmapModule.c)
 *     LdrpReleaseTlsEntry @ 0x18007E6C0 (LdrpReleaseTlsEntry.c)
 */

int __fastcall LdrpDereferenceModule(char *BaseAddress)
{
  __int64 *v1; // rax
  char **v3; // r8
  PVOID *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _ACTIVATION_CONTEXT *v7; // rcx

  v1 = (__int64 *)*((_QWORD *)BaseAddress + 19);
  if ( *((_DWORD *)v1 + 6) != -1 )
  {
    v1 = (__int64 *)*v1;
    if ( (*(_BYTE *)(v1 - 7) & 0x20) == 0 )
    {
      LODWORD(v1) = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 69, 0xFFFFFFFF);
      if ( (_DWORD)v1 == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v3 = (char **)*((_QWORD *)BaseAddress + 20);
        if ( v3[1] != BaseAddress + 160 || (v4 = (PVOID *)*((_QWORD *)BaseAddress + 21), *v4 != BaseAddress + 160) )
          __fastfail(3u);
        *v4 = v3;
        v3[1] = (char *)v4;
        v5 = (_QWORD *)*((_QWORD *)BaseAddress + 19);
        v6 = (_QWORD *)*v5;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *((_WORD *)BaseAddress + 55) )
          LdrpReleaseTlsEntry(BaseAddress, 0LL);
        LdrpUnmapModule(BaseAddress);
        v7 = (_ACTIVATION_CONTEXT *)*((_QWORD *)BaseAddress + 17);
        if ( (unsigned __int64)&v7[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v7);
        if ( *((_QWORD *)BaseAddress + 10) )
          LdrpFreeUnicodeString(BaseAddress + 72);
        LODWORD(v1) = RtlFreeHeap(LdrpHeap, 0, BaseAddress);
        if ( v6 == v5 )
          LODWORD(v1) = LdrpDestroyNode(v5);
      }
    }
  }
  return (int)v1;
}
