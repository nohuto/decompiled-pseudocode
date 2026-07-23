/*
 * XREFs of _RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBuffer@12 @ 0x4B3A12C4
 * Callers:
 *     _RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet@12 @ 0x4B3A130B (_RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet@12.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBuffer(int a1, void *a2, unsigned int *a3)
{
  unsigned int *v3; // esi
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // ecx
  size_t v9; // [esp-4h] [ebp-Ch]

  v3 = *(unsigned int **)(a1 + 8);
  if ( v3 )
  {
    v6 = *v3;
    v7 = *a3;
    *a3 = *v3;
    if ( v6 <= v7 )
    {
      LODWORD(v9) = 16 * *v3;
      memcpy(a2, v3 + 1, v9);
      return 0;
    }
    else
    {
      return -2147483643;
    }
  }
  else
  {
    v5 = 0;
    *a3 = 0;
  }
  return v5;
}
