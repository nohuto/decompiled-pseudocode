/*
 * XREFs of KsepStringFree @ 0x1407441EC
 * Callers:
 *     KsepLoadShimProvider @ 0x140521200 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x1405216E0 (KsepCacheHwIdFree.c)
 *     KseShimDriverIoCallbacks @ 0x140740FF4 (KseShimDriverIoCallbacks.c)
 *     KsepDbFreeDriverShims @ 0x140741A00 (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x140743E50 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x140743F4C (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140744138 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14074807C (KseAddHardwareId.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14074827C (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceInsertData @ 0x1407B6A30 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x1408BADA0 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BB280 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x1408BC5E4 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceFree @ 0x1408BC800 (KsepCacheDeviceFree.c)
 *     KsepRegistryCreateKey @ 0x1408BC988 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14036E4B4 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x140582D70 (RtlAssert.c)
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
