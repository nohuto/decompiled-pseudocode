/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800BC39C
 * Callers:
 *     ??$?RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI@345@@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowTabHost@implementation@Shell@Internal@Windows@1@AEBUWindowTabsChangedEventArgs@4UI@561@@Z @ 0x1800B1018 (--$-RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI.c)
 *     ?WindowTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x1800BA22C (-WindowTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_tok.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800663C0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ReleaseSRWLockExclusive_0 @ 0x18008D88A (ReleaseSRWLockExclusive_0.c)
 *     WINRT_AcquireSRWLockExclusive @ 0x18008D8AE (WINRT_AcquireSRWLockExclusive.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1800B328C (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Interna.c)
 *     ??$make_event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1800B3824 (--$make_event_array@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@U.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B4F7C (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800BC9B8 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Sh.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>::remove(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  RTL_SRWLOCK *v3; // r15
  __int64 v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  __int64 Ptr; // rcx
  unsigned int v7; // eax
  __int64 v8; // rbx
  bool v9; // r13
  __int64 *v10; // rax
  __int64 *v11; // r12
  __int64 v12; // rax
  __int64 *v13; // r15
  __int64 *v14; // rax
  unsigned int v15; // esi
  __int64 *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v18; // [rsp+28h] [rbp-18h] BYREF
  RTL_SRWLOCK *v19; // [rsp+30h] [rbp-10h]
  RTL_SRWLOCK *v20; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+50h]
  __int64 v22; // [rsp+98h] [rbp+58h] BYREF

  v20 = a1;
  v3 = a1;
  v4 = 0LL;
  v17 = 0LL;
  v5 = a1 + 2;
  v19 = a1 + 2;
  WINRT_AcquireSRWLockExclusive(a1 + 2);
  Ptr = (__int64)v3->Ptr;
  if ( !v3->Ptr )
    goto LABEL_25;
  v7 = *(_DWORD *)(Ptr + 4) - 1;
  v21 = v7;
  v8 = 0LL;
  v22 = 0LL;
  v9 = 0;
  if ( v7 )
  {
    v10 = winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>(
            &v18,
            v7);
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::operator=(
      &v22,
      v10);
    if ( v18 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v18);
    v8 = v22;
    v11 = (__int64 *)(v22 + 8);
    v12 = (__int64)v3->Ptr;
    v13 = (__int64 *)((char *)v3->Ptr + 8);
    v14 = &v13[*(unsigned int *)(v12 + 4)];
    v18 = v14;
    if ( v13 == v14 )
      goto LABEL_23;
    v15 = v21;
    do
    {
      if ( v9 || a2 != *v13 )
      {
        if ( !v15 )
          break;
        if ( v11 != v13 )
        {
          if ( *v11 )
            winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v11);
          *v11 = *v13;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
          v14 = v18;
        }
        ++v11;
        --v15;
      }
      else
      {
        v9 = 1;
      }
      ++v13;
    }
    while ( v13 != v14 );
    v5 = v19;
    v3 = v20;
  }
  else
  {
    v9 = *(_QWORD *)(Ptr + 8) == a2;
  }
  if ( v9 )
  {
    WINRT_AcquireSRWLockExclusive(v3 + 1);
    v16 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>>(
            &v20,
            (__int64 *)v3,
            (__int64)&v22);
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::operator=(
      &v17,
      v16);
    if ( v20 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v20);
    ReleaseSRWLockExclusive_0(v3 + 1);
    v4 = v17;
    v8 = v22;
  }
LABEL_23:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v22);
LABEL_25:
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v17);
}
