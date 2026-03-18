/*
 * XREFs of KsepCacheDeviceFree @ 0x1408BDB20
 * Callers:
 *     KsepDbCacheReadDevice @ 0x1407403D4 (KsepDbCacheReadDevice.c)
 *     KseQueryDeviceData @ 0x140749980 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408BBEC0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14036F0E4 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x140745D6C (KsepStringFree.c)
 */

void __fastcall KsepCacheDeviceFree(void **a1)
{
  void **v1; // r14
  void **v3; // rsi
  void **v4; // rbx

  if ( a1 )
  {
    v1 = a1 + 7;
    v3 = (void **)a1[7];
    while ( v3 != v1 )
    {
      v4 = v3;
      v3 = (void **)*v3;
      KsepStringFree((__int64)(v4 + 2));
      KsepPoolFreePaged(v4[5]);
      KsepPoolFreePaged(v4);
    }
    KsepStringFree((__int64)(a1 + 5));
    KsepPoolFreePaged(a1);
  }
}
