/*
 * XREFs of ?ExtractReportUsages@@YGJW4_HIDP_REPORT_TYPE@@PAU_HIDP_PREPARSED_DATA@@PBUUsageValueInfo@@IPBXKPAUUsageValue@@@Z @ 0x1AC477
 * Callers:
 *     ?GetDeviceFeatures@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PBXKPBUUsageValueInfo@@PAVFeatures@InkDevice@@@Z @ 0x1AC5CD (-GetDeviceFeatures@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PBXKPBUUsageValueInfo@@PAVFeatur.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 */

_BYTE *__userpurge ExtractReportUsages@<eax>(
        struct _HIDP_PREPARSED_DATA *a1@<edx>,
        enum _HIDP_REPORT_TYPE a2,
        struct _HIDP_PREPARSED_DATA *a3,
        CHAR *Report,
        ULONG ReportLength,
        _BYTE *a6,
        unsigned int a7,
        struct UsageValue *a8)
{
  _BYTE *v8; // eax
  struct _HIDP_PREPARSED_DATA *v9; // ecx
  _BYTE *UsageValue; // ebx
  int v11; // esi
  USHORT *i; // edi
  int v13; // ecx

  v8 = a6;
  v9 = a1;
  UsageValue = 0;
  v11 = 0;
  for ( i = (USHORT *)(a2 + 10); ; i += 38 )
  {
    v8[8 * v11] = 0;
    if ( *((_BYTE *)i - 10) )
      break;
LABEL_5:
    if ( (unsigned int)++v11 >= 7 )
      return UsageValue;
  }
  UsageValue = (_BYTE *)HidP_GetUsageValue(
                          HidP_Feature,
                          *(i - 3),
                          *i,
                          i[25],
                          (PULONG)&v8[8 * v11 + 4],
                          v9,
                          Report,
                          ReportLength);
  if ( (int)UsageValue >= 0 )
  {
    v8 = a6;
    v9 = a1;
    a6[8 * v11] = 1;
    goto LABEL_5;
  }
  if ( (unsigned int)CallbackContext > 2 )
  {
    a6 = UsageValue;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      byte_2558E4,
      v13,
      v13,
      (int)&a6);
  }
  return UsageValue;
}
