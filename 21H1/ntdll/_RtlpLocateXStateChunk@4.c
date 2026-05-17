/*
 * XREFs of _RtlpLocateXStateChunk@4 @ 0x4B35C522
 * Callers:
 *     _RtlGetExtendedFeaturesMask@4 @ 0x4B35B880 (_RtlGetExtendedFeaturesMask@4.c)
 *     _RtlLocateExtendedFeature2@16 @ 0x4B35BA70 (_RtlLocateExtendedFeature2@16.c)
 *     _RtlSetExtendedFeaturesMask@12 @ 0x4B35BC40 (_RtlSetExtendedFeaturesMask@12.c)
 * Callees:
 *     <none>
 */

char *__thiscall RtlpLocateXStateChunk(_DWORD *this)
{
  int v1; // esi

  v1 = this[4];
  if ( *this > v1 || *this + this[1] < v1 + this[5] )
    return 0;
  else
    return (char *)this + v1;
}
