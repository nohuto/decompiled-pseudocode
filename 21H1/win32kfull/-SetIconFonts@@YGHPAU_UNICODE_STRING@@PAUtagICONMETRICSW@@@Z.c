/*
 * XREFs of ?SetIconFonts@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@@Z @ 0xDA45C
 * Callers:
 *     _SetIconMetrics@8 @ 0xD9F16 (_SetIconMetrics@8.c)
 * Callees:
 *     _InvalidateKMDpiMetricsCacheDPIMETRICS@0 @ 0xDA4B0 (_InvalidateKMDpiMetricsCacheDPIMETRICS@0.c)
 *     _UserSetAltScaleFont@8 @ 0xDAC76 (_UserSetAltScaleFont@8.c)
 *     _UserSetFont@16 @ 0xDAD12 (_UserSetFont@16.c)
 *     _GreMarkDeletableFont@4 @ 0xDAFD8 (_GreMarkDeletableFont@4.c)
 */

int __cdecl SetIconFonts()
{
  struct HLFONT__ **v0; // ebx
  int v1; // esi

  v0 = (struct HLFONT__ **)(GetSessionDpiMetrics() + 48);
  v1 = UserSetFont(154, v0);
  if ( v1 )
  {
    Get96DpiMetrics();
    v1 = UserSetAltScaleFont(*v0);
    if ( !v1 )
    {
      GreMarkDeletableFont(*v0);
      GreDeleteObject(*v0);
      *v0 = 0;
    }
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  return v1;
}
