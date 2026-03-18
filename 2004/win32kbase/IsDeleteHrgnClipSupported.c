/*
 * XREFs of IsDeleteHrgnClipSupported @ 0x1C0040954
 * Callers:
 *     ReleaseCacheDC @ 0x1C008BB80 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDeleteHrgnClipSupported()
{
  if ( qword_1C02525B8 )
    return qword_1C02525B8();
  else
    return 3221225659LL;
}
