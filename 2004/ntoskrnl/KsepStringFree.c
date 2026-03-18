/*
 * XREFs of KsepStringFree @ 0x140745D6C
 * Callers:
 *     KsepLoadShimProvider @ 0x140521850 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x140521D30 (KsepCacheHwIdFree.c)
 *     KseShimDriverIoCallbacks @ 0x140742B74 (KseShimDriverIoCallbacks.c)
 *     KsepDbFreeDriverShims @ 0x140743580 (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x1407459D0 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x140745ACC (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140745CB8 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x140749BFC (KseAddHardwareId.c)
 *     KsepDbQueryRegistryDeviceData @ 0x140749DFC (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceInsertData @ 0x1407B9BA0 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x1408BC0C0 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BC5A0 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x1408BD904 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceFree @ 0x1408BDB20 (KsepCacheDeviceFree.c)
 *     KsepRegistryCreateKey @ 0x1408BDCA8 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14036F0E4 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x1405834A0 (RtlAssert.c)
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
