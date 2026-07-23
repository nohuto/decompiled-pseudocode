/*
 * XREFs of RtlpLocateXStateChunk @ 0x1800F63E8
 * Callers:
 *     RtlLocateExtendedFeature2 @ 0x1800725D0 (RtlLocateExtendedFeature2.c)
 *     RtlGetExtendedFeaturesMask @ 0x1800F5D50 (RtlGetExtendedFeaturesMask.c)
 *     RtlSetExtendedFeaturesMask @ 0x1800F5D90 (RtlSetExtendedFeaturesMask.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlpLocateXStateChunk(_DWORD *a1)
{
  __int64 v1; // r9

  v1 = (int)a1[4];
  if ( *a1 > (int)v1 || a1[1] + *a1 < (int)v1 + a1[5] )
    return 0LL;
  else
    return (char *)a1 + v1;
}
