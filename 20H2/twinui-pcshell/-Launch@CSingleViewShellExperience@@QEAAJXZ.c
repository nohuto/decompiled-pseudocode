/*
 * XREFs of ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800816FC
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800449C4 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x1800A98C0 (-Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C285C (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Prelaunch@CStartExperienceManager@@UEAAJE@Z @ 0x1801D4660 (-Prelaunch@CStartExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x1800162D4 (--0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180016310 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800189F8 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800459F0 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180045DE8 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_180045DE8.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180046354 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18004654C (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180081964 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z @ 0x180081990 (-StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180087F58 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18008E0E8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E150 (_Init_thread_header.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_65bd7f122925cc900a11f0d0a2dc2897___ @ 0x1800EEFC0 (Windows--Internal--ComTaskPool--QueueTask__lambda_65bd7f122925cc900a11f0d0a2dc2897___.c)
 *     _lambda_65bd7f122925cc900a11f0d0a2dc2897_::__lambda_65bd7f122925cc900a11f0d0a2dc2897_ @ 0x1800EF2A4 (_lambda_65bd7f122925cc900a11f0d0a2dc2897_--__lambda_65bd7f122925cc900a11f0d0a2dc2897_.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
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
  int v8; // edi
  HSTRING v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  HSTRING v14; // [rsp+28h] [rbp-E0h] BYREF
  HSTRING string; // [rsp+30h] [rbp-D8h] BYREF
  int v16; // [rsp+38h] [rbp-D0h]
  _QWORD v17[2]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v18[16]; // [rsp+58h] [rbp-B0h] BYREF
  void **v19; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v20[40]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v2 = 4LL;
  if ( dword_1805CD714 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805CD714);
    if ( dword_1805CD714 == -1 )
    {
      dword_1805CD718 = SHTaskPoolGetUniqueContext();
      Init_thread_footer(&dword_1805CD714);
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
  v20[0] = &SingleViewExperienceTelemetry::Launch::`vftable';
  SingleViewExperienceTelemetry::Launch::StartActivity(
    (SingleViewExperienceTelemetry::Launch *)v20,
    v6,
    StringRawBuffer,
    v4);
  v14 = *(HSTRING *)this;
  string = 0LL;
  v7 = Microsoft::WRL::Wrappers::HString::Set(&string, &v14);
  v8 = v7;
  v16 = v7;
  if ( v7 >= 0 )
  {
    CSingleViewShellExperience::BoostPriority((__int64)this, 0);
    v9 = (HSTRING)*((_QWORD *)this + 12);
    v14 = v9;
    if ( v9 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 8LL))(v9);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v17, &v14);
    v17[1] = this;
    ExperienceManagerUtils::CopyableHString::CopyableHString(
      (ExperienceManagerUtils::CopyableHString *)v18,
      (const struct ExperienceManagerUtils::CopyableHString *)&string);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)&v19,
      v20);
    v19 = &SingleViewExperienceTelemetry::Launch::`vftable';
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_65bd7f122925cc900a11f0d0a2dc2897___(v11, v10, v12, v17, v14);
    lambda_65bd7f122925cc900a11f0d0a2dc2897_::__lambda_65bd7f122925cc900a11f0d0a2dc2897_((Microsoft::WRL::WeakRef *)v17);
    if ( v8 < 0 )
    {
      CSingleViewShellExperience::UnboostPriority((__int64)this, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v8);
    }
    if ( v9 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
  }
  WindowsDeleteString(string);
  string = 0LL;
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)v20);
  return (unsigned int)v8;
}
