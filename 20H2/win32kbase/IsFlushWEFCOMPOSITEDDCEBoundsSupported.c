/*
 * XREFs of IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C01F66F4
 * Callers:
 *     ReleaseCacheDC @ 0x1C00418A0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFlushWEFCOMPOSITEDDCEBoundsSupported()
{
  if ( qword_1C02505C8 )
    return qword_1C02505C8();
  else
    return 3221225659LL;
}
