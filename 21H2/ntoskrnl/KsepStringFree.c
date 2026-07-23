/*
 * XREFs of KsepStringFree @ 0x14075B9C0
 * Callers:
 *     KsepLoadShimProvider @ 0x140526F40 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x140527420 (KsepCacheHwIdFree.c)
 *     KseShimDriverIoCallbacks @ 0x1407586E4 (KseShimDriverIoCallbacks.c)
 *     KsepDbFreeDriverShims @ 0x1407590F0 (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x14075B624 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x14075B720 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075B90C (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14075F85C (KseAddHardwareId.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14075FA5C (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceInsertData @ 0x1407CC860 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x1408BF740 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BFC20 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x1408C0F84 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceFree @ 0x1408C11A0 (KsepCacheDeviceFree.c)
 *     KsepRegistryCreateKey @ 0x1408C1328 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140371274 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x140588A40 (RtlAssert.c)
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
