/*
 * XREFs of LdrProtectMrdata @ 0x180012224
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800108F0 (RtlInsertInvertedFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x180068EE0 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x1800690C0 (RtlAddFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800693B0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180069900 (RtlInstallFunctionTableCallback.c)
 *     LdrpGetShimEngineInterface @ 0x18006CD08 (LdrpGetShimEngineInterface.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180071E58 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlpCallVectoredHandlers @ 0x180079A74 (RtlpCallVectoredHandlers.c)
 *     RtlInitializeHistoryTable @ 0x180079C8C (RtlInitializeHistoryTable.c)
 *     RtlSetProtectedPolicy @ 0x180081550 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x1800820B0 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x1800828A0 (RtlpRemoveVectoredHandler.c)
 *     LdrpLoadWow64 @ 0x180083824 (LdrpLoadWow64.c)
 *     RtlInitializeNtUserPfn @ 0x18008C690 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x18008C7B0 (RtlResetNtUserPfn.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D108C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800D9948 (AVrfInitializeVerifier.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0AF4 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlpProtectInvertedFunctionTable @ 0x18010B2E0 (RtlpProtectInvertedFunctionTable.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     LdrpChangeMrdataProtection @ 0x1800134FC (LdrpChangeMrdataProtection.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrProtectMrdata(int a1)
{
  int v2; // edi

  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v2 = LdrpMrdataUnprotected;
  if ( !a1 )
  {
    if ( !LdrpMrdataUnprotected )
      LdrpChangeMrdataProtection(4LL);
    if ( v2 != -1 )
    {
      LdrpMrdataUnprotected = v2 + 1;
      return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
LABEL_10:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  if ( !LdrpMrdataUnprotected )
    goto LABEL_10;
  --LdrpMrdataUnprotected;
  if ( v2 == 1 )
    LdrpChangeMrdataProtection(2LL);
  return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
