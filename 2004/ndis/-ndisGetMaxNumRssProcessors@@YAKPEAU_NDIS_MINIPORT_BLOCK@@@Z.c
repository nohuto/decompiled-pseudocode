/*
 * XREFs of ?ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003E648
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0089208 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C0026E40 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?ndisGetDefaultNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003D648 (-ndisGetDefaultNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisGetMaxNumRssProcessors(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r9
  bool v2; // bl
  unsigned int v3; // esi
  unsigned int v4; // r11d
  unsigned int v5; // edi
  char *v6; // r10
  struct _PROCESSOR_NUMBER v7; // r8d
  __int64 result; // rax

  v1 = a1;
  v2 = a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x14u);
  v3 = ndisRssCpuCount;
  v4 = 0;
  v5 = 0;
  if ( (_DWORD)ndisRssCpuCount )
  {
    v6 = (char *)ndisRssProcessors;
    do
    {
      if ( (!v2 || !*(_WORD *)v6)
        && (int)ndisCompareProcNum(
                  *(struct _PROCESSOR_NUMBER *)((char *)ndisRssProcessors + 4 * v5),
                  v1->RssBaseProcessor) >= 0
        && (int)ndisCompareProcNum(v7, v1->RssMaxProcessor) <= 0
        && (!v2 || !*(_WORD *)v6 && (unsigned __int8)v6[2] < 0x20u) )
      {
        ++v4;
      }
      ++v5;
      v6 += 4;
    }
    while ( v5 < v3 );
  }
  result = v1->MaxNumRssProcessors;
  if ( !(_DWORD)result )
    result = ndisGetDefaultNumRssProcessors(v1);
  if ( (unsigned int)result >= v4 )
    return v4;
  return result;
}
