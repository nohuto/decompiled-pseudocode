/*
 * XREFs of ?DoSuperWetInkStop@InkDevice@@AAEJPBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1B0675
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1B0D08 (-ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?TerminateActiveCommand@InkDevice@@EAEXPAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1B12A5 (-TerminateActiveCommand@InkDevice@@EAEXPAVActiveCommand@InkFeedbackProviderBase@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@433@Z @ 0x1AF37E (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgPr.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z @ 0x1B034C (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z.c)
 */

CHAR *__thiscall InkDevice::DoSuperWetInkStop(InkDevice *this, const struct IFC_SUPERWET_INK_STOP_DATA **a2)
{
  const struct IFC_SUPERWET_INK_STOP_DATA **v2; // ebx
  int v4; // ecx
  CHAR *v5; // esi
  int v7; // [esp+10h] [ebp-10h] BYREF
  const char *v8; // [esp+14h] [ebp-Ch] BYREF
  const char *v9; // [esp+18h] [ebp-8h] BYREF
  int v10; // [esp+1Ch] [ebp-4h] BYREF

  v2 = a2;
  v5 = InkDevice::CreateAndSendSuperWetInkPayloadForCommand((int)this, 2, (int)a2, 4, COERCE_INT(0.0));
  if ( (int)v5 >= 0 )
  {
    if ( (unsigned int)CallbackContext > 4 )
    {
      a2 = (const struct IFC_SUPERWET_INK_STOP_DATA **)*v2;
      v8 = "Stopped super-wet ink";
      v7 = 0;
      v9 = (const char *)*((_DWORD *)this + 11);
      v10 = this != 0 ? (unsigned int)this + 20 : 0;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        byte_257009,
        v10,
        v10,
        (int)&v7,
        &v8,
        &v9,
        (int)&v10,
        (int)&a2);
    }
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    a2 = (const struct IFC_SUPERWET_INK_STOP_DATA **)v5;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      byte_2558E4,
      v4,
      v4,
      (int)&a2);
  }
  return v5;
}
