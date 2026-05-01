/*
 * XREFs of ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18034DCA4
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x18035F500 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x1803600C0 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180061510 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180061618 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1a95d3552be03f68d729c728809b4115___ @ 0x1800B0080 (Windows--Internal--ComTaskPool--QueueTask__lambda_1a95d3552be03f68d729c728809b4115___.c)
 *     _lambda_1a95d3552be03f68d729c728809b4115_::_lambda_1a95d3552be03f68d729c728809b4115_ @ 0x1800B081C (_lambda_1a95d3552be03f68d729c728809b4115_--_lambda_1a95d3552be03f68d729c728809b4115_.c)
 *     _lambda_1a95d3552be03f68d729c728809b4115_::__lambda_1a95d3552be03f68d729c728809b4115_ @ 0x1800B0A4C (_lambda_1a95d3552be03f68d729c728809b4115_--__lambda_1a95d3552be03f68d729c728809b4115_.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x180207874 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x180344244 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803467C8 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflecto_ea_1803467C8.c)
 *     ??1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803475F0 (--1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1803507D8 (-StartActivity@OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QE.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedShow(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        _OWORD *a4)
{
  __int64 *v8; // rax
  int v9; // eax
  int v10; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  HKEY v16; // rcx
  char v17; // al
  int v18; // eax
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v24[40]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v25[368]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+248h]

  v20 = a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    (__int64)"OnInputAppRequestedShowActivity_Queued");
  v24[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)v24,
    a2);
  if ( a2 == *(_DWORD *)(a1 + 716) )
    *(_DWORD *)(a1 + 720) = 1;
  *(_QWORD *)v21 = 0LL;
  v22 = (__int64 *)v21;
  v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v22);
  v9 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>(a1, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 616LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v11);
    goto LABEL_12;
  }
  v23 = a1;
  v13 = lambda_1a95d3552be03f68d729c728809b4115_::_lambda_1a95d3552be03f68d729c728809b4115_(
          (__int64)v25,
          &v20,
          a3,
          a4,
          (__int64 *)v21,
          &v23);
  v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_1a95d3552be03f68d729c728809b4115___(
          v15,
          v14,
          *(_DWORD *)(a1 + 812),
          v13);
  lambda_1a95d3552be03f68d729c728809b4115_::__lambda_1a95d3552be03f68d729c728809b4115_((__int64)v25);
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v12 = 667LL;
    goto LABEL_7;
  }
  v17 = *(_BYTE *)(a1 + 816);
  *(_BYTE *)(a1 + 816) = 1;
  if ( !v17 )
  {
    v18 = SHRegSetBOOL(v16, L"Software\\Microsoft\\Input", L"IsInputAppPreloadEnabled", 1);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2A2,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v18);
  }
  v10 = 0;
LABEL_12:
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)v21);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::~OnInputAppRequestedShowActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)v24);
  return (unsigned int)v10;
}
