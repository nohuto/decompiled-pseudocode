/*
 * XREFs of ?vIFIMetricsToTextMetricW@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAU_TMW_INTERNAL@@PAU_IFIMETRICS@@@Z @ 0x8A8DA
 * Callers:
 *     ?vGetTextMetrics@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAU_TMW_INTERNAL@@@Z @ 0x843AC (-vGetTextMetrics@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAU_TMW_INTERNAL@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z @ 0x88306 (-vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z.c)
 */

void __userpurge vIFIMetricsToTextMetricW(
        struct DCOBJ *a1@<edx>,
        struct RFONTOBJ *a2@<ecx>,
        struct RFONTOBJ *a3,
        struct _IFIMETRICS *a4,
        struct _TMW_INTERNAL *a5,
        struct _IFIMETRICS *a6)
{
  struct RFONTOBJ *v7; // eax
  struct tagTEXTMETRICW *v8; // [esp+0h] [ebp-Ch]
  struct _IFIMETRICS *v9; // [esp+4h] [ebp-8h]

  vIFIMetricsToTextMetricWStrict(a1, a2, a3, a4, v8, v9);
  *((_BYTE *)a3 + 64) = a4->chFirstChar;
  *((_BYTE *)a3 + 65) = a4->chLastChar;
  *((_BYTE *)a3 + 66) = a4->chDefaultChar;
  *((_BYTE *)a3 + 67) = a4->chBreakChar;
  v7 = (struct RFONTOBJ *)PALLOCMEM2(0x44u, 2003661895, 1);
  if ( v7 )
  {
    *(_DWORD *)(*(_DWORD *)a2 + 688) = v7;
    qmemcpy(v7, a3, 0x44u);
  }
}
