/*
 * XREFs of ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x18007500C
 * Callers:
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18004654C (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x1800750D0 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180087F58 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$AsAgile@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAVAgileRef@01@@Z @ 0x180088BEC (--$AsAgile@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@YAJPEAU-$IEve.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___ @ 0x1800EEE3C (Microsoft--WRL--Callback_Windows--Foundation--IEventHandler_IInspectable_____lambda_f55151fab6cd.c)
 *     _lambda_f55151fab6cde82124031f7726ac4810_::__lambda_f55151fab6cde82124031f7726ac4810_ @ 0x1800EF2E0 (_lambda_f55151fab6cde82124031f7726ac4810_--__lambda_f55151fab6cde82124031f7726ac4810_.c)
 */

__int64 __fastcall CSingleViewShellExperience::EnsureUnboostCallback(CSingleViewShellExperience *this)
{
  char *v1; // rdi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rax
  int v9; // eax
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  CSingleViewShellExperience *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  char *v14; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char *)this + 152;
  if ( *((_QWORD *)this + 19) )
    return 0LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    v10,
    (char *)this + 96);
  v11 = this;
  Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___(
    &v13,
    v10);
  lambda_f55151fab6cde82124031f7726ac4810_::__lambda_f55151fab6cde82124031f7726ac4810_(v10);
  v4 = v13;
  if ( v13 )
  {
    v14 = v1;
    v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v14);
    v9 = Microsoft::WRL::AsAgile<Windows::Foundation::IEventHandler<IInspectable *>>(v4, v8);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v5 = 0;
      goto LABEL_9;
    }
    v7 = (unsigned int)v9;
    v6 = 1115LL;
  }
  else
  {
    v5 = -2147024882;
    v6 = 1114LL;
    v7 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)v7);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v5;
}
