/*
 * XREFs of ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C0023778
 * Callers:
 *     DestroyDpiMetricsCache @ 0x1C0023670 (DestroyDpiMetricsCache.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00236E0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C00237B0 (DeleteMetricsFont.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

void __fastcall ClearDPISERVERINFO(struct tagDPISERVERINFO *a1)
{
  DeleteMetricsFont(*((_QWORD *)a1 + 1));
  DeleteMetricsFont(*((_QWORD *)a1 + 3));
  memset(a1, 0, 0x68uLL);
}
