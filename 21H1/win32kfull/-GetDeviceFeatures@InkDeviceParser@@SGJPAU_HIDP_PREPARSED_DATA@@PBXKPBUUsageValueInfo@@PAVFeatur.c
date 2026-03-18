/*
 * XREFs of ?GetDeviceFeatures@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PBXKPBUUsageValueInfo@@PAVFeatures@InkDevice@@@Z @ 0x1AC5CD
 * Callers:
 *     ?Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B0877 (-Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ?ExtractReportUsages@@YGJW4_HIDP_REPORT_TYPE@@PAU_HIDP_PREPARSED_DATA@@PBUUsageValueInfo@@IPBXKPAUUsageValue@@@Z @ 0x1AC477 (-ExtractReportUsages@@YGJW4_HIDP_REPORT_TYPE@@PAU_HIDP_PREPARSED_DATA@@PBUUsageValueInfo@@IPBXKP.c)
 */

_BYTE *__userpurge InkDeviceParser::GetDeviceFeatures@<eax>(
        CHAR *a1@<edx>,
        struct _HIDP_PREPARSED_DATA *a2@<ecx>,
        struct _HIDP_PREPARSED_DATA *a3,
        enum _HIDP_REPORT_TYPE a4,
        _DWORD *a5,
        const struct UsageValueInfo *a6,
        struct InkDevice::Features *a7)
{
  int v7; // ecx
  _BYTE *ReportUsages; // edi
  unsigned int v10; // [esp+0h] [ebp-4Ch]
  struct UsageValue *v11; // [esp+4h] [ebp-48h]
  int v12; // [esp+Ch] [ebp-40h] BYREF
  _BYTE v13[4]; // [esp+10h] [ebp-3Ch] BYREF
  int v14; // [esp+14h] [ebp-38h]
  int v15; // [esp+1Ch] [ebp-30h]
  int v16; // [esp+24h] [ebp-28h]
  int v17; // [esp+2Ch] [ebp-20h]
  unsigned __int16 v18; // [esp+34h] [ebp-18h]
  unsigned __int16 v19; // [esp+36h] [ebp-16h]
  int v20; // [esp+3Ch] [ebp-10h]
  int v21; // [esp+44h] [ebp-8h]

  ReportUsages = ExtractReportUsages(a2, a4, a2, a1, (ULONG)a3, v13, v10, v11);
  if ( (int)ReportUsages >= 0 )
  {
    *a5 = v14;
    a5[1] = v15;
    a5[2] = v16;
    a5[3] = v17;
    a5[4] = v19;
    a5[5] = v18;
    a5[7] = *(_BYTE *)(a4 + 380) != 0 ? v20 : 0;
    if ( *(_BYTE *)(a4 + 456) )
      a5[6] = v21;
    else
      a5[6] = 1;
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    v12 = (int)ReportUsages;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      byte_2558E4,
      v7,
      v7,
      (int)&v12);
  }
  return ReportUsages;
}
