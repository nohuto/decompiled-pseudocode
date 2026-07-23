/*
 * XREFs of _RtlNormalizeString@20 @ 0x4B3685C0
 * Callers:
 *     _RtlpNameprepAsciiRealWorker@40 @ 0x4B2E598C (_RtlpNameprepAsciiRealWorker@40.c)
 * Callees:
 *     _RtlpNormalizeStringWorker@20 @ 0x4B36860D (_RtlpNormalizeStringWorker@20.c)
 *     _RtlpGetNormalization@8 @ 0x4B375A88 (_RtlpGetNormalization@8.c)
 */

NTSTATUS __cdecl RtlNormalizeString(
        ULONG NormForm,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  NTSTATUS result; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  if ( !SourceString || SourceStringLength < -1 || !NormForm || *DestinationStringLength < 0 )
    return -1073741811;
  result = RtlpGetNormalization(NormForm, &v6);
  if ( result >= 0 )
    return RtlpNormalizeStringWorker(SourceStringLength, DestinationString, DestinationStringLength);
  return result;
}
