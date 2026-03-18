/*
 * XREFs of ?RtlStringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1C0049488
 * Callers:
 *     ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C0048D80 (-RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 *     ?RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C0049310 (-RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0009C24 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCopyNExW(
        unsigned __int16 *a1,
        size_t a2,
        const unsigned __int16 *a3,
        size_t cchToCopy,
        unsigned __int16 **a5)
{
  unsigned __int16 *v5; // rdi
  NTSTATUS v6; // edx
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF

  pcchNewDestLength = a2;
  v5 = a1;
  if ( cchToCopy < 0x7FFFFFFF )
  {
    pcchNewDestLength = 0LL;
    v6 = RtlStringCopyWorkerW(a1, 0x104uLL, &pcchNewDestLength, a3, cchToCopy);
    a1 = &v5[pcchNewDestLength];
    if ( v6 < 0 )
    {
LABEL_5:
      *v5 = 0;
      a1 = v5;
      if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147483643 )
        return (unsigned int)v6;
      goto LABEL_7;
    }
  }
  else
  {
    v6 = -1073741811;
    *a1 = 0;
  }
  if ( v6 < 0 )
    goto LABEL_5;
LABEL_7:
  if ( a5 )
    *a5 = a1;
  return (unsigned int)v6;
}
