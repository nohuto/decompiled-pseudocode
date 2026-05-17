/*
 * XREFs of @RtlFcpCompareFeatureIdToFeatureUsageSubscription@8 @ 0x4B3A1190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RtlFcpCompareFeatureIdToFeatureUsageSubscription(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 <= *a2 )
    return -(*a1 < *a2);
  else
    return 1;
}
