/*
 * XREFs of MiPrefetchPagesViable @ 0x140387140
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14024AA58 (MiReturnFaultCharges.c)
 *     MiPrefetchNormally @ 0x140266AD0 (MiPrefetchNormally.c)
 *     MiObtainFaultCharges @ 0x140329630 (MiObtainFaultCharges.c)
 */

__int64 __fastcall MiPrefetchPagesViable(
        ULONG_PTR *a1,
        unsigned __int64 *a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  if ( !MiPrefetchNormally(a1, a4, a3) )
    return 0LL;
  if ( a2 )
  {
    if ( *a2 < a4 )
      return 0LL;
    *a2 -= a4;
  }
  if ( !a5 || MiObtainFaultCharges(a1, a4, 1) == a4 )
    return 1LL;
  MiReturnFaultCharges((__int64)a1, a4, 1);
  return 0LL;
}
