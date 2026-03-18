/*
 * XREFs of DwmSyncFlushAndWaitForBatch @ 0x1C014D490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DwmSyncFlushAndWaitForBatch(__int64 a1)
{
  if ( qword_1C0252D88 )
    return qword_1C0252D88(a1, 0LL);
  else
    return 3221225659LL;
}
