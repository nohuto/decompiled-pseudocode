/*
 * XREFs of ?ndisCalculateRssProcessorCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0026B48
 * Callers:
 *     NdisGetRssProcessorInformation @ 0x1C0026920 (NdisGetRssProcessorInformation.c)
 * Callees:
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C0026C00 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 */

__int64 __fastcall ndisCalculateRssProcessorCount(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // r10d
  unsigned int v3; // r9d
  bool v4; // di
  unsigned int v5; // esi
  _WORD *v6; // r11
  struct _PROCESSOR_NUMBER v7; // r8d

  v2 = 0;
  v3 = 0;
  v4 = a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x14u);
  v5 = ndisRssCpuCount;
  if ( (_DWORD)ndisRssCpuCount )
  {
    v6 = ndisRssProcessors;
    do
    {
      if ( (!v4 || !*v6)
        && (int)ndisCompareProcNum(
                  *(struct _PROCESSOR_NUMBER *)((char *)ndisRssProcessors + 4 * v2),
                  a1->RssBaseProcessor) >= 0
        && (int)ndisCompareProcNum(a1->RssMaxProcessor, v7) >= 0 )
      {
        ++v3;
      }
      ++v2;
      v6 += 2;
    }
    while ( v2 < v5 );
  }
  return v3;
}
