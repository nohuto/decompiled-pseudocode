/*
 * XREFs of ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AFA6E
 * Callers:
 *     <none>
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@3@Z @ 0x1ABC78 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@433@Z @ 0x1AF37E (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@43ABU?$_tlgWrapperByVal@$00@@@Z @ 0x1AF44E (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTe.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IAEXPAVActiveCommand@1@@Z @ 0x1AF7A7 (-AddActiveCommand@InkFeedbackProviderBase@@IAEXPAVActiveCommand@1@@Z.c)
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AAEJPBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1AF830 (-DoHideInkCursorStart@HideInkCursorProvider@@AAEJPBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AAEJPBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1AF898 (-DoHideInkCursorStop@HideInkCursorProvider@@AAEJPBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IBEPAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1AF99A (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IBEPAVActiveCommand@1@W4INK_FEEDBAC.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IAEXPAPAVActiveCommand@1@@Z @ 0x1AFE22 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IAEXPAPAVActiveCommand@1@@Z.c)
 */

int __thiscall HideInkCursorProvider::ProcessInkFeedbackCommand(
        InkFeedbackProviderBase *this,
        const char *a2,
        int a3,
        struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId)
{
  char v4; // bl
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  const struct IFC_HIDE_INK_CURSOR_STOP_DATA *v10; // ecx
  int v11; // ecx
  struct InkFeedbackProviderBase::ActiveCommand *v12; // eax
  int v13; // ecx
  struct InkFeedbackProviderBase::ActiveCommand *v14; // eax
  struct InkFeedbackProviderBase::ActiveCommand *v15; // edi
  _DWORD *v16; // eax
  PKTHREAD CurrentThread; // eax
  InkFeedbackProviderBase *v18; // esi
  const struct IFC_HIDE_INK_CURSOR_START_DATA *v19; // ecx
  HideInkCursorProvider *v20; // ecx
  const struct IFC_HIDE_INK_CURSOR_START_DATA *v22; // [esp-4h] [ebp-20h]
  const char *v23; // [esp+Ch] [ebp-10h] BYREF
  const char *v24; // [esp+10h] [ebp-Ch] BYREF
  int v25; // [esp+14h] [ebp-8h] BYREF
  InkFeedbackProviderBase *v26; // [esp+18h] [ebp-4h] BYREF

  v4 = (char)a2;
  v26 = this;
  if ( a2 == (const char *)3 )
  {
    if ( ActiveCommandByTargetPointerId == (struct InkFeedbackProviderBase::ActiveCommand *)4 )
    {
      if ( (unsigned int)CallbackContext > 4 && _tlgKeywordOn(&CallbackContext, 0LL) )
      {
        a2 = (const char *)this;
        v24 = "Processing ink feedback command: IFC_HIDE_INK_CURSOR_START...";
        v25 = 0;
        ActiveCommandByTargetPointerId = *(struct InkFeedbackProviderBase::ActiveCommand **)a3;
        v23 = (const char *)*((_DWORD *)this + 6);
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v13,
          byte_257009,
          v13,
          v13,
          (int)&v25,
          &v24,
          &v23,
          (int)&a2,
          (int)&ActiveCommandByTargetPointerId);
      }
      ActiveCommandByTargetPointerId = *(struct InkFeedbackProviderBase::ActiveCommand **)a3;
      if ( InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(this, 3, (int)ActiveCommandByTargetPointerId) )
      {
        v6 = -1073741823;
        if ( (unsigned int)CallbackContext <= 2 || !_tlgKeywordOn(&CallbackContext, 0LL) )
          return v6;
        v12 = ActiveCommandByTargetPointerId;
        ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)"The specified pointer id alrea"
                                                                                          "dy has an active IFC_HIDE_INK_"
                                                                                          "CURSOR_START command";
LABEL_29:
        a3 = (int)v12;
        a2 = (const char *)-1073741823;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v11,
          byte_256FCC,
          v11,
          v11,
          (int)&a2,
          (const char **)&ActiveCommandByTargetPointerId,
          (int)&a3);
        return v6;
      }
      v14 = (struct InkFeedbackProviderBase::ActiveCommand *)Win32AllocPoolZInit(20, 1349217865);
      v15 = v14;
      if ( v14 )
      {
        *((_DWORD *)v14 + 2) = 0;
        *((_DWORD *)v14 + 3) = 0;
        *((_DWORD *)v14 + 4) = 0;
        *((_DWORD *)v14 + 1) = 0;
        *(_DWORD *)v14 = 0;
      }
      else
      {
        v15 = 0;
      }
      if ( v15 )
      {
        v16 = (_DWORD *)a3;
        *((_DWORD *)v15 + 2) = 3;
        *((_DWORD *)v15 + 3) = *v16;
        CurrentThread = KeGetCurrentThread();
        v18 = v26;
        v22 = v19;
        v20 = v26;
        *((_DWORD *)v15 + 4) = CurrentThread;
        a3 = HideInkCursorProvider::DoHideInkCursorStart(v20, v22);
        if ( a3 < 0 )
          Win32FreePool(v15);
        else
          InkFeedbackProviderBase::AddActiveCommand(v18, v15);
        return a3;
      }
      v6 = -1073741801;
      if ( (unsigned int)CallbackContext <= 2 || !_tlgKeywordOn(&CallbackContext, 0LL) )
        return v6;
    }
    else
    {
      v6 = -1073741811;
      if ( (unsigned int)CallbackContext <= 2 || !_tlgKeywordOn(&CallbackContext, 0LL) )
        return v6;
    }
