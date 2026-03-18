/*
 * XREFs of IsGreSelectRedirectionBitmapSupported @ 0x1C0030E50
 * Callers:
 *     DestroyCacheDC @ 0x1C0030D30 (DestroyCacheDC.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0093FA0 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreSelectRedirectionBitmapSupported()
{
  if ( qword_1C02519A0 )
    return qword_1C02519A0();
  else
    return 3221225659LL;
}
