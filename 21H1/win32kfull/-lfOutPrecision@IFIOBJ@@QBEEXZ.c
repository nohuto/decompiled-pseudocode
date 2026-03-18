/*
 * XREFs of ?lfOutPrecision@IFIOBJ@@QBEEXZ @ 0x8999C
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     _cjCopyFontDataW@32 @ 0x8910A (_cjCopyFontDataW@32.c)
 *     _vIFIMetricsToLogFontW@8 @ 0x206CAD (_vIFIMetricsToLogFontW@8.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __thiscall IFIOBJ::lfOutPrecision(IFIOBJ *this)
{
  int v1; // eax

  v1 = *(_DWORD *)(*(_DWORD *)this + 48);
  if ( (v1 & 1) != 0 )
    return 8;
  if ( (v1 & 2) != 0 )
    return 6;
  if ( (v1 & 4) != 0 )
    return 3;
  if ( (v1 & 8) != 0 )
    return 8;
  return 0;
}
