/*
 * XREFs of KsepCacheDeviceFree @ 0x140965070
 * Callers:
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 *     KsepDbCacheReadDevice @ 0x1407ED450 (KsepDbCacheReadDevice.c)
 *     KseQueryDeviceDataList @ 0x140963440 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1402D8494 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x14075CDC4 (KsepStringFree.c)
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
