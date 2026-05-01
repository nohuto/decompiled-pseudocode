/*
 * XREFs of ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D0B10
 * Callers:
 *     <none>
 * Callees:
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x180012150 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800121F8 (--1RoVariant@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800122C0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180012F40 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1801D0E40 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1801D14C4 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CShoulderTapExperienceManager::OnViewPropertiesChanging(
        CShoulderTapExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  bool v3; // si
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, __int64, struct IInspectable **); // rdi
  __int64 v8; // rcx
  CShoulderTapExperienceManager *v9; // rbx
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, __int64, struct IInspectable **); // rdi
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, __int64, struct IInspectable **); // rdi
  __int64 *v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v20; // [rsp+20h] [rbp-60h] BYREF
  int v21; // [rsp+28h] [rbp-58h]
  __int64 *v22; // [rsp+30h] [rbp-50h]
  struct IInspectable *v23; // [rsp+38h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  int v26; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v28; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v3 = 0;
  if ( *((_QWORD *)a2 + 3) )
  {
    v24 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
           (_QWORD *)a2 + 4,
           (__int64)&v24);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      return v5;
    }
    v25 = 0LL;
    v26 = 0;
    v6 = v24;
    v7 = *(int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v24 + 48LL);
    v22 = &v25;
    v23 = 0LL;
    v28 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FirstLoadComplete", 0x12u, 0x11u);
    LOBYTE(v7) = v7(v6, v28, &v23) >= 0;
    v28 = 0LL;
    RoVariant::RoVariant((RoVariant *)&v20, v23);
    v8 = v25;
    v25 = v20;
    v20 = v8;
    LODWORD(v8) = v26;
    v26 = v21;
    v21 = v8;
    RoVariant::~RoVariant((RoVariant *)&v20);
    if ( (_BYTE)v7 )
    {
      v9 = (CShoulderTapExperienceManager *)((char *)this - 32);
LABEL_9:
      v5 = CShoulderTapExperienceManager::Reactivate(v9, v3);
LABEL_13:
      RoVariant::~RoVariant((RoVariant *)&v25);
      goto LABEL_14;
    }
    v10 = v24;
    v11 = *(int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v24 + 48LL);
    v22 = &v25;
    v23 = 0LL;
    v28 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"PositionShoulderTap", 0x14u, 0x13u);
    LOBYTE(v11) = v11(v10, v28, &v23) >= 0;
    v28 = 0LL;
    v12 = v22;
    RoVariant::RoVariant((RoVariant *)&v20, v23);
    v13 = *v12;
    *v12 = v20;
    v20 = v13;
    LODWORD(v13) = *((_DWORD *)v12 + 2);
    *((_DWORD *)v12 + 2) = v21;
    v21 = v13;
    RoVariant::~RoVariant((RoVariant *)&v20);
    if ( (_BYTE)v11 )
    {
      v9 = (CShoulderTapExperienceManager *)((char *)this - 32);
      if ( (int)CShoulderTapExperienceManager::PositionShoulderTap((CShoulderTapExperienceManager *)((char *)this - 32)) < 0 )
      {
        v3 = 1;
        goto LABEL_9;
      }
    }
    else
    {
      v14 = v24;
      v15 = *(int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v24 + 48LL);
      v22 = &v25;
      v23 = 0LL;
      v28 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AnimationComplete", 0x12u, 0x11u);
      LOBYTE(v15) = v15(v14, v28, &v23) >= 0;
      v28 = 0LL;
      v16 = v22;
      RoVariant::RoVariant((RoVariant *)&v20, v23);
      v17 = *v16;
      *v16 = v20;
      v20 = v17;
      LODWORD(v17) = *((_DWORD *)v16 + 2);
      *((_DWORD *)v16 + 2) = v21;
      v21 = v17;
      RoVariant::~RoVariant((RoVariant *)&v20);
      if ( (_BYTE)v15 )
      {
        v18 = CSingleViewShellExperience::Hide((__int64)this + 8, 0LL);
        v5 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x104,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
            (const char *)(unsigned int)v18);
          goto LABEL_13;
        }
      }
    }
    RoVariant::~RoVariant((RoVariant *)&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  }
  return 0LL;
}
