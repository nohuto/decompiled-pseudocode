/*
 * XREFs of ?Invoke@?$GitInvokeHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@$01@Details@Internal@Windows@@UEAAJPEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@4@PEAUIVectorChangedEventArgs@674@@Z @ 0x18017EC40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Localize@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017F0D8 (-Localize@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Internal::GitPtr,2>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = a1 + 48;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v6 = Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Localize(
         v5,
         &GUID_2768fda5_53f3_5aa9_bedd_2f3df0989fb7,
         &v8);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, a2, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return (unsigned int)v6;
}
