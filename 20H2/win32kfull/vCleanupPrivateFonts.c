/*
 * XREFs of vCleanupPrivateFonts @ 0x1C001F4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C0021930 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 */

__int64 vCleanupPrivateFonts()
{
  __int64 result; // rax
  struct PFT **v1; // [rsp+30h] [rbp+8h] BYREF

  result = ghsemPublicPFT;
  if ( ghsemPublicPFT )
  {
    GreAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
    v1 = gpPFTPrivate;
    if ( gpPFTPrivate )
      PUBLIC_PFTOBJ::bCleanupPFT(&v1, 0LL, 0LL);
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    return GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  return result;
}
