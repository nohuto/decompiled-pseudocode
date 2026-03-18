/*
 * XREFs of ?ClearDPISERVERINFO@@YGXPAUtagDPISERVERINFO@@@Z @ 0xDB07A
 * Callers:
 *     _UpdateDpiMetricsCacheDPISERVERINFO@0 @ 0xDB010 (_UpdateDpiMetricsCacheDPISERVERINFO@0.c)
 *     _DestroyDpiMetricsCache@0 @ 0xF1A8C (_DestroyDpiMetricsCache@0.c)
 * Callees:
 *     _GreMarkDeletableFont@4 @ 0xDAFD8 (_GreMarkDeletableFont@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __thiscall ClearDPISERVERINFO(struct HLFONT__ **this)
{
  struct HLFONT__ *v2; // edi
  struct HLFONT__ *v3; // edi

  v2 = this[2];
  if ( v2 )
  {
    GreMarkDeletableFont(this[2]);
    GreDeleteObject(v2);
  }
  v3 = this[5];
  if ( v3 )
  {
    GreMarkDeletableFont(this[5]);
    GreDeleteObject(v3);
  }
  memset(this, 0, 0x5Cu);
}
