/*
 * XREFs of ?xxxSetAndDrawMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@@Z @ 0xD9E9E
 * Callers:
 *     ?xxxSPISetMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@H@Z @ 0xD9E36 (-xxxSPISetMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@H@Z.c)
 * Callees:
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _SetMinMetrics@8 @ 0xDA05C (_SetMinMetrics@8.c)
 *     _xxxMetricsRecalc@28 @ 0x145FE4 (_xxxMetricsRecalc@28.c)
 */

int __fastcall xxxSetAndDrawMinMetrics(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // edx
  int v5; // eax
  int v6; // esi
  int v7; // eax

  v2 = *(_DWORD *)(_gpsi + 1724);
  v3 = *(_DWORD *)(_gpsi + 1728);
  SetMinMetrics(a1, a2);
  v4 = *(_DWORD *)(_gpsi + 1724) - v2;
  v5 = *(_DWORD *)(_gpsi + 1728) - v3;
  v6 = 0;
  if ( v4 || v5 )
    xxxMetricsRecalc(v5, 0, 0, 0, 0);
  v7 = *(_DWORD *)(_gptiCurrent + 248);
  if ( v7 )
    v6 = *(_DWORD *)(*(_DWORD *)(v7 + 4) + 12);
  xxxInternalInvalidate(v6, 1, 66693);
  return 1;
}
