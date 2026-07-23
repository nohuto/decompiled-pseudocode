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
 *     LdrpInitializeExecutionOptions @ 0x1800D104C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800D9908 (AVrfInitializeVerifier.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0AB4 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlpProtectInvertedFunctionTable @ 0x18010B2A0 (RtlpProtectInvertedFunctionTable.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     LdrpChangeMrdataProtection @ 0x1800134FC (LdrpChangeMrdataProtection.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall LdrProtectMrdata(int a1)
{
  int ScpCfgCheckESFunction; // edi

  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  ScpCfgCheckESFunction = LdrSystemDllInitBlock.ScpCfgCheckESFunction;
  if ( !a1 )
  {
    if ( !LODWORD(LdrSystemDllInitBlock.ScpCfgCheckESFunction) )
      LdrpChangeMrdataProtection(4LL);
    if ( ScpCfgCheckESFunction != -1 )
    {
      LODWORD(LdrSystemDllInitBlock.ScpCfgCheckESFunction) = ScpCfgCheckESFunction + 1;
      goto LABEL_6;
    }
LABEL_10:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  if ( !LODWORD(LdrSystemDllInitBlock.ScpCfgCheckESFunction) )
    goto LABEL_10;
  --LODWORD(LdrSystemDllInitBlock.ScpCfgCheckESFunction);
  if ( ScpCfgCheckESFunction == 1 )
    LdrpChangeMrdataProtection(2LL);
LABEL_6:
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
