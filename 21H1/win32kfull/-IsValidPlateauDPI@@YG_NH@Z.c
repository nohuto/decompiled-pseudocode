/*
 * XREFs of ?IsValidPlateauDPI@@YG_NH@Z @ 0x155103
 * Callers:
 *     ?EnsureKMDpiMetricsCacheNode@@YGPAUtagDpiKMMetricsCacheNode@@H@Z @ 0x154FA4 (-EnsureKMDpiMetricsCacheNode@@YGPAUtagDpiKMMetricsCacheNode@@H@Z.c)
 * Callees:
 *     <none>
 */

char __thiscall IsValidPlateauDPI(void *this)
{
  char v1; // bl
  _DWORD *v2; // esi

  v1 = 0;
  v2 = &DesktopScaleFactorsArray;
  while ( (void *)((96 * *v2 + 50) / 0x64u) != this )
  {
    if ( (int)++v2 >= (int)WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids )
      return v1;
  }
  return 1;
}
