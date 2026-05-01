/*
 * XREFs of ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x18025ED08
 * Callers:
 *     ?GetRectForFlyoutButton@PeoplePaneViewManager@@UEAAJPEAUtagRECT@@@Z @ 0x18025EC70 (-GetRectForFlyoutButton@PeoplePaneViewManager@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z @ 0x18025ECC0 (-GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800139FC (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x18007020C (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800702B4 (--1RoVariant@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007037C (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetRect@Accessor@RoVariant@@QEBAJPEAURect@Foundation@Windows@@@Z @ 0x18025EC18 (-GetRect@Accessor@RoVariant@@QEBAJPEAURect@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall PeoplePaneViewManager::GetRectFromPropertySet(
        PeoplePaneViewManager *this,
        const unsigned __int16 *a2,
        struct tagRECT *a3)
{
  int v6; // edi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // r8d
  __int64 v12; // rbx
  HSTRING_HEADER *v13; // rax
  bool v14; // di
  const WCHAR **Reserved1; // rbx
  const WCHAR *v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rbx
  HSTRING_HEADER *v19; // rax
  const WCHAR **v20; // rbx
  const WCHAR *v21; // rcx
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  int v24; // eax
  BOOL WindowRect; // eax
  float v26; // xmm2_4
  float v27; // xmm0_4
  const WCHAR *v28; // [rsp+20h] [rbp-79h] BYREF
  int v29; // [rsp+28h] [rbp-71h]
  __int64 v30; // [rsp+30h] [rbp-69h] BYREF
  __int64 v31; // [rsp+38h] [rbp-61h] BYREF
  __int64 v32; // [rsp+40h] [rbp-59h] BYREF
  __int64 v33; // [rsp+48h] [rbp-51h] BYREF
  void *v34; // [rsp+50h] [rbp-49h] BYREF
  int v35; // [rsp+58h] [rbp-41h]
  float v36; // [rsp+60h] [rbp-39h] BYREF
  float v37; // [rsp+64h] [rbp-35h]
  float v38; // [rsp+68h] [rbp-31h]
  float v39; // [rsp+6Ch] [rbp-2Dh]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-29h] BYREF
  __int64 v41; // [rsp+88h] [rbp-11h]
  struct tagRECT Rect; // [rsp+90h] [rbp-9h] BYREF
  HSTRING_HEADER v43; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v44; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v28 = a2;
  SetRectEmpty(a3);
  if ( !*((_QWORD *)this + 73) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v33 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v33);
  v6 = CoreQueryWindowService(
         *((_QWORD *)this + 73),
         &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
         &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
         &v33);
  if ( v6 >= 0 )
  {
    v32 = 0LL;
    v41 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v41,
           &v32);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x165,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      goto LABEL_27;
    }
    v31 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    v8 = RoCreatePropertySetSerializer(&v31);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 361LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      goto LABEL_26;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v31 + 56LL))(v31, v32, v33);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 362LL;
      goto LABEL_10;
    }
    v30 = 0LL;
    v10 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
            &v32,
            &v30);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16D,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      goto LABEL_25;
    }
    v34 = 0LL;
    v35 = 0;
    v12 = v30;
    hstringHeader.Reserved.Reserved1 = &v34;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, &v28, v11);
    v14 = (*(int (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v12 + 48LL))(
            v12,
            v13[1].Reserved.Reserved1,
            &hstringHeader.Reserved.Reserved2[8]) < 0;
    v44 = 0LL;
    Reserved1 = (const WCHAR **)hstringHeader.Reserved.Reserved1;
    RoVariant::RoVariant((RoVariant *)&v28, *(struct IInspectable **)&hstringHeader.Reserved.Reserved2[8]);
    v16 = *Reserved1;
    *Reserved1 = v28;
    v28 = v16;
    LODWORD(v16) = *((_DWORD *)Reserved1 + 2);
    *((_DWORD *)Reserved1 + 2) = v29;
    v29 = (int)v16;
    RoVariant::~RoVariant((RoVariant *)&v28);
    if ( !v14 )
      goto LABEL_16;
    v18 = v30;
    hstringHeader.Reserved.Reserved1 = &v34;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
    v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)off_1804CF430, v17);
    v6 = (*(__int64 (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v18 + 48LL))(
           v18,
           v19[1].Reserved.Reserved1,
           &hstringHeader.Reserved.Reserved2[8]);
    v44 = 0LL;
    v20 = (const WCHAR **)hstringHeader.Reserved.Reserved1;
    RoVariant::RoVariant((RoVariant *)&v28, *(struct IInspectable **)&hstringHeader.Reserved.Reserved2[8]);
    v21 = *v20;
    *v20 = v28;
    v28 = v21;
    LODWORD(v21) = *((_DWORD *)v20 + 2);
    *((_DWORD *)v20 + 2) = v29;
    v29 = (int)v21;
    RoVariant::~RoVariant((RoVariant *)&v28);
    if ( v6 < 0 )
    {
      v22 = (unsigned int)v6;
      v23 = 374LL;
    }
    else
    {
LABEL_16:
      hstringHeader.Reserved.Reserved1 = v34;
      *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = v35;
      v24 = RoVariant::Accessor::GetRect(
              (RoVariant::Accessor *)&hstringHeader,
              (struct Windows::Foundation::Rect *)&v36);
      v6 = v24;
      if ( v24 >= 0 )
      {
        WindowRect = GetWindowRect(*((HWND *)this + 73), &Rect);
        v26 = v36;
        if ( WindowRect )
        {
          v26 = v36 + (float)Rect.left;
          v36 = v26;
          v27 = v37 + (float)Rect.top;
          v37 = v27;
        }
        else
        {
          v27 = v37;
        }
        a3->left = (int)v26;
        a3->top = (int)v27;
        a3->right = (int)v26 + (int)v38;
        a3->bottom = (int)v27 + (int)v39;
        v6 = 0;
        goto LABEL_23;
      }
      v22 = (unsigned int)v24;
      v23 = 376LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)v22);
LABEL_23:
    RoVariant::~RoVariant((RoVariant *)&v34);
    goto LABEL_24;
  }
LABEL_27:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v33);
  return (unsigned int)v6;
}
