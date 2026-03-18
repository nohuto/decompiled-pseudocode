/*
 * XREFs of IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C01F8024
 * Callers:
 *     ReleaseCacheDC @ 0x1C008BB80 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFlushWEFCOMPOSITEDDCEBoundsSupported()
{
  if ( qword_1C02525C8 )
    return qword_1C02525C8();
  else
    return 3221225659LL;
}
