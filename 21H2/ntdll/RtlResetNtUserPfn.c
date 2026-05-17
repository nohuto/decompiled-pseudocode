/*
 * XREFs of RtlResetNtUserPfn @ 0x18008C7B0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlDllShutdownInProgress @ 0x180064930 (RtlDllShutdownInProgress.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_1801811D8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    LdrProtectMrdata(0);
    byte_1801811D8 = 0;
    memset64(off_180181180, (unsigned __int64)UninitUser32Proc, 0xBuLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    memset64(off_1801810C0, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    LdrProtectMrdata(1);
  }
  return 0LL;
}
