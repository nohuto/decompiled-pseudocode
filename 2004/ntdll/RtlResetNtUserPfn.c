/*
 * XREFs of RtlResetNtUserPfn @ 0x18008C0B0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlDllShutdownInProgress @ 0x180063330 (RtlDllShutdownInProgress.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_18017F1D8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    LdrProtectMrdata(0);
    byte_18017F1D8 = 0;
    memset64(off_18017F180, (unsigned __int64)UninitUser32Proc, 0xBuLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    memset64(off_18017F0C0, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    LdrProtectMrdata(1);
  }
  return 0LL;
}
