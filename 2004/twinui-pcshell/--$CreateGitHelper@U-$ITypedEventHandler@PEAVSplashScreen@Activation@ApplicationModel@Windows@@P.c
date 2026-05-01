/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x18018B50C
 * Callers:
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18018BE60 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x180181220 (-Revoke@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ.c)
 *     ??0?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x18018B78C (--0-$GitInvokeHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr>(
        __int64 a1,
        _QWORD *a2)
{
  void *v4; // rax
  void *v5; // rbx
  _DWORD *v6; // rdi
  int v7; // ebx

  *a2 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
  {
    memset_0(v4, 0, 0x40uLL);
    v6 = (_DWORD *)Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr,2>::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr,2>(v5);
  }
  if ( !v6 )
  {
    v7 = -2147024882;
    goto LABEL_11;
  }
  v7 = Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke((__int64)(v6 + 12));
  if ( v7 >= 0 && a1 )
  {
    v7 = v6[15];
    if ( v7 < 0 )
      goto LABEL_11;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_1805CDAB8 + 24LL))(
           qword_1805CDAB8,
           a1,
           &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
           v6 + 14);
  }
  if ( v7 >= 0 )
    v7 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
           a2);
LABEL_11:
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v7;
}
