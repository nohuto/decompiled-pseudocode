/*
 * XREFs of RtlNormalizeString @ 0x180080230
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x18000D1EC (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     RtlpNormalizeStringWorker @ 0x1800802B0 (RtlpNormalizeStringWorker.c)
 *     RtlpGetNormalization @ 0x180080620 (RtlpGetNormalization.c)
 */

NTSTATUS __cdecl RtlNormalizeString(
        ULONG NormForm,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  int v5; // ebp
  int v7; // esi
  PLONG v8; // rbx
  NTSTATUS result; // eax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = (int)DestinationString;
  v7 = (int)SourceString;
  if ( !SourceString )
    return -1073741811;
  if ( SourceStringLength < -1 )
    return -1073741811;
  if ( !NormForm )
    return -1073741811;
  v8 = DestinationStringLength;
  if ( *DestinationStringLength < 0 )
    return -1073741811;
  result = RtlpGetNormalization(NormForm, &v10);
  if ( result >= 0 )
    return RtlpNormalizeStringWorker(v10, v7, SourceStringLength, v5, (__int64)v8);
  return result;
}
