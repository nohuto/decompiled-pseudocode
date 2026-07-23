/*
 * XREFs of RtlQueryFeatureConfigurationChangeStamp @ 0x180101C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

RTL_FEATURE_CHANGE_STAMP RtlQueryFeatureConfigurationChangeStamp(void)
{
  return MEMORY[0x7FFE0710];
}
