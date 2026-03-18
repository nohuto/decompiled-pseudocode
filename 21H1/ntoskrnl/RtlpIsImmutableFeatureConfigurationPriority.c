/*
 * XREFs of RtlpIsImmutableFeatureConfigurationPriority @ 0x1403F13C8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140915618 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpIsImmutableFeatureConfigurationPriority(int a1)
{
  char result; // al

  result = 0;
  if ( !a1 || a1 == 15 )
    return 1;
  return result;
}
