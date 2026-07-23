/*
 * XREFs of _wcsnlen @ 0x4B2FA870
 * Callers:
 *     __wcslwr_s @ 0x4B2F7A50 (__wcslwr_s.c)
 *     __wcsupr_s @ 0x4B2F7F90 (__wcsupr_s.c)
 *     _RtlpQueryTimeZoneKeyNameRoutine@24 @ 0x4B351420 (_RtlpQueryTimeZoneKeyNameRoutine@24.c)
 *     _RtlpSetTimeZoneInformationWorker@8 @ 0x4B35147B (_RtlpSetTimeZoneInformationWorker@8.c)
 *     _RtlpConvertCultureNamesToLCIDs@8 @ 0x4B353970 (_RtlpConvertCultureNamesToLCIDs@8.c)
 *     _RtlpConvertLCIDsToCultureNames@8 @ 0x4B353B60 (_RtlpConvertLCIDsToCultureNames@8.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Source, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; (unsigned int)result < (unsigned int)MaxCount; ++Source )
  {
    if ( !*Source )
      break;
    LODWORD(result) = result + 1;
  }
  return result;
}
