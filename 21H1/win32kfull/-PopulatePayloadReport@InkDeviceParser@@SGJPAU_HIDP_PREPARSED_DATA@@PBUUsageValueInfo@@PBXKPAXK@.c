/*
 * XREFs of ?PopulatePayloadReport@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PBUUsageValueInfo@@PBXKPAXK@Z @ 0x1AC6C4
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z @ 0x1B034C (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 */

CHAR *__userpurge InkDeviceParser::PopulatePayloadReport@<eax>(
        int a1@<edx>,
        struct _HIDP_PREPARSED_DATA *a2@<ecx>,
        PCHAR UsageValue,
        const struct UsageValueInfo *a4,
        PCHAR Report,
        ULONG ReportLength,
        void *a7,
        unsigned int a8)
{
  int v8; // ecx
  CHAR *v9; // esi
  CHAR *v11; // [esp-8h] [ebp-Ch]
  ULONG v12; // [esp-4h] [ebp-8h]

  v12 = ReportLength;
  v11 = Report;
  *Report = *(_BYTE *)(a1 + 6);
  v9 = (CHAR *)HidP_SetUsageValueArray(
                 HidP_Output,
                 *(_WORD *)(a1 + 4),
                 *(_WORD *)(a1 + 10),
                 *(_WORD *)(a1 + 60),
                 UsageValue,
                 0x48u,
                 a2,
                 v11,
                 v12);
  if ( (int)v9 < 0 && (unsigned int)CallbackContext > 2 )
  {
    Report = v9;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      byte_2558E4,
      v8,
      v8,
      (int)&Report);
  }
  return v9;
}
