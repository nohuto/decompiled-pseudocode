/*
 * XREFs of _RtlpFcLinearSearchInSortedArray@20 @ 0x4B3A119D
 * Callers:
 *     _RtlpFcQueryFeatureConfigurationFromBuffers@16 @ 0x4B3A1319 (_RtlpFcQueryFeatureConfigurationFromBuffers@16.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __fastcall RtlpFcLinearSearchInSortedArray(int a1, int a2, unsigned int a3, int a4, int (__fastcall *a5)(int, int))
{
  unsigned int i; // edi
  int v8; // eax

  for ( i = 0; i < a3; ++i )
  {
    v8 = a5(a1, a2);
    if ( v8 < 0 )
      break;
    if ( !v8 )
      return a2;
    a2 += a4;
  }
  return 0;
}
