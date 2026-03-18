/*
 * XREFs of KsepStringFree @ 0x14075CDC4
 * Callers:
 *     KsepLoadShimProvider @ 0x14057D548 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x14057DA30 (KsepCacheHwIdFree.c)
 *     KsepDbFreeDriverShims @ 0x14075C424 (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x14075CB14 (KsepRegistryOpenKey.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075CC14 (KsepEngineGetShimsFromRegistry.c)
 *     KseDriverLoadImage @ 0x14075CCC8 (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x14075ECF4 (KseShimDriverIoCallbacks.c)
 *     KseAddHardwareId @ 0x1407EC8C4 (KseAddHardwareId.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1407ED310 (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceInsertData @ 0x14085C084 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x140963670 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140963B40 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140964E64 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceFree @ 0x140965070 (KsepCacheDeviceFree.c)
 *     KsepRegistryCreateKey @ 0x1409651B8 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1402D8494 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 */

void __fastcall KsepStringFree(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rax

  if ( a1 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 )
    {
      KsepPoolFreePaged(v2);
      *(_OWORD *)a1 = 0LL;
    }
  }
  else
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v3 + 1] = -1073740768;
    KsepHistoryErrors[2 * v3] = 197451;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("String != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x34Bu, 0LL);
  }
}
