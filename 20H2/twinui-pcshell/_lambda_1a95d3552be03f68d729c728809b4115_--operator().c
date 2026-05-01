/*
 * XREFs of _lambda_1a95d3552be03f68d729c728809b4115_::operator() @ 0x1800B0CB4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a95d3552be03f68d729c728809b4115___::Run @ 0x1800B3CD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a95d3552be03f68d729c728809b4115___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003A3E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800885EC (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18009509C (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?BoostPriority@KBViewInfo@@QEAAXXZ @ 0x180347FCC (-BoostPriority@KBViewInfo@@QEAAXXZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180348E1C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x18034FC64 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18034FF98 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180350C58 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180353B00 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJIW4ViewEffectKind@@@Z @ 0x180354228 (-UpdateBorder@TouchKeyboardExperienceManager@@AEAAJIW4ViewEffectKind@@@Z.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180476638 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_1a95d3552be03f68d729c728809b4115_::operator()(unsigned int *a1)
{
  unsigned int *v2; // r15
  int v3; // eax
  unsigned int v4; // ebx
  int ViewInfo; // eax
  KBViewInfo *v6; // r14
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, struct IApplicationFrame **); // rbx
  int v9; // eax
  TouchKeyboardExperienceManager *v10; // rcx
  __int64 v11; // rdx
  int updated; // eax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  std::_Ref_count_base *v17[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v18[80]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IApplicationFrame *v20; // [rsp+B0h] [rbp+30h] BYREF
  struct IInspectable *v21; // [rsp+B8h] [rbp+38h] BYREF

  v2 = a1 + 14;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 14),
    (wil::ActivityThreadWatcher *)v18);
  v21 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 10), &v21);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x26F,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( !v21 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v2,
      0LL);
    v4 = 0;
    goto LABEL_30;
  }
  *(_OWORD *)v17 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*((_QWORD *)a1 + 6), *a1, v17);
  v4 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x279,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_28;
  }
  v6 = v17[0];
  *(_OWORD *)((char *)v17[0] + 136) = *(_OWORD *)(a1 + 5);
  v20 = 0LL;
  v7 = *((_QWORD *)v6 + 1);
  v8 = *(__int64 (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v7 + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  v9 = v8(v7, &v20);
  v4 = v9;
  if ( v9 >= 0 )
  {
    v9 = TouchKeyboardExperienceManager::SetHostedPos(
           v10,
           *((struct IApplicationFrameWrapper **)v6 + 1),
           v20,
           (const struct tagRECT *)(a1 + 1));
    v4 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v6 + 2) + 32LL))(*((_QWORD *)v6 + 2), 0LL);
      v4 = v9;
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 2) + 80LL))(*((_QWORD *)v6 + 2));
        v4 = v9;
        if ( v9 >= 0 )
        {
          updated = TouchKeyboardExperienceManager::UpdateBorder(*((_QWORD *)a1 + 6), *a1, a1[7]);
          if ( updated < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x282,
              (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)updated);
          *(_OWORD *)((char *)v6 + 120) = *(_OWORD *)(a1 + 1);
          v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v6 + 392LL))(*(_QWORD *)v6, 4LL);
          v4 = v9;
          if ( v9 >= 0 )
          {
            KBViewInfo::BoostPriority(v6);
            v13 = TouchKeyboardExperienceManager::ShowView(*((TouchKeyboardExperienceManager **)a1 + 6), v6);
            v14 = v13;
            if ( v13 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x28E,
                (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                (const char *)(unsigned int)v13);
            if ( *((_BYTE *)a1 + 22) )
            {
              v15 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
                      *((_QWORD *)a1 + 6) + 696LL,
                      1026LL,
                      (*((_QWORD *)a1 + 6) + 168LL) & -(__int64)(*((_QWORD *)a1 + 6) != 0LL),
                      *(_QWORD *)v6);
              if ( v15 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x293,
                  (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  (const char *)(unsigned int)v15);
              *(_DWORD *)(*((_QWORD *)a1 + 6) + 712LL) = *a1;
            }
            wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
              v2,
              v14);
            v4 = 0;
            goto LABEL_27;
          }
          v11 = 646LL;
        }
        else
        {
          v11 = 640LL;
        }
      }
      else
      {
        v11 = 639LL;
      }
    }
    else
    {
      v11 = 638LL;
    }
  }
  else
  {
    v11 = 637LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
LABEL_28:
  if ( v17[1] )
    std::_Ref_count_base::_Decref(v17[1]);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v18);
  return v4;
}
