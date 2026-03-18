/*
 * XREFs of IsGreSelectRedirectionBitmapSupported @ 0x1C006C4C4
 * Callers:
 *     DestroyCacheDC @ 0x1C006C4F0 (DestroyCacheDC.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C00908A8 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreSelectRedirectionBitmapSupported()
{
  if ( qword_1C0257960 )
    return qword_1C0257960();
  else
    return 3221225659LL;
}
