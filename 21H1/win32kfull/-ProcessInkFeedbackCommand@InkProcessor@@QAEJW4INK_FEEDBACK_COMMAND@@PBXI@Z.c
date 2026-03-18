/*
 * XREFs of ?ProcessInkFeedbackCommand@InkProcessor@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AC2B0
 * Callers:
 *     ?InkProcessorProcessInkFeedbackCommand@@YGJIPAXI@Z @ 0x1838DD (-InkProcessorProcessInkFeedbackCommand@@YGJIPAXI@Z.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ?PreProcessInkFeedbackCommand_NoLock@InkFeedbackServer@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0xF5952 (-PreProcessInkFeedbackCommand_NoLock@InkFeedbackServer@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?RunForAllProviders@InkFeedbackServer@@AAEJW4INK_FEEDBACK_COMMAND@@PBXIP6GJPAVInkFeedbackProviderBase@@01I@Z@Z @ 0xF5970 (-RunForAllProviders@InkFeedbackServer@@AAEJW4INK_FEEDBACK_COMMAND@@PBXIP6GJPAVInkFeedbackProvide.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ??1SyncLockExclusive@PushLock@Ex@@QAE@XZ @ 0x1A1473 (--1SyncLockExclusive@PushLock@Ex@@QAE@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 */

int __thiscall InkProcessor::ProcessInkFeedbackCommand(int this, int a2, int a3, int a4)
{
  int v5; // esi
  int v6; // ecx
  bool v7; // zf
  int v8; // ecx
  int v9; // ecx
  int v11; // [esp+10h] [ebp-4h] BYREF

  v5 = InkFeedbackServer::PreProcessInkFeedbackCommand_NoLock(a2, a3, a4);
  if ( v5 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this, 0);
    v7 = *(_BYTE *)(this + 4) == 0;
    v11 = this;
    if ( v7 )
    {
      v5 = -1073741823;
      if ( (unsigned int)CallbackContext > 2 && _tlgKeywordOn(&CallbackContext, 0LL) )
      {
        a4 = (int)"Ink processor not enabled";
        a3 = -1073741823;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          v8,
          byte_25690B,
          v8,
          v8,
          (int)&a3,
          (const char **)&a4);
      }
    }
    else
    {
      v5 = InkFeedbackServer::RunForAllProviders(
             (_DWORD *)(this + 48),
             a2,
             a3,
             (const char *)a4,
             (int (__stdcall *)(_DWORD *, int, int, const char *))lambda_fb589dbdef1d57d619e31801b5f3e8ae_::_lambda_invoker_stdcall_);
      if ( v5 < 0 && (unsigned int)CallbackContext > 2 && _tlgKeywordOn(&CallbackContext, 0LL) )
      {
        a4 = v5;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (int)&CallbackContext,
          byte_2558E4,
          v9,
          v9,
          (int)&a4);
      }
    }
    Ex::PushLock::SyncLockExclusive::~SyncLockExclusive((Ex::PushLock::SyncLockExclusive *)&v11);
  }
  else if ( (unsigned int)CallbackContext > 2 && _tlgKeywordOn(&CallbackContext, 0LL) )
  {
    a4 = v5;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      byte_2558E4,
      v6,
      v6,
      (int)&a4);
  }
  return v5;
}
