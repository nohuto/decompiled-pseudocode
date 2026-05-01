/*
 * XREFs of _lambda_5096affdfa8dd9dd59ff190700218634_::operator() @ 0x1800B130C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5096affdfa8dd9dd59ff190700218634___::Run @ 0x1800B3D00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5096affdfa8dd9dd59ff190700218634___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003A3E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18005D578 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x180061F78 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800885EC (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18009509C (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B3C34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AEAVCExperienceManagerAnimationHelper@@_N@Z @ 0x180347DD0 (-AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AE.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180348E1C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x180348FB8 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x18034B914 (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z @ 0x18034C33C (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180350C58 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180353B00 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?UnboostPriority@KBViewInfo@@QEAAXXZ @ 0x180353B98 (-UnboostPriority@KBViewInfo@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_5096affdfa8dd9dd59ff190700218634_::operator()(unsigned int *a1)
{
  unsigned int *v2; // r15
  int v3; // eax
  unsigned int v4; // ebx
  int ViewInfo; // eax
  __int64 v6; // rdx
  KBViewInfo *v7; // r14
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  TouchKeyboardExperienceManager *v15; // rcx
  std::_Ref_count_base *v17[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v18[128]; // [rsp+40h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v20; // [rsp+D0h] [rbp+67h] BYREF
  struct IInspectable *v21; // [rsp+D8h] [rbp+6Fh] BYREF
  HWND v22; // [rsp+E0h] [rbp+77h] BYREF

  v2 = a1 + 6;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 6),
    (wil::ActivityThreadWatcher *)v18);
  v21 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 2), &v21);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( !v21 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v2,
      0LL);
    v4 = 0;
    goto LABEL_38;
  }
  *(_OWORD *)v17 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*((_QWORD *)a1 + 2), *a1, v17);
  v4 = ViewInfo;
  if ( ViewInfo >= 0 )
  {
    v7 = v17[0];
    if ( *((_DWORD *)v17[0] + 35) == 1 && (unsigned __int8)anonymous_namespace_::IsAnimationEnabled() )
    {
      v20 = 0LL;
      v8 = *((_QWORD *)v7 + 1);
      v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      v10 = v9(v8, &v20);
      v4 = v10;
      if ( v10 < 0 )
      {
        v11 = 712LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        goto LABEL_36;
      }
      v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v20 + 24LL))(v20, &v22);
      v4 = v10;
      if ( v10 < 0 )
      {
        v11 = 714LL;
        goto LABEL_17;
      }
      v10 = TouchKeyboardExperienceManager::AnimateWindow(
              *((TouchKeyboardExperienceManager **)a1 + 2),
              *((struct IApplicationFrameWrapper **)v7 + 1),
              v22,
              (struct CExperienceManagerAnimationHelper *)(*((_QWORD *)a1 + 2) + 760LL),
              0);
      v4 = v10;
      if ( v10 < 0 )
      {
        v11 = 715LL;
        goto LABEL_17;
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 1) + 40LL))(*((_QWORD *)v7 + 1), 1LL);
      v4 = v10;
      if ( v10 < 0 )
      {
        v11 = 716LL;
        goto LABEL_17;
      }
      *((_BYTE *)v7 + 34) = 1;
      v12 = CExperienceManagerAnimationHelper::End((CExperienceManagerAnimationHelper *)(*((_QWORD *)a1 + 2) + 760LL));
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2D0,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    }
    else
    {
      ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 1) + 40LL))(*((_QWORD *)v7 + 1), 1LL);
      v4 = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v6 = 724LL;
        goto LABEL_32;
      }
      *((_BYTE *)v7 + 34) = 1;
    }
    v15 = (TouchKeyboardExperienceManager *)*((_QWORD *)a1 + 2);
    if ( *((_DWORD *)v15 + 181) != 2 && *((_DWORD *)v15 + 180) == 2 )
      TouchKeyboardExperienceManager::FireInputPaneHidingEvent(v15, *a1);
    *(_OWORD *)((char *)v7 + 120) = 0LL;
    if ( *((_BYTE *)a1 + 4)
      && (LOBYTE(v14) = 3,
          LOBYTE(v13) = 1,
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
            v13,
            v14),
          ViewInfo = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
                       *((TouchKeyboardExperienceManager **)a1 + 2),
                       *(_DWORD *)(*((_QWORD *)a1 + 2) + 716LL),
                       0,
                       1),
          v4 = ViewInfo,
          ViewInfo < 0) )
    {
      v6 = 746LL;
    }
    else
    {
      ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v7 + 392LL))(*(_QWORD *)v7, 3LL);
      v4 = ViewInfo;
      if ( ViewInfo >= 0 )
      {
        if ( *((_BYTE *)v7 + 138) )
        {
          SingleViewLightDismissHelper::UnregisterWithLightDismiss((SingleViewLightDismissHelper *)(*((_QWORD *)a1 + 2)
                                                                                                  + 696LL));
          *(_DWORD *)(*((_QWORD *)a1 + 2) + 712LL) = -1;
        }
        KBViewInfo::UnboostPriority(v7);
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
          v2,
          0LL);
        v4 = 0;
        goto LABEL_36;
      }
      v6 = 754LL;
    }
    goto LABEL_32;
  }
  v6 = 707LL;
LABEL_32:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)ViewInfo);
LABEL_36:
  if ( v17[1] )
    std::_Ref_count_base::_Decref(v17[1]);
LABEL_38:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v18);
  return v4;
}
