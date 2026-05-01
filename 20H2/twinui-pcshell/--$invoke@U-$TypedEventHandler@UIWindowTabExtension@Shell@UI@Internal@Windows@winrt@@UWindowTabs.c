/*
 * XREFs of ??$invoke@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@UWindowTabHost@implementation@Shell@Internal@34@UWindowTabsChangedEventArgs@7UI@834@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@1@AEBUWindowTabHost@implementation@Shell@Internal@41@AEBUWindowTabsChangedEventArgs@7UI@841@@Z @ 0x1800C7F04
 * Callers:
 *     ??$?RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI@345@@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowTabHost@implementation@Shell@Internal@Windows@1@AEBUWindowTabsChangedEventArgs@4UI@561@@Z @ 0x1800C58D8 (--$-RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800C9158 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??R?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@QEBAXAEBUIWindowTabExtension@Shell@UI@Internal@23@AEBUWindowTabsChangedEventArgs@56723@@Z @ 0x1800C99F0 (--R-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedE.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>,winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2 + 32;
  try
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>::operator()();
    v4 = 0LL;
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v4);
  }
  catch ( ... )
  {
    v3 = *(_DWORD *)winrt::to_hresult(&v4);
    WINRT_RoTransformError(v3, 0LL, 0LL);
    return v3 != -2147417848 && v3 != -2147023174 && v3 != -1996357631;
  }
  return 1;
}
