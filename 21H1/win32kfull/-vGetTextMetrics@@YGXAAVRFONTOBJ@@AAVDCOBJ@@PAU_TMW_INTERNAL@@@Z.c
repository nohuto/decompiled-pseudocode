/*
 * XREFs of ?vGetTextMetrics@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAU_TMW_INTERNAL@@@Z @ 0x843AC
 * Callers:
 *     _GreGetTextMetricsW@8 @ 0x84442 (_GreGetTextMetricsW@8.c)
 * Callees:
 *     ?vIFIMetricsToTextMetricW@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAU_TMW_INTERNAL@@PAU_IFIMETRICS@@@Z @ 0x8A8DA (-vIFIMetricsToTextMetricW@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAU_TMW_INTERNAL@@PAU_IFIMETRICS@@@Z.c)
 */

void __userpurge vGetTextMetrics(
        int a1@<edx>,
        int a2@<ecx>,
        struct RFONTOBJ *a3,
        struct DCOBJ *a4,
        struct _TMW_INTERNAL *a5)
{
  const void *v5; // esi
  bool v6; // cf
  struct _TMW_INTERNAL *v7; // [esp+0h] [ebp-Ch]
  struct _IFIMETRICS *v8; // [esp+4h] [ebp-8h]

  v5 = *(const void **)(*(_DWORD *)a2 + 688);
  if ( v5 )
  {
    qmemcpy(a3, v5, 0x44u);
    v6 = (*(_DWORD *)(*(_DWORD *)a1 + 1556) & 0x80u) != 0;
    *((_BYTE *)a3 + 53) = -((*(_DWORD *)(*(_DWORD *)a1 + 1556) & 0x20) != 0);
    *((_BYTE *)a3 + 54) = -v6;
    *((_BYTE *)a3 + 56) = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)a1 + 1020) + 6);
  }
  else
  {
    vIFIMetricsToTextMetricW(a3, *(struct DCOBJ **)(*(_DWORD *)(*(_DWORD *)a2 + 80) + 20), v7, v8);
  }
}
