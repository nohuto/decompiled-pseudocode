/*
 * XREFs of ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C0026E40
 * Callers:
 *     ?ndisPopulateRssProcessorSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RSS_PROCESSOR_INFO@@@Z @ 0x1C0026C2C (-ndisPopulateRssProcessorSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RSS_PROCESSOR_INFO@@@Z.c)
 *     ?ndisCalculateRssProcessorCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0026D88 (-ndisCalculateRssProcessorCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00274BC (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003E648 (-ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCompareProcNumInit @ 0x1C0143500 (ndisCompareProcNumInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCompareProcNum(struct _PROCESSOR_NUMBER a1, struct _PROCESSOR_NUMBER a2)
{
  if ( a1.Group > a2.Group )
    return 1LL;
  if ( a1.Group < a2.Group || a1.Number < a2.Number )
    return 0xFFFFFFFFLL;
  return a1.Number > a2.Number;
}
