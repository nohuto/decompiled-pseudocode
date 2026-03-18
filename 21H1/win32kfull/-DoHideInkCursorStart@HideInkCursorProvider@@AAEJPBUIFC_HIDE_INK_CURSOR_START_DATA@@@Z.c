/*
 * XREFs of ?DoHideInkCursorStart@HideInkCursorProvider@@AAEJPBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1AF830
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AFA6E (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     ?ForceHidePenCursor@Feedback@@YGXH@Z @ 0x148792 (-ForceHidePenCursor@Feedback@@YGXH@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@433@Z @ 0x1AF37E (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgPr.c)
 */

int __thiscall HideInkCursorProvider::DoHideInkCursorStart(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_START_DATA *a2)
{
  int v3; // eax
  int v4; // eax
  Feedback *v6; // [esp+0h] [ebp-1Ch]
  int v7; // [esp+4h] [ebp-18h]
  int v8; // [esp+8h] [ebp-14h] BYREF
  const char *v9; // [esp+Ch] [ebp-10h] BYREF
  const char *v10; // [esp+10h] [ebp-Ch] BYREF
  HideInkCursorProvider *v11; // [esp+14h] [ebp-8h] BYREF
  int v12; // [esp+18h] [ebp-4h] BYREF

  v3 = *((_DWORD *)this + 7);
  if ( !v3 )
  {
    Feedback::ForceHidePenCursor(v6, v7);
    v3 = *((_DWORD *)this + 7);
  }
  v4 = v3 + 1;
  *((_DWORD *)this + 7) = v4;
  if ( (unsigned int)CallbackContext > 4 )
  {
    v8 = 0;
    v12 = v4;
    v10 = (const char *)*((_DWORD *)this + 6);
    v11 = this;
    v9 = "Added hide cursor request";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)this,
      byte_256EFA,
      (int)this,
      (int)this,
      (int)&v8,
      &v9,
      &v10,
      (int)&v11,
      (int)&v12);
  }
  return 0;
}
