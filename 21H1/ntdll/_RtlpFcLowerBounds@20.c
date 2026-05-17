/*
 * XREFs of _RtlpFcLowerBounds@20 @ 0x4B3A11DC
 * Callers:
 *     _RtlpFcQueryFeatureConfigurationFromBuffers@16 @ 0x4B3A1319 (_RtlpFcQueryFeatureConfigurationFromBuffers@16.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

unsigned int __fastcall RtlpFcLowerBounds(
        int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int (__fastcall *a5)(int, unsigned int))
{
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // esi
  unsigned int v11; // [esp+14h] [ebp-4h]

  v5 = a3;
  v6 = a4;
  v7 = a2;
  v8 = a2 + a4 * a3;
  while ( v7 < v8 )
  {
    v11 = v7 + v6 * (v5 >> 1);
    if ( a5(a1, v11) > 0 )
    {
      v7 = a4 + v11;
      v5 += -1 - (v5 >> 1);
    }
    else
    {
      v5 >>= 1;
      v8 = v11;
    }
    v6 = a4;
  }
  return v7;
}
