/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800D09D8
 * Callers:
 *     ??$?RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI@345@@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowTabHost@implementation@Shell@Internal@Windows@1@AEBUWindowTabsChangedEventArgs@4UI@561@@Z @ 0x1800C58D8 (--$-RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI.c)
 *     ??1?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800C9340 (--1-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@.c)
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800C96A0 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800C9820 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@.c)
 *     ?add@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@2@@Z @ 0x1800CF34C (-add@-$event@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowT.c)
 *     ?remove@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800D03BC (-remove@-$event@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWind.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     ??$_Destroy_range@PEAU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@std@@YAXPEAU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@0@Z @ 0x1800C5F84 (--$_Destroy_range@PEAU-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@.c)
 */

void __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) == 1 )
  {
    std::_Destroy_range<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs> *>(
      (__int64 *)(v1 + 8),
      (__int64 *)(v1 + 8 * (*(unsigned int *)(v1 + 4) + 1LL)));
    operator delete((void *)v1);
  }
}