LABEL_21:
    a3 = v6;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      byte_2558E4,
      v8,
      v8,
      (int)&a3);
    return v6;
  }
  if ( a2 != (const char *)4 )
  {
    v6 = -1073741637;
    if ( (unsigned int)CallbackContext > 2 && _tlgKeywordOn(&CallbackContext, 0LL) )
    {
      HIBYTE(a3) = v4;
      ActiveCommandByTargetPointerId = v26;
      v26 = (InkFeedbackProviderBase *)"Unsupported command";
      a2 = (const char *)*((_DWORD *)ActiveCommandByTargetPointerId + 6);
      v25 = -1073741637;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v7,
        byte_256F6E,
        v7,
        v7,
        (int)&v25,
        (const char **)&v26,
        &a2,
        (int)&ActiveCommandByTargetPointerId,
        (int)&a3 + 3);
    }
    return v6;
  }
  if ( ActiveCommandByTargetPointerId != (struct InkFeedbackProviderBase::ActiveCommand *)4 )
  {
    v6 = -1073741811;
    if ( (unsigned int)CallbackContext <= 2 || !_tlgKeywordOn(&CallbackContext, 0LL) )
      return v6;
    goto LABEL_21;
  }
  if ( (unsigned int)CallbackContext > 4 && _tlgKeywordOn(&CallbackContext, 0LL) )
  {
    a2 = (const char *)this;
    v24 = "Processing ink feedback command: IFC_HIDE_INK_CURSOR_STOP...";
    v23 = 0;
    ActiveCommandByTargetPointerId = *(struct InkFeedbackProviderBase::ActiveCommand **)a3;
    v25 = *((_DWORD *)this + 6);
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      byte_257009,
      v9,
      v9,
      (int)&v23,
      &v24,
      (const char **)&v25,
      (int)&a2,
      (int)&ActiveCommandByTargetPointerId);
  }
  a3 = *(_DWORD *)a3;
  ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                      this,
                                                                                      3,
                                                                                      a3);
  if ( ActiveCommandByTargetPointerId )
  {
    v6 = HideInkCursorProvider::DoHideInkCursorStop(this, v10);
    InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(v26, &ActiveCommandByTargetPointerId);
    return v6;
  }
  v6 = -1073741823;
  if ( (unsigned int)CallbackContext > 2 && _tlgKeywordOn(&CallbackContext, 0LL) )
  {
    v12 = (struct InkFeedbackProviderBase::ActiveCommand *)a3;
    ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)"Active IFC_HIDE_INK_CURSOR_START c"
                                                                                      "ommand not found for the specified pointer id";
    goto LABEL_29;
  }
  return v6;
}
