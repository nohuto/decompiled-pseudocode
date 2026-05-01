/*
 * XREFs of ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x18019CDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?GetCloudDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800950F0 (-GetCloudDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@wil@@QEAA_NXZ @ 0x180095824 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136EC0 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180147BD8 (--B-$ComPtrRef@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUI.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18019C328 (--0-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@Q.c)
 *     ??1CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x18019C814 (--1CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x18019C9EC (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x18019CD94 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019DB74 (-GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019DD30 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019DE58 (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019E238 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18019E6F0 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x18019FC00 (-StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18019FD28 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801A0268 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801A03C8 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyTaskbarLayout(__int64 a1, int a2, int *a3, int *a4)
{
  wil::details::in1diag3 *v8; // rcx
  __int64 *v9; // rax
  TaskbarLayoutPolicyManager *v10; // rcx
  int DefaultLayoutXML; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  int CanApplyGroupPolicyLayout; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 *v17; // rax
  TaskbarLayoutPolicyManager *v18; // rcx
  __int64 *v19; // rax
  TaskbarLayoutPolicyManager *v20; // rcx
  __int64 *v21; // rax
  __int64 *v22; // rax
  TaskbarLayoutPolicyManager *v23; // rcx
  int v24; // eax
  __int64 v25; // rdi
  struct IXMLDOMDocument2 *v26; // rbx
  struct IXMLDOMNode *v28; // [rsp+20h] [rbp-E0h] BYREF
  struct IXMLDOMDocument2 *v29; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h]
  _QWORD v32[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v32,
    (__int64)"CanApplyTaskbarLayout");
  v32[0] = &TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::`vftable';
  TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::StartActivity((TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *)v32);
  *a3 = 0;
  *a4 = 0;
  v29 = 0LL;
  if ( !a2 )
  {
    v28 = (struct IXMLDOMNode *)&v29;
    v22 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *((__int64 **)&v28);
    DefaultLayoutXML = TaskbarLayoutPolicyManager::GetDefaultLayoutXML(v23, (struct IXMLDOMDocument2 **)v22);
    v8 = retaddr;
    if ( DefaultLayoutXML < 0 )
    {
      v12 = 133LL;
      goto LABEL_20;
    }
    goto LABEL_21;
  }
  if ( a2 == 1 )
  {
    v28 = (struct IXMLDOMNode *)&v29;
    v21 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *((__int64 **)&v28);
    DefaultLayoutXML = TaskbarLayoutPolicyManager::GetOEMLayoutXML(
                         (TaskbarLayoutPolicyManager *)a1,
                         (struct IXMLDOMDocument2 **)v21);
    v8 = retaddr;
    if ( DefaultLayoutXML < 0 )
    {
      v12 = 136LL;
      goto LABEL_20;
    }
    goto LABEL_21;
  }
  if ( a2 != 2 )
  {
    if ( a2 != 3 )
      goto LABEL_38;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::GetImpl'::`2'::impl) )
    {
      v28 = (struct IXMLDOMNode *)&v29;
      v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *((__int64 **)&v28);
      DefaultLayoutXML = TaskbarLayoutPolicyManager::GetCloudDefaultLayoutXML(v10, (struct IXMLDOMDocument2 **)v9);
      v8 = retaddr;
      if ( DefaultLayoutXML < 0 )
      {
        v12 = 159LL;
LABEL_20:
        wil::details::in1diag3::_Log_Hr(
          v8,
          (void *)v12,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)DefaultLayoutXML);
        goto LABEL_21;
      }
    }
    goto LABEL_21;
  }
  if ( !(unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
  {
    v28 = (struct IXMLDOMNode *)&v29;
    if ( (unsigned int)TaskbarLayoutPolicyManager::CanApplyMDMLayout((TaskbarLayoutPolicyManager *)a1, v13) )
    {
      v17 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *((__int64 **)&v28);
      DefaultLayoutXML = TaskbarLayoutPolicyManager::GetMDMLayoutXML(v18, (struct IXMLDOMDocument2 **)v17);
      v8 = retaddr;
      if ( DefaultLayoutXML < 0 )
      {
        v12 = 148LL;
        goto LABEL_20;
      }
    }
    else
    {
      v19 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *((__int64 **)&v28);
      DefaultLayoutXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v20, (struct IXMLDOMDocument2 **)v19);
      v8 = retaddr;
      if ( DefaultLayoutXML < 0 )
      {
        v12 = 153LL;
        goto LABEL_20;
      }
    }
LABEL_21:
    if ( v29 )
    {
      v24 = a2
          ? TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v8, v29)
          : TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML(v8, v29);
      if ( v24 >= 0 )
      {
        v30 = *(_OWORD *)(a1 + 104);
        v31 = *(_QWORD *)(a1 + 120);
        CanApplyGroupPolicyLayout = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))v29->lpVtbl->setProperty)(
                                      v29,
                                      *(_QWORD *)(a1 + 128),
                                      &v30);
        v15 = CanApplyGroupPolicyLayout;
        if ( CanApplyGroupPolicyLayout < 0 )
        {
          v16 = 174LL;
          goto LABEL_28;
        }
        if ( a2 )
          v25 = *(_QWORD *)(a1 + 144);
        else
          v25 = *(_QWORD *)(a1 + 136);
        v28 = 0LL;
        v26 = v29;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
        if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, __int64, struct IXMLDOMNode **))v26->lpVtbl->selectSingleNode)(
               v26,
               v25,
               &v28) >= 0
          && v28 )
        {
          if ( a2 == 2 )
            *a4 = TaskbarLayoutPolicyManager::IsOverrideLayout((TaskbarLayoutPolicyManager *)a1, v28);
          *a3 = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
      }
    }
LABEL_38:
    wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v32);
    v15 = 0;
    goto LABEL_39;
  }
  CanApplyGroupPolicyLayout = TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(
                                (TaskbarLayoutPolicyManager *)a1,
                                a3,
                                a4);
  v15 = CanApplyGroupPolicyLayout;
  if ( CanApplyGroupPolicyLayout >= 0 )
    goto LABEL_38;
  v16 = 141LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)CanApplyGroupPolicyLayout);
LABEL_39:
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v29);
  TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::~CanApplyTaskbarLayout((TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *)v32);
  return v15;
}
