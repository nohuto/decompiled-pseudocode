/*
 * XREFs of _RtlIsNormalizedString@16 @ 0x4B368550
 * Callers:
 *     _RtlpIdnToUnicodeWorker@28 @ 0x4B36535D (_RtlpIdnToUnicodeWorker@28.c)
 * Callees:
 *     _Normalization__IsNormalized@16 @ 0x4B3676FC (_Normalization__IsNormalized@16.c)
 *     _RtlpGetNormalization@8 @ 0x4B375A88 (_RtlpGetNormalization@8.c)
 */

NTSTATUS __cdecl RtlIsNormalizedString(
        ULONG NormForm,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PBOOLEAN Normalized)
{
  LONG v4; // esi
  NTSTATUS result; // eax
  int v6; // [esp+4h] [ebp-4h] BYREF

  if ( !SourceString )
    return -1073741811;
  if ( !Normalized )
    return -1073741811;
  v4 = SourceStringLength;
  if ( SourceStringLength < -1 || !NormForm )
    return -1073741811;
  result = RtlpGetNormalization(NormForm, &v6);
  if ( result >= 0 )
  {
    if ( SourceStringLength == -1 )
      v4 = wcslen((const unsigned __int16 *)SourceString) + 1;
    return Normalization__IsNormalized(v6, (unsigned __int16 *)SourceString, v4, Normalized);
  }
  return result;
}
