/*
 * XREFs of ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D9210
 * Callers:
 *     <none>
 * Callees:
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x180012150 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800121F8 (--1RoVariant@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800122C0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180013C10 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x1801CEBE8 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D7C64 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CJumpViewExperienceManager::OnViewPropertiesChanging(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  int v5; // edi
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, struct IInspectable **); // rdi
  HSTRING_HEADER *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int String; // eax
  int v16; // eax
  int v17; // ebx
  __int64 v19; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v20; // [rsp+28h] [rbp-58h] BYREF
  struct IInspectable *v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  int v23; // [rsp+40h] [rbp-40h]
  _QWORD *v24; // [rsp+48h] [rbp-38h] BYREF
  int v25; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER v26; // [rsp+58h] [rbp-28h] BYREF
  __int64 v27; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v19 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         (__int64)&v19);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = CJumpViewExperienceManager::EnsureWindowPosition((CJumpViewExperienceManager *)((char *)this - 64), a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 564LL;
      goto LABEL_5;
    }
    v24 = 0LL;
    v25 = 0;
    v8 = v19;
    v9 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v19 + 48LL);
    v20 = &v24;
    v21 = 0LL;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v26,
            (const WCHAR **)&JumpViewExperienceEvents::Param_Title,
            v7);
    v5 = v9(v8, v10[1].Reserved.Reserved1, &v21);
    v27 = 0LL;
    v11 = v20;
    RoVariant::RoVariant((RoVariant *)&v22, v21);
    v12 = *v11;
    *v11 = v22;
    v22 = v12;
    LODWORD(v12) = *((_DWORD *)v11 + 2);
    *((_DWORD *)v11 + 2) = v23;
    v23 = v12;
    RoVariant::~RoVariant((RoVariant *)&v22);
    if ( v5 >= 0 )
    {
      if ( !v24
        || (v20 = v24,
            LODWORD(v21) = v25,
            WindowsDeleteString(*((HSTRING *)this + 45)),
            *((_QWORD *)this + 45) = 0LL,
            String = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v20, (HSTRING *)this + 45),
            v5 = String,
            String >= 0) )
      {
        if ( *((_BYTE *)this + 444)
          && (*((_BYTE *)this + 444) = 0,
              v16 = CSingleViewShellExperience::Show(
                      (__int64)this + 88,
                      *((_BYTE *)this + 445) == 0
                    ? (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4
                    : 0),
              v17 = v16,
              v16 < 0) )
        {
          v5 = -2147467259;
          if ( v16 != -2147467259 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x248,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
              (const char *)(unsigned int)v16);
            v5 = v17;
          }
        }
        else
        {
          v5 = 0;
        }
        goto LABEL_17;
      }
      v13 = (unsigned int)String;
      v14 = 570LL;
    }
    else
    {
      v13 = (unsigned int)v5;
      v14 = 567LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)v13);
LABEL_17:
    RoVariant::~RoVariant((RoVariant *)&v24);
    goto LABEL_18;
  }
  v6 = 548LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return (unsigned int)v5;
}
