/*
 * XREFs of KsepStringFree @ 0x14075494C
 * Callers:
 *     KsepLoadShimProvider @ 0x140525220 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x140525700 (KsepCacheHwIdFree.c)
 *     KseShimDriverIoCallbacks @ 0x140751754 (KseShimDriverIoCallbacks.c)
 *     KsepDbFreeDriverShims @ 0x140752160 (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x1407545B0 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x1407546AC (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140754898 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x1407587DC (KseAddHardwareId.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1407589DC (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceInsertData @ 0x1407C8430 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x1408C1E20 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408C2300 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x1408C3664 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceFree @ 0x1408C3880 (KsepCacheDeviceFree.c)
 *     KsepRegistryCreateKey @ 0x1408C3A08 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140371034 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x140586E00 (RtlAssert.c)
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
