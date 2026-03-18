/*
 * XREFs of ?GetDeviceCaps@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAUUsageValueInfo@@1PAVCapabilities@InkDevice@@@Z @ 0x1AC505
 * Callers:
 *     ?Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B0877 (-Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ?ValidateReportUsages@@YGJW4_HIDP_REPORT_TYPE@@PAU_HIDP_PREPARSED_DATA@@PBUUsageDescriptor@@IPAUUsageValueInfo@@@Z @ 0x1AC721 (-ValidateReportUsages@@YGJW4_HIDP_REPORT_TYPE@@PAU_HIDP_PREPARSED_DATA@@PBUUsageDescriptor@@IPAU.c)
 */

int __userpurge InkDeviceParser::GetDeviceCaps@<eax>(
        int a1@<edx>,
        struct _HIDP_PREPARSED_DATA *a2,
        struct UsageValueInfo *a3,
        struct UsageValueInfo *a4,
        struct InkDevice::Capabilities *a5)
{
  int v6; // ecx
  int v7; // esi
  struct UsageValueInfo *v8; // ebx
  unsigned int v10; // [esp+0h] [ebp-10h]
  unsigned int v11; // [esp+0h] [ebp-10h]
  struct UsageValueInfo *v12; // [esp+4h] [ebp-Ch]
  struct UsageValueInfo *v13; // [esp+4h] [ebp-Ch]

  v7 = ValidateReportUsages(
         (USHORT)&InkDeviceParser::DeviceFeaturesReport::Usages,
         (struct _HIDP_PREPARSED_DATA *)7,
         (const struct UsageDescriptor *)a1,
         v10,
         v12);
  if ( v7 >= 0 )
  {
    v8 = a3;
    *(_BYTE *)a3 = *(_BYTE *)(a1 + 6);
    *((_BYTE *)v8 + 2) = *(_BYTE *)(a1 + 380);
    *((_BYTE *)v8 + 1) = *(_BYTE *)(a1 + 456);
    v7 = ValidateReportUsages(
           (USHORT)&InkDeviceParser::PayloadReport::Usages,
           (struct _HIDP_PREPARSED_DATA *)1,
           a2,
           v11,
           v13);
    if ( v7 < 0 )
    {
      if ( (unsigned int)CallbackContext <= 2 )
        return v7;
      goto LABEL_3;
    }
    if ( *((_WORD *)a2 + 11) == 8 )
    {
      *((_BYTE *)v8 + 4) = *((_BYTE *)a2 + 6);
      *((_DWORD *)v8 + 2) = *((unsigned __int16 *)a2 + 12);
      return v7;
    }
    v7 = -1073741762;
    if ( (unsigned int)CallbackContext > 2 )
    {
LABEL_3:
      a3 = (struct UsageValueInfo *)v7;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)&CallbackContext,
        byte_2558E4,
        v6,
        v6,
        (int)&a3);
    }
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    goto LABEL_3;
  }
  return v7;
}
