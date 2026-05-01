/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180249AC4
 * Callers:
 *     ?add_NodeEvent@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x180255B80 (-add_NodeEvent@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAU-$ITypedEventHandler@PEAU.c)
 * Callees:
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x18004A94C (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::ComposableShell::ITreeNode___Windows::Internal::ComposableShell::ITreeNodeEventArgs___::_)(Windows::Internal::ComposableShell::ITreeNode___Windows::Internal::ComposableShell::ITreeNodeEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::ITreeNode___Windows::Internal::ComposableShell::ITreeNodeEventArgs____Microsoft::WRL::FtmBase___lambda_f9f9ef486d34c6d59cf8ac8308ad2160___1_Windows::Internal::ComposableShell::ITreeNode___Windows::Internal::ComposableShell::ITreeNodeEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::ITreeNode___Windows::Internal::ComposableShell::ITreeNodeEventArgs____Microsoft::WRL::FtmBase___lambda_f9f9ef486d34c6d59cf8ac8308ad2160___1_Windows::Internal::ComposableShell::ITreeNode___Windows::Internal::ComposableShell::ITreeNodeEventArgs___ @ 0x18024BF04 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18024BF04.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::ITreeNode *,Windows::Internal::ComposableShell::ITreeNodeEventArgs *>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  int AgileReference; // ebx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  void *v10; // rax
  __int64 *v12; // [rsp+50h] [rbp+30h] BYREF
  __int64 *v13; // [rsp+58h] [rbp+38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+40h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v13 = (__int64 *)&v12;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v13);
  AgileReference = 0;
  v6 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_0e9a68fe_83c5_547b_a1c5_5bce912c3e4d, a1, v6);
  }
  else
  {
    v7 = (__int64 *)*v4;
    v14 = 0LL;
    *v6 = 0LL;
    v13 = v7;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  if ( AgileReference >= 0 )
  {
    v8 = v12;
    v12 = 0LL;
    v9 = 0LL;
    v13 = v8;
    v10 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
      v9 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::ComposableShell::ITreeNode___Windows::Internal::ComposableShell::ITreeNodeEventArgs___::___Windows::Internal::ComposableShell::ITreeNode___Windows::Internal::ComposableShell::ITreeNodeEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::ITreeNode___Windows::Internal::ComposableShell::ITreeNodeEventArgs____Microsoft::WRL::FtmBase___lambda_f9f9ef486d34c6d59cf8ac8308ad2160___1_Windows::Internal::ComposableShell::ITreeNode___Windows::Internal::ComposableShell::ITreeNodeEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::ITreeNode___Windows::Internal::ComposableShell::ITreeNodeEventArgs____Microsoft::WRL::FtmBase___lambda_f9f9ef486d34c6d59cf8ac8308ad2160___1_Windows::Internal::ComposableShell::ITreeNode___Windows::Internal::ComposableShell::ITreeNodeEventArgs___(
             v10,
             &v13);
    v14 = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    if ( v9 )
    {
      v14 = 0LL;
      *a2 = v9;
      AgileReference = 0;
    }
    else
    {
      AgileReference = -2147024882;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return (unsigned int)AgileReference;
}
