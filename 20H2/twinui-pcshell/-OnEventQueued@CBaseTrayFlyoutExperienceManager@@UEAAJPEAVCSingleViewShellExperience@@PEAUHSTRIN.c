/*
 * XREFs of ?OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A1C40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180023DB0 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x1800274F8 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z @ 0x1800A13D8 (-GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x1800A1518 (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x1800F3260 (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x1801B7AEC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnEventQueued(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  int PropVal; // ebx
  HSTRING_HEADER *v9; // rax
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  HSTRING Reserved1; // rbx
  int v13; // eax
  HSTRING v14; // r8
  const WCHAR *StringRawBuffer; // rax
  HSTRING_HEADER *v16; // rax
  __int64 v17; // rcx
  HSTRING string; // [rsp+30h] [rbp-48h] BYREF
  HWND hWnd; // [rsp+38h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v21; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER v22; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]

  v21 = a3;
  PropVal = 0;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         &v22,
         (const WCHAR **)off_180497D80,
         (unsigned int)a3);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v21, (__int64)v9) )
  {
    v21 = a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    WindowsDeleteString(0LL);
    string = 0LL;
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                           &v22,
                           (const WCHAR **)off_180497D78,
                           v11)[1].Reserved.Reserved1;
    string = 0LL;
    hWnd = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&hWnd);
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
                Reserved1,
                (struct Windows::Foundation::IPropertyValue **)&hWnd);
    if ( PropVal >= 0 )
    {
      v13 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}(hWnd, &string);
      PropVal = v13;
      if ( v13 >= 0 )
        PropVal = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v13);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&hWnd);
    if ( PropVal >= 0 )
    {
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                           (Microsoft::WRL::Wrappers::Details *)string,
                           0LL,
                           v14) )
      {
        PropVal = CBaseTrayFlyoutExperienceManager::GetViewWindow(
                    (CBaseTrayFlyoutExperienceManager *)((char *)this - 48),
                    &hWnd);
        if ( PropVal >= 0 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          SetWindowTextW(hWnd, StringRawBuffer);
        }
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  }
  else
  {
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, (const WCHAR **)off_180497D88, v10);
    if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v21, (__int64)v16) )
      CBaseTrayFlyoutExperienceManager::HideFlyout((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
  }
  v17 = *((_QWORD *)this + 42);
  if ( v17 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *, struct Windows::Foundation::Collections::IPropertySet *, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v17 + 88LL))(
      v17,
      a2,
      a3,
      a4);
  return (unsigned int)PropVal;
}
