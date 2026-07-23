/*
 * XREFs of LdrProtectMrdata @ 0x180012224
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800108F0 (RtlInsertInvertedFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x1800679F0 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180067BD0 (RtlAddFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180067EC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180068410 (RtlInstallFunctionTableCallback.c)
 *     LdrpGetShimEngineInterface @ 0x18006BCD8 (LdrpGetShimEngineInterface.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180070E28 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlpCallVectoredHandlers @ 0x180078A44 (RtlpCallVectoredHandlers.c)
 *     RtlInitializeHistoryTable @ 0x180078C5C (RtlInitializeHistoryTable.c)
 *     RtlSetProtectedPolicy @ 0x180080C30 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180081790 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180082190 (RtlpRemoveVectoredHandler.c)
 *     LdrpLoadWow64 @ 0x180083114 (LdrpLoadWow64.c)
 *     RtlInitializeNtUserPfn @ 0x18008C090 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x18008C1B0 (RtlResetNtUserPfn.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D10CC (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800D9B98 (AVrfInitializeVerifier.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0D44 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlpProtectInvertedFunctionTable @ 0x18010B440 (RtlpProtectInvertedFunctionTable.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     LdrpChangeMrdataProtection @ 0x1800134FC (LdrpChangeMrdataProtection.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall LdrProtectMrdata(int a1)
{
  int ScpCfgCheckFunction; // edi

  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  ScpCfgCheckFunction = LdrSystemDllInitBlock.ScpCfgCheckFunction;
  if ( !a1 )
  {
    if ( !LODWORD(LdrSystemDllInitBlock.ScpCfgCheckFunction) )
      LdrpChangeMrdataProtection(4LL);
    if ( ScpCfgCheckFunction != -1 )
    {
      LODWORD(LdrSystemDllInitBlock.ScpCfgCheckFunction) = ScpCfgCheckFunction + 1;
      goto LABEL_6;
    }
LABEL_10:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  if ( !LODWORD(LdrSystemDllInitBlock.ScpCfgCheckFunction) )
    goto LABEL_10;
  --LODWORD(LdrSystemDllInitBlock.ScpCfgCheckFunction);
  if ( ScpCfgCheckFunction == 1 )
    LdrpChangeMrdataProtection(2LL);
LABEL_6:
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
