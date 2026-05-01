/*
 * XREFs of _lambda_d14133faddb8c28b80f2f473bceb745b_::operator() @ 0x180084A30
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d14133faddb8c28b80f2f473bceb745b___::Run @ 0x180084A20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d14133faddb8c28b80f2f473bceb745b___--Run.c)
 * Callees:
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x180012EB0 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180012F18 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180027B58 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007EFD4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x180084B30 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d14133faddb8c28b80f2f473bceb745b_::operator()(Microsoft::WRL::WeakRef *this)
{
  int v2; // ebx
  const unsigned __int16 *StringRawBuffer; // rax
  const unsigned __int16 *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rcx
  _BYTE v8[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v9[24]; // [rsp+40h] [rbp-38h] BYREF
  int v10; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IInspectable *v12; // [rsp+80h] [rbp+8h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (Microsoft::WRL::WeakRef *)((char *)this + 32),
    (wil::ActivityThreadWatcher *)v8);
  v2 = *((_DWORD *)this + 6);
  if ( v2 >= 0 )
  {
    ExperienceManagerUtils::AsStrong<IInspectable>(&v12, this);
    if ( v12 )
    {
      v2 = -2144927148;
      StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
      v4 = StringRawBuffer;
      v5 = *((_QWORD *)this + 1);
      if ( !*(_QWORD *)(v5 + 168)
        || (v2 = CSingleViewShellExperience::LaunchCore(
                   (CSingleViewShellExperience *)v5,
                   (const struct Microsoft::WRL::Wrappers::HString *)(v5 + 168),
                   StringRawBuffer),
            v2 < 0) )
      {
        v6 = *((_QWORD *)this + 1);
        if ( *(_QWORD *)(v6 + 184) )
          v2 = CSingleViewShellExperience::LaunchCore(
                 (CSingleViewShellExperience *)v6,
                 (const struct Microsoft::WRL::Wrappers::HString *)(v6 + 184),
                 v4);
        if ( v2 < 0 )
          v2 = CSingleViewShellExperience::LaunchCore(
                 *((CSingleViewShellExperience **)this + 1),
                 (const struct Microsoft::WRL::Wrappers::HString *)(*((_QWORD *)this + 1) + 8LL),
                 v4);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 88LL) + 104LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 88LL),
        *((_QWORD *)this + 1),
        (unsigned int)v2);
      if ( v2 < 0 )
        goto LABEL_11;
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)this + 32);
    }
    v2 = 0;
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11F,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v2);
LABEL_12:
  if ( v10 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v9);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v8);
  return (unsigned int)v2;
}
