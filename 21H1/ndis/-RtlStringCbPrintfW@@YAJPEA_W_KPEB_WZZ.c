/*
 * XREFs of ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0024EC0
 * Callers:
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C0023BA8 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ?ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEA_WI@Z @ 0x1C007D8EC (-ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEA_WI@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C0114E20 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z @ 0x1C011D38C (-ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z @ 0x1C011D43C (-ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z.c)
 *     ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C011D514 (-ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C011D5FC (-ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012CDE8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C0024F18 (RtlStringVPrintfWorkerW.c)
 */

__int64 RtlStringCbPrintfW(wchar_t *a1, unsigned __int64 a2, wchar_t *a3, ...)
{
  size_t v3; // rdx
  int v4; // r9d
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)RtlStringVPrintfWorkerW(a1, v3, (size_t *)a3, a3, va);
  }
  return (unsigned int)v4;
}
