/*
 * XREFs of ?DoHideInkCursorStop@HideInkCursorProvider@@AAEJPBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1AF898
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AFA6E (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?TerminateActiveCommand@HideInkCursorProvider@@UAEXPAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1AFE47 (-TerminateActiveCommand@HideInkCursorProvider@@UAEXPAVActiveCommand@InkFeedbackProviderBase@@@Z.c)
 * Callees:
 *     ?ForceHidePenCursor@Feedback@@YGXH@Z @ 0x148792 (-ForceHidePenCursor@Feedback@@YGXH@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@433@Z @ 0x1AF37E (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgPr.c)
 */

int __thiscall HideInkCursorProvider::DoHideInkCursorStop(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_STOP_DATA *a2)
{
  int v4; // eax
  Feedback *v6; // [esp+0h] [ebp-18h]
  int v7; // [esp+4h] [ebp-14h] BYREF
  HideInkCursorProvider *v8; // [esp+8h] [ebp-10h] BYREF
  const char *v9; // [esp+Ch] [ebp-Ch] BYREF
  const char *v10; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h] BYREF

  if ( (*((_DWORD *)this + 7))-- == 1 )
    Feedback::ForceHidePenCursor(v6, v7);
  if ( (unsigned int)CallbackContext > 4 )
  {
    v4 = *((_DWORD *)this + 7);
    v11 = 0;
    v7 = v4;
    v9 = (const char *)*((_DWORD *)this + 6);
    v8 = this;
    v10 = "Removed hide cursor request";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)this,
      byte_256EFA,
      (int)this,
      (int)this,
      (int)&v11,
      &v10,
      &v9,
      (int)&v8,
      (int)&v7);
  }
  return 0;
}
