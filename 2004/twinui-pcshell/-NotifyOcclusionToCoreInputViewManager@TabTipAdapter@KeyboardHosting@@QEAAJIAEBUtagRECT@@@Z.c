/*
 * XREFs of ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x18035E7F0
 * Callers:
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x180349B28 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18034AF68 (-GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ??$CoreInputViewOcclusionChanged@AEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@PEAGAEAURect@Foundation@5@AEAU675@AEAU675@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@$$QEAPEAGAEAURect@Foundation@5@33@Z @ 0x1803578DC (--$CoreInputViewOcclusionChanged@AEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Wind.c)
 *     ??$Make@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@5678@@Z @ 0x180358054 (--$Make@V-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultEqualityP.c)
 *     ?GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@I@Z @ 0x1803684C8 (-GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@QEAA-AW4CoreInputViewOcclusionKind@Core@V.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(
        KeyboardHosting::TabTipAdapter *this,
        unsigned int a2,
        __m128i *a3)
{
  __m128i v4; // xmm1
  __int64 v5; // rcx
  __int128 v6; // xmm6
  unsigned int OcclusionKind; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int128 *, __int64, __int64 *); // rax
  int v11; // eax
  int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, __int64 *); // rdi
  __int64 v19; // rcx
  __int64 v20; // r8
  const char *v21; // r9
  __int64 v22; // rcx
  __int64 v24; // [rsp+38h] [rbp-39h] BYREF
  __int64 v25; // [rsp+40h] [rbp-31h] BYREF
  __int64 v26; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v28[4]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v29; // [rsp+68h] [rbp-9h] BYREF
  LPVOID pv[2]; // [rsp+78h] [rbp+7h] BYREF
  __int128 v31; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v28[0] = a2;
  v26 = 0LL;
  v4 = *a3;
  v5 = a3->m128i_i64[0];
  *(float *)pv = (float)(int)a3->m128i_i64[0];
  *((float *)pv + 1) = (float)SHIDWORD(v5);
  v4.m128i_i64[0] = _mm_srli_si128(v4, 8).m128i_u64[0];
  *(float *)&pv[1] = (float)(v4.m128i_i32[0] - v5 + 1);
  *((float *)&pv[1] + 1) = (float)(v4.m128i_i32[1] - HIDWORD(v5) + 1);
  v6 = *(_OWORD *)pv;
  v31 = *(_OWORD *)pv;
  OcclusionKind = KeyboardHosting::TabTipAdapterPolicy::GetOcclusionKind(*((_QWORD *)this + 13));
  v8 = OcclusionKind;
  v27 = OcclusionKind;
  v9 = *((_QWORD *)this + 5);
  v10 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *))(*(_QWORD *)v9 + 64LL);
  v29 = v6;
  v11 = v10(v9, &v29, v8, &v26);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_19;
  }
  v25 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v13 = 0LL;
  v25 = 0LL;
  v12 = 0;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *> const &,Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::permission>((__int64 *)&v29);
  v14 = v29;
  if ( (_QWORD)v29 )
  {
    v13 = v29;
    *(_QWORD *)&v29 = 0LL;
    v25 = v14;
  }
  else
  {
    v12 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
  if ( v12 >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 104LL))(v13, v26);
    v12 = v17;
    if ( v17 >= 0 )
    {
      v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 64LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      v17 = v18(v13, &v24);
      v12 = v17;
      if ( v17 >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5), v24);
        v12 = v17;
        if ( v17 >= 0 )
        {
          TouchKeyboardExperienceManager::GetForegroundAppId(v19, pv, v20, v21);
          *(LPVOID *)&v29 = pv[0];
          TouchKeyboardExperienceTelemetryLogger::CoreInputViewOcclusionChanged<unsigned int &,enum Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind &,unsigned short *,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &>(
            v28,
            &v27,
            &v29,
            (__int64)&v31,
            (__int64)this + 456,
            (__int64)this + 472);
          v12 = 0;
          if ( pv[0] )
            CoTaskMemFree(pv[0]);
          goto LABEL_18;
        }
        v16 = 1553LL;
      }
      else
      {
        v16 = 1552LL;
      }
    }
    else
    {
      v16 = 1551LL;
    }
    v15 = (unsigned int)v17;
  }
  else
  {
    v15 = (unsigned int)v12;
    v16 = 1550LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)v15);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
LABEL_19:
  v22 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return (unsigned int)v12;
}
