/*
 * XREFs of IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C01FDA54
 * Callers:
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFlushWEFCOMPOSITEDDCEBoundsSupported()
{
  if ( qword_1C0258588 )
    return qword_1C0258588();
  else
    return 3221225659LL;
}
