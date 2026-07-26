/*
 * XREFs of NdisGetRssProcessorInformation @ 0x1C0026EC0
 * Callers:
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006B430 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006B6BC (-ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 * Callees:
 *     ?ndisPopulateRssProcessorSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RSS_PROCESSOR_INFO@@@Z @ 0x1C0026F8C (-ndisPopulateRssProcessorSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RSS_PROCESSOR_INFO@@@Z.c)
 *     ?ndisCalculateRssProcessorCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00270E8 (-ndisCalculateRssProcessorCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetDefaultNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003D9A8 (-ndisGetDefaultNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisGetRssProcessorInformation(
        NDIS_HANDLE NdisHandle,
        PNDIS_RSS_PROCESSOR_INFO RssProcessorInfo,
        PSIZE_T Size)
{
  NDIS_STATUS v3; // edi
  NDIS_HANDLE v6; // rbx
  ULONG_PTR v7; // rbp
  ULONG DefaultNumRssProcessors; // eax
  NDIS_STATUS result; // eax

  v3 = 0;
  v6 = NdisHandle;
  v7 = 0LL;
  if ( *(_BYTE *)NdisHandle != 17 )
  {
    if ( *(_BYTE *)NdisHandle != 18 )
    {
      v3 = -1073741811;
      goto LABEL_10;
    }
    v6 = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
  }
  v7 = 8LL * ndisCalculateRssProcessorCount((struct _NDIS_MINIPORT_BLOCK *)v6) + 40;
  if ( *Size >= v7 )
  {
    RssProcessorInfo->Header = (NDIS_OBJECT_HEADER)2622129;
    RssProcessorInfo->PreferredNumaNode = *((_WORD *)v6 + 2196);
    RssProcessorInfo->RssBaseProcessor = (PROCESSOR_NUMBER)*((_DWORD *)v6 + 1095);
    RssProcessorInfo[1].Header = (NDIS_OBJECT_HEADER)*((_DWORD *)v6 + 1096);
    RssProcessorInfo[1].Flags = *((_DWORD *)v6 + 1097);
    DefaultNumRssProcessors = *((_DWORD *)v6 + 1094);
    if ( !DefaultNumRssProcessors )
      DefaultNumRssProcessors = ndisGetDefaultNumRssProcessors((struct _NDIS_MINIPORT_BLOCK *)v6);
    RssProcessorInfo->MaxNumRssProcessors = DefaultNumRssProcessors;
    ndisPopulateRssProcessorSet((struct _NDIS_MINIPORT_BLOCK *)v6, RssProcessorInfo);
  }
  else
  {
    v3 = -1073676266;
  }
LABEL_10:
  result = v3;
  *Size = v7;
  return result;
}
