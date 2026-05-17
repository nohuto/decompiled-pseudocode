/*
 * XREFs of _RtlIsNormalizedString@16 @ 0x4B368550
 * Callers:
 *     _RtlpIdnToUnicodeWorker@28 @ 0x4B36535D (_RtlpIdnToUnicodeWorker@28.c)
 * Callees:
 *     _Normalization__IsNormalized@16 @ 0x4B3676FC (_Normalization__IsNormalized@16.c)
 *     _RtlpGetNormalization@8 @ 0x4B375A88 (_RtlpGetNormalization@8.c)
 */

int __stdcall RtlIsNormalizedString(int a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  int v4; // esi
  int result; // eax
  int v6; // [esp+4h] [ebp-4h] BYREF

  if ( !a2 )
    return -1073741811;
  if ( !a4 )
    return -1073741811;
  v4 = a3;
  if ( a3 < -1 || !a1 )
    return -1073741811;
  result = RtlpGetNormalization(a1, &v6);
  if ( result >= 0 )
  {
    if ( a3 == -1 )
      v4 = wcslen(a2) + 1;
    return Normalization__IsNormalized(v6, a2, v4, a4);
  }
  return result;
}
