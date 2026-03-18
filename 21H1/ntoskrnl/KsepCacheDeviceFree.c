/*
 * XREFs of KsepCacheDeviceFree @ 0x1408BC800
 * Callers:
 *     KsepDbCacheReadDevice @ 0x14073E854 (KsepDbCacheReadDevice.c)
 *     KseQueryDeviceData @ 0x140747E00 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408BABA0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14036E4B4 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x1407441EC (KsepStringFree.c)
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
