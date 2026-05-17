/*
 * XREFs of wcsnlen @ 0x180092020
 * Callers:
 *     _wcslwr_s @ 0x18008DE30 (_wcslwr_s.c)
 *     _wcsupr_s @ 0x18008E320 (_wcsupr_s.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800EEA80 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800EEB08 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800F02D0 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800F04E0 (RtlpConvertLCIDsToCultureNames.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Source, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Source )
  {
    if ( !*Source )
      break;
    ++result;
  }
  return result;
}
