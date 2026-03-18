/*
 * XREFs of DeleteMetricsFont @ 0x1C000AF90
 * Callers:
 *     ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C000AF58 (-ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C000B698 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     GetScaledLogFontForDpi @ 0x1C0064EBC (GetScaledLogFontForDpi.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01EA51C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 * Callees:
 *     GreMarkDeletableFont @ 0x1C000CEA4 (GreMarkDeletableFont.c)
 */

__int64 __fastcall DeleteMetricsFont(struct HLFONT__ *a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    GreMarkDeletableFont(a1);
    return GreDeleteObject(a1);
  }
  return result;
}
