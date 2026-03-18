/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE
 * Callers:
 *     ?OnThreadExit@InkProcessor@@QAEXPBUtagTHREADINFO@@@Z @ 0x99B5E (-OnThreadExit@InkProcessor@@QAEXPBUtagTHREADINFO@@@Z.c)
 *     ?PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0xF583A (-PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0xF59E8 (-PreProcessInkFeedbackCommand_NoLock@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1ABE31 (-OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceClosed@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1ABFB7 (-OnDeviceClosed@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceOpened@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1AC085 (-OnDeviceOpened@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoved@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1AC13F (-OnDeviceRemoved@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnPointerMessagePosted@InkProcessor@@QAEXIK@Z @ 0x1AC217 (-OnPointerMessagePosted@InkProcessor@@QAEXIK@Z.c)
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AC2B0 (-ProcessInkFeedbackCommand@InkProcessor@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?ProcessInput@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@PBX@Z @ 0x1AC3CE (-ProcessInput@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@PBX@Z.c)
 *     ?ValidatePointer@HideInkCursorProvider@@ABEJI@Z @ 0x1AFE5F (-ValidatePointer@HideInkCursorProvider@@ABEJI@Z.c)
 *     ?DoSuperWetInkStart@InkDevice@@AAEJPBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1B04AA (-DoSuperWetInkStart@InkDevice@@AAEJPBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1B0D08 (-ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?TerminateActiveCommand@InkDevice@@EAEXPAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1B12A5 (-TerminateActiveCommand@InkDevice@@EAEXPAVActiveCommand@InkFeedbackProviderBase@@@Z.c)
 *     ?ValidatePointer@InkDevice@@ABEJI@Z @ 0x1B1401 (-ValidatePointer@InkDevice@@ABEJI@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        const char **a6)
{
  char *v6; // esi
  int v7; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-44h] BYREF
  int v10; // [esp+28h] [ebp-24h]
  int v11; // [esp+2Ch] [ebp-20h]
  int v12; // [esp+30h] [ebp-1Ch]
  int v13; // [esp+34h] [ebp-18h]
  char *v14; // [esp+38h] [ebp-14h]
  int v15; // [esp+3Ch] [ebp-10h]
  int v16; // [esp+40h] [ebp-Ch]
  int v17; // [esp+44h] [ebp-8h]

  v6 = (char *)*a6;
  if ( *a6 )
  {
    v7 = &(*a6)[strlen(*a6) + 1] - v6;
  }
  else
  {
    v6 = byte_FC858;
    v7 = 1;
  }
  v16 = v7;
  v10 = a5;
  v14 = v6;
  v15 = 0;
  v17 = 0;
  v11 = 0;
  v12 = 4;
  v13 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&CallbackContext, a2, 0, 0, 4u, &UserData);
}
