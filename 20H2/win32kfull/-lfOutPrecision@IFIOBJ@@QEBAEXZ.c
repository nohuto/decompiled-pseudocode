/*
 * XREFs of ?lfOutPrecision@IFIOBJ@@QEBAEXZ @ 0x1C0112C80
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C005A300 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     vIFIMetricsToLogFontW @ 0x1C02A68BC (vIFIMetricsToLogFontW.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IFIOBJ::lfOutPrecision(IFIOBJ *this)
{
  int v1; // ecx
  unsigned __int8 result; // al

  v1 = *(_DWORD *)(*(_QWORD *)this + 48LL);
  result = 8;
  if ( (v1 & 1) == 0 )
  {
    if ( (v1 & 2) != 0 )
    {
      return 6;
    }
    else if ( (v1 & 4) != 0 )
    {
      return 3;
    }
    else if ( (v1 & 8) == 0 )
    {
      return 0;
    }
  }
  return result;
}
