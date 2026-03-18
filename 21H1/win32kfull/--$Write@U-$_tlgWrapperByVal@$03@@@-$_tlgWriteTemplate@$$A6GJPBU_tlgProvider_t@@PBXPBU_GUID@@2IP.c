/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B
 * Callers:
 *     _InkProcessorOnThreadExit@4 @ 0x99B32 (_InkProcessorOnThreadExit@4.c)
 *     ?RefreshSizes@CCursorSizes@@QAEXXZ @ 0xA27AC (-RefreshSizes@CCursorSizes@@QAEXXZ.c)
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UAEXXZ @ 0xB20A4 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?Initialize@InkProcessor@@SGJXZ @ 0xE8C30 (-Initialize@InkProcessor@@SGJXZ.c)
 *     ?OnPointerMessagePosted@InkFeedbackServer@@QAEXIPBUtagPOINTER_INFO@@@Z @ 0xF57D4 (-OnPointerMessagePosted@InkFeedbackServer@@QAEXIPBUtagPOINTER_INFO@@@Z.c)
 *     ?PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0xF583A (-PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0xF59E8 (-PreProcessInkFeedbackCommand_NoLock@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?xxxSetSensorPresence@CLegacyRotationMgr@@UAEXH@Z @ 0x141347 (-xxxSetSensorPresence@CLegacyRotationMgr@@UAEXH@Z.c)
 *     ?xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AAEJH@Z @ 0x1413BE (-xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AAEJH@Z.c)
 *     ?InkProcessorOnInkDeviceAttached@@YGJPAURawInputManagerDeviceObject@@@Z @ 0x183775 (-InkProcessorOnInkDeviceAttached@@YGJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YGXPAURawInputManagerDeviceObject@@@Z @ 0x1837CF (-InkProcessorOnInkDeviceClosed@@YGXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceInputReport@@YGXPAURawInputManagerDeviceObject@@PAX@Z @ 0x183811 (-InkProcessorOnInkDeviceInputReport@@YGXPAURawInputManagerDeviceObject@@PAX@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YGXPAURawInputManagerDeviceObject@@@Z @ 0x183859 (-InkProcessorOnInkDeviceOpened@@YGXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YGXPAURawInputManagerDeviceObject@@@Z @ 0x18389B (-InkProcessorOnInkDeviceRemoved@@YGXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YGJIPAXI@Z @ 0x1838DD (-InkProcessorProcessInkFeedbackCommand@@YGJIPAXI@Z.c)
 *     _InkProcessorIsInkDevice@16 @ 0x183963 (_InkProcessorIsInkDevice@16.c)
 *     _InkProcessorOnPointerMessagePosted@8 @ 0x1839C5 (_InkProcessorOnPointerMessagePosted@8.c)
 *     ?OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1ABE31 (-OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AC2B0 (-ProcessInkFeedbackCommand@InkProcessor@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?ExtractReportUsages@@YGJW4_HIDP_REPORT_TYPE@@PAU_HIDP_PREPARSED_DATA@@PBUUsageValueInfo@@IPBXKPAUUsageValue@@@Z @ 0x1AC477 (-ExtractReportUsages@@YGJW4_HIDP_REPORT_TYPE@@PAU_HIDP_PREPARSED_DATA@@PBUUsageValueInfo@@IPBXKP.c)
 *     ?GetDeviceCaps@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAUUsageValueInfo@@1PAVCapabilities@InkDevice@@@Z @ 0x1AC505 (-GetDeviceCaps@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAUUsageValueInfo@@1PAVCapabilities@.c)
 *     ?GetDeviceFeatures@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PBXKPBUUsageValueInfo@@PAVFeatures@InkDevice@@@Z @ 0x1AC5CD (-GetDeviceFeatures@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PBXKPBUUsageValueInfo@@PAVFeatur.c)
 *     ?PopulatePayloadReport@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PBUUsageValueInfo@@PBXKPAXK@Z @ 0x1AC6C4 (-PopulatePayloadReport@InkDeviceParser@@SGJPAU_HIDP_PREPARSED_DATA@@PBUUsageValueInfo@@PBXKPAXK@.c)
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AFA6E (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z @ 0x1B034C (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z.c)
 *     ?DoSuperWetInkStart@InkDevice@@AAEJPBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1B04AA (-DoSuperWetInkStart@InkDevice@@AAEJPBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AAEJPBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1B0675 (-DoSuperWetInkStop@InkDevice@@AAEJPBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@ABEJIPAM@Z @ 0x1B0714 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@ABEJIPAM@Z.c)
 *     ?Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B0877 (-Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?PopulatePayloadV1@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_COMMAND@@PBXIMPAUPayloadV1@12@@Z @ 0x1B0B80 (-PopulatePayloadV1@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_COMMAND@@PBXIMPAUPayloadV1@12@@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1B0D08 (-ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?ValidateDeviceFeatures@InkDevice@@ABEJXZ @ 0x1B1367 (-ValidateDeviceFeatures@InkDevice@@ABEJXZ.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+4h] [ebp-34h] BYREF
  int v7; // [esp+24h] [ebp-14h]
  int v8; // [esp+28h] [ebp-10h]
  int v9; // [esp+2Ch] [ebp-Ch]
  int v10; // [esp+30h] [ebp-8h]

  v7 = a5;
  v8 = 0;
  v9 = 4;
  v10 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 3u, &UserData);
}
