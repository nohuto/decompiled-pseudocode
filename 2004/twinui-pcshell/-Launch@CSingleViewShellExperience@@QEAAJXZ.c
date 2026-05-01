/*
 * XREFs of ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180081F28
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180013C10 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x1800A7D70 (-Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C2CEC (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Prelaunch@CStartExperienceManager@@UEAAJE@Z @ 0x1801D4D40 (-Prelaunch@CStartExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18000EC00 (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18000EF14 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180011C60 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180011D38 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_180011D38.c)
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180012B18 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     _lambda_d14133faddb8c28b80f2f473bceb745b_::__lambda_d14133faddb8c28b80f2f473bceb745b_ @ 0x1800148D4 (_lambda_d14133faddb8c28b80f2f473bceb745b_--__lambda_d14133faddb8c28b80f2f473bceb745b_.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020628 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z @ 0x1800820E8 (-StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d14133faddb8c28b80f2f473bceb745b___ @ 0x18008218C (Windows--Internal--ComTaskPool--QueueTask__lambda_d14133faddb8c28b80f2f473bceb745b___.c)
 *     _lambda_d14133faddb8c28b80f2f473bceb745b_::_lambda_d14133faddb8c28b80f2f473bceb745b_ @ 0x1800822A8 (_lambda_d14133faddb8c28b80f2f473bceb745b_--_lambda_d14133faddb8c28b80f2f473bceb745b_.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18008E588 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E5F0 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::Launch(CSingleViewShellExperience *this)
{
  __int64 v2; // rdx
  ExperienceManagerUtils *v3; // rcx
  void *v4; // r14
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v6; // rbx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edi
  HSTRING v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  HSTRING v17; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h]
  int v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21[44]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+218h]

  v2 = 4LL;
  if ( dword_1805CE714 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805CE714);
    if ( dword_1805CE714 == -1 )
    {
      dword_1805CE718 = SHTaskPoolGetUniqueContext();
      Init_thread_footer(&dword_1805CE714);
    }
  }
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( v3 )
    v4 = (void *)ExperienceManagerUtils::WindowFromViewWrapper(
                   v3,
                   (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v2);
  else
    v4 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v6 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v20,
    (__int64)"Launch");
  *(_QWORD *)v20 = &SingleViewExperienceTelemetry::Launch::`vftable';
  SingleViewExperienceTelemetry::Launch::StartActivity(
    (SingleViewExperienceTelemetry::Launch *)v20,
    v6,
    StringRawBuffer,
    v4);
  v17 = *(HSTRING *)this;
  string = 0LL;
  v7 = Microsoft::WRL::Wrappers::HString::Set(&string, &v17);
  v10 = v7;
  v19 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x113,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    CSingleViewShellExperience::BoostPriority((__int64)this, 0LL, v8, v9);
    v11 = (HSTRING)*((_QWORD *)this + 12);
    v17 = v11;
    if ( v11 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = lambda_d14133faddb8c28b80f2f473bceb745b_::_lambda_d14133faddb8c28b80f2f473bceb745b_(
            v21,
            &v17,
            this,
            &string,
            v20);
    v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_d14133faddb8c28b80f2f473bceb745b___(v14, v13, v15, v12);
    lambda_d14133faddb8c28b80f2f473bceb745b_::__lambda_d14133faddb8c28b80f2f473bceb745b_(v21);
    if ( v10 < 0 )
    {
      CSingleViewShellExperience::UnboostPriority((__int64)this, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14B,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v10);
    }
    if ( v11 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16LL))(v11);
  }
  WindowsDeleteString(string);
  string = 0LL;
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)v20);
  return (unsigned int)v10;
}
