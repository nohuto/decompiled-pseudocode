/*
 * XREFs of IsGreSelectRedirectionBitmapSupported @ 0x1C0020CA0
 * Callers:
 *     DestroyCacheDC @ 0x1C0020B80 (DestroyCacheDC.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C004D710 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreSelectRedirectionBitmapSupported()
{
  if ( qword_1C024F9A0 )
    return qword_1C024F9A0();
  else
    return 3221225659LL;
}
