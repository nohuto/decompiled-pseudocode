/*
 * XREFs of ??0CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x18035C4A4
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18035C17C (--$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x1801224B0 (--0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@WRL@Microsoft@@QEAA@XZ @ 0x18035C364 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIM.c)
 */

CMultitaskingViewServiceProvider *__fastcall CMultitaskingViewServiceProvider::CMultitaskingViewServiceProvider(
        CMultitaskingViewServiceProvider *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>((__int64)this);
  CObjectWithThreadUseDetection::CObjectWithThreadUseDetection((__int64)this + 112, 0);
  *(_QWORD *)this = &CMultitaskingViewServiceProvider::`vftable';
  *((_QWORD *)this + 3) = &CMultitaskingViewServiceProvider::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 4) = &CMultitaskingViewServiceProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 11) = &CMultitaskingViewServiceProvider::`vftable'{for `IMultitaskingViewServiceProvider'};
  *((_QWORD *)this + 12) = &CMultitaskingViewServiceProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewTaskScheduler>'};
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = SHTaskPoolGetUniqueContext();
  return this;
}
