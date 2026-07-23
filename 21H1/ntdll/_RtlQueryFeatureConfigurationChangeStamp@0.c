/*
 * XREFs of _RtlQueryFeatureConfigurationChangeStamp@0 @ 0x4B3696B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

RTL_FEATURE_CHANGE_STAMP RtlQueryFeatureConfigurationChangeStamp(void)
{
  RTL_FEATURE_CHANGE_STAMP result; // rax

  while ( 1 )
  {
    HIDWORD(result) = MEMORY[0x7FFE0714];
    if ( MEMORY[0x7FFE0714] == MEMORY[0x7FFE0718] )
      break;
    _mm_pause();
  }
  LODWORD(result) = MEMORY[0x7FFE0710];
  return result;
}
