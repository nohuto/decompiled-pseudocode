/*
 * XREFs of RtlReleasePath @ 0x180011F80
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18001664C (LdrpGetDelayloadExportDll.c)
 *     LdrGetDllHandleEx @ 0x1800168A0 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x180016A10 (LdrLoadDll.c)
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 *     LdrpMapDllSearchPath @ 0x18005F500 (LdrpMapDllSearchPath.c)
 *     LdrpInitShimEngine @ 0x18006B63C (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18006B7E4 (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x180081AF4 (LdrpInitializeImportRedirection.c)
 *     LdrpCorInitialize @ 0x180082AB4 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x180083014 (LdrpLoadWow64.c)
 *     LdrLoadEnclaveModule @ 0x1800CCE20 (LdrLoadEnclaveModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D0780 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlReleasePath(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  --*(_QWORD *)(a1 - 48);
  v2 = a1 - 128;
  if ( *(_QWORD *)(a1 - 48) )
    v2 = 0LL;
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v2 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v2);
  return result;
}
