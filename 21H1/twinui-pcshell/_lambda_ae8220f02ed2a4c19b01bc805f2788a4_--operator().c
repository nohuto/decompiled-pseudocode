/*
 * XREFs of _lambda_ae8220f02ed2a4c19b01bc805f2788a4_::operator() @ 0x1800A1D34
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ae8220f02ed2a4c19b01bc805f2788a4___::Run @ 0x1800A46A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ae8220f02ed2a4c19b01bc805f2788a4___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180012EDC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800937A8 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A42F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18016528C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x180327C4C (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180327DDC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 *     ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x18032AA5C (-IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z.c)
 *     ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x18032AFE8 (-MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAU.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z @ 0x18032B29C (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x18032B96C (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18032FC40 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180332EB0 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_ae8220f02ed2a4c19b01bc805f2788a4_::operator()(_QWORD *a1)
{
  _QWORD *v2; // r14
  int v3; // eax
  TouchKeyboardExperienceManager *v4; // rcx
  int FrameWrapper; // edi
  struct IApplicationFrameWrapper *v6; // rbx
  int ViewInfo; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  std::_Ref_count_base *v13[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v14[80]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IApplicationFrameWrapper *v16; // [rsp+B0h] [rbp+30h] BYREF
  struct IInspectable *v17; // [rsp+B8h] [rbp+38h] BYREF

  v2 = a1 + 4;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 4),
    (wil::ActivityThreadWatcher *)v14);
  v17 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 2), &v17);
  v4 = retaddr;
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7CF,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( v17 )
  {
    if ( !TouchKeyboardExperienceManager::IsFrameReady(v4, (struct IApplicationFrame *)*a1) )
      goto LABEL_6;
    v16 = 0LL;
    FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper(a1[3], *a1, &v16);
    if ( FrameWrapper < 0 )
    {
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      goto LABEL_27;
    }
    *(_OWORD *)v13 = 0LL;
    v6 = v16;
    ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(a1[3], v16, v13);
    FrameWrapper = ViewInfo;
    if ( ViewInfo < 0 )
    {
      v8 = 2017LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ViewInfo);
      goto LABEL_24;
    }
    v9 = (_QWORD *)a1[1];
    if ( *v9 == ApplicationFrameCloseCommand && v9[1] == 0x575B26E93947F081LL )
    {
      ViewInfo = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v6 + 40LL))(v6, 1LL);
      FrameWrapper = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v8 = 2022LL;
        goto LABEL_22;
      }
      *((_BYTE *)v13[0] + 34) = 1;
      LOBYTE(v11) = 3;
      LOBYTE(v10) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
        v10,
        v11);
      ViewInfo = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
                   (TouchKeyboardExperienceManager *)a1[3],
                   *(_DWORD *)(a1[3] + 716LL),
                   0,
                   1);
      FrameWrapper = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v8 = 2026LL;
        goto LABEL_22;
      }
    }
    else if ( *v9 == ApplicationFrameExitedSizeMoveCommand && v9[1] == 0x789E03E893229A8ALL )
    {
      ViewInfo = TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
                   (struct IApplicationFrame *)*a1,
                   v6,
                   *((_BYTE *)v13[0] + 139));
      FrameWrapper = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v8 = 2035LL;
        goto LABEL_22;
      }
      ViewInfo = TouchKeyboardExperienceManager::NotifyPositionAndSizeUpdateCompleted(
                   (TouchKeyboardExperienceManager *)a1[3],
                   (struct IApplicationFrame *)*a1);
      FrameWrapper = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v8 = 2036LL;
        goto LABEL_22;
      }
    }
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v2,
      0LL);
    FrameWrapper = 0;
LABEL_24:
    if ( v13[1] )
      std::_Ref_count_base::_Decref(v13[1]);
    goto LABEL_26;
  }
  TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
LABEL_6:
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v2,
    0LL);
  FrameWrapper = 0;
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v14);
  return (unsigned int)FrameWrapper;
}
