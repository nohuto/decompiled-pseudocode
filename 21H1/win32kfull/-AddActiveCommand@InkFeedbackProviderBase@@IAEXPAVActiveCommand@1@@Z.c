/*
 * XREFs of ?AddActiveCommand@InkFeedbackProviderBase@@IAEXPAVActiveCommand@1@@Z @ 0x1AF7A7
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AFA6E (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1B0D08 (-ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$00@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@4ABU?$_tlgWrapperByVal@$00@@333@Z @ 0x1AF604 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$00@@U1@U1@U1@@-$_tlgW.c)
 */

void __thiscall InkFeedbackProviderBase::AddActiveCommand(
        InkFeedbackProviderBase *this,
        struct InkFeedbackProviderBase::ActiveCommand *a2)
{
  char *v3; // eax
  InkFeedbackProviderBase **v4; // esi
  struct InkFeedbackProviderBase::ActiveCommand *v5; // ecx
  int v6; // [esp+4h] [ebp-18h] BYREF
  const char *v7; // [esp+8h] [ebp-14h] BYREF
  const char *v8; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+10h] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-8h] BYREF
  int v11; // [esp+18h] [ebp-4h] BYREF

  ++*((_DWORD *)this + 5);
  v3 = (char *)this + 12;
  v4 = (InkFeedbackProviderBase **)*((_DWORD *)this + 4);
  if ( *v4 != (InkFeedbackProviderBase *)((char *)this + 12) )
    __fastfail(3u);
  v5 = a2;
  *(_DWORD *)a2 = v3;
  *((_DWORD *)v5 + 1) = v4;
  *v4 = v5;
  *((_DWORD *)v3 + 1) = v5;
  if ( (unsigned int)CallbackContext > 4 )
  {
    v11 = *((_DWORD *)this + 5);
    v10 = *((_DWORD *)v5 + 4);
    v9 = *((_DWORD *)v5 + 3);
    HIBYTE(a2) = *((_BYTE *)v5 + 8);
    v8 = (const char *)*((_DWORD *)this + 6);
    v6 = 0;
    v7 = "Added active command";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v5,
      byte_257077,
      (int)v5,
      (int)v5,
      (int)&v6,
      &v7,
      &v8,
      (int)&a2 + 3,
      (int)&v9,
      (int)&v10,
      (int)&v11);
  }
}
