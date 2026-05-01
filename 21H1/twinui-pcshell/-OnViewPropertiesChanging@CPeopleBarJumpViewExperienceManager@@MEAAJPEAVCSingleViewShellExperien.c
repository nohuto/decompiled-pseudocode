/*
 * XREFs of ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801AB500
 * Callers:
 *     <none>
 * Callees:
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x180011C60 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x180011D08 (--1RoVariant@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180011DD0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800136E0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002F5AC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x1801AB0D8 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x1801AB9D4 (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging(
        CPeopleBarJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, PCWSTR, char *); // rbx
  PCWSTR StringRawBuffer; // rax
  int v7; // ebx
  __int64 v8; // rdx
  int v10; // eax
  unsigned int v11; // r8d
  int v12; // edi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, PVOID, struct IInspectable **); // rdi
  HSTRING_HEADER *v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int String; // eax
  __int64 v21; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-58h] BYREF
  struct IInspectable *v23; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-48h] BYREF
  int v25; // [rsp+40h] [rbp-40h]
  __int64 v26; // [rsp+48h] [rbp-38h] BYREF
  int v27; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER v28; // [rsp+58h] [rbp-28h] BYREF
  __int64 v29; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( *((_QWORD *)a2 + 3) )
  {
    *((_DWORD *)this + 76) = (int)*((float *)a2 + 11);
    *((_DWORD *)this + 77) = (int)*((float *)a2 + 12);
    v4 = *((_QWORD *)this + 28);
    v5 = *(__int64 (__fastcall **)(__int64, PCWSTR, char *))(*(_QWORD *)v4 + 112LL);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 33), 0LL);
    v7 = v5(v4, StringRawBuffer, (char *)this + 272);
    if ( v7 < 0 )
    {
      v8 = 264LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    v7 = CPeopleBarJumpViewExperienceManager::PositionJumpView((CPeopleBarJumpViewExperienceManager *)((char *)this - 48));
    if ( v7 < 0 )
    {
      v8 = 265LL;
      goto LABEL_4;
    }
    v21 = 0LL;
    v10 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
            (_QWORD *)a2 + 4,
            (__int64)&v21);
    v12 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      return (unsigned int)v12;
    }
    v24 = 0LL;
    v25 = 0;
    v13 = v21;
    v14 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v21 + 48LL);
    v22 = &v24;
    v23 = 0LL;
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, (const WCHAR **)off_1804AA880, v11);
    v12 = v14(v13, v15[1].Reserved.Reserved1, &v23);
    v29 = 0LL;
    v16 = v22;
    RoVariant::RoVariant((RoVariant *)&v26, v23);
    v17 = *v16;
    *v16 = v26;
    v26 = v17;
    LODWORD(v17) = *((_DWORD *)v16 + 2);
    *((_DWORD *)v16 + 2) = v27;
    v27 = v17;
    RoVariant::~RoVariant((RoVariant *)&v26);
    if ( v12 < 0 )
    {
      v18 = (unsigned int)v12;
      v19 = 271LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)v18);
      RoVariant::~RoVariant((RoVariant *)&v24);
      goto LABEL_18;
    }
    if ( v24 )
    {
      v22 = v24;
      LODWORD(v23) = v25;
      WindowsDeleteString(*((HSTRING *)this + 39));
      *((_QWORD *)this + 39) = 0LL;
      String = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v22, (HSTRING *)this + 39);
      v12 = String;
      if ( String < 0 )
      {
        v19 = 274LL;
LABEL_16:
        v18 = (unsigned int)String;
        goto LABEL_17;
      }
    }
    String = CSingleViewShellExperience::Show(
               (__int64)this + 8,
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
    v12 = String;
    if ( String < 0 )
    {
      v19 = 277LL;
      goto LABEL_16;
    }
    RoVariant::~RoVariant((RoVariant *)&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  }
  return 0LL;
}
