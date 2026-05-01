/*
 * XREFs of ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180318B44
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x1800FBBC0 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAU.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800600C0 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@2345@PE$AAUISwitchItemDataSource@Multitasking@4Internal@Windows@@@Z @ 0x1802ED5E8 (-CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsIn.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x1802EE60C (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x1802EE8E4 (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 *     ?get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItem@3456@XZ @ 0x18030DDD0 (-get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@U.c)
 *     ??$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z @ 0x180316DD0 (--$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z.c)
 *     ?CanSwitchItemMoveDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAA_NPE$AAUISwitchItem@2345@@Z @ 0x1803189C4 (-CanSwitchItemMoveDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windo.c)
 *     ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18031A620 (-HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableS.c)
 *     ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18031A684 (-HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@Composabl.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall _ContextMenuInvoked__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_5WindowsInternal___Z(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int v7; // edi
  enum _TABLETMODESTATE *v8; // rdx
  TabletModeHelpers *v9; // rcx
  __int64 Instance; // rax
  __int64 v11; // r15
  int v12; // esi
  __int64 v13; // r12
  __int64 v14; // r13
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  __int64 v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h]
  __int64 v26; // [rsp+30h] [rbp-10h]
  int v28; // [rsp+98h] [rbp+58h] BYREF

  v28 = 0;
  v5 = Windows::UI::Xaml::Interop::IBindableVector::Size::get(a3);
  v6 = v5;
  v7 = 4;
  if ( v5 < 0x5DD )
    goto LABEL_46;
  if ( v5 <= 0x5DE )
    goto LABEL_13;
  if ( v5 <= 0x5E0 )
    goto LABEL_46;
  if ( v5 <= 0x5E2 )
  {
    XamlAllUpViewController::HandlePinningCommand(a1, a2, v5);
    goto LABEL_28;
  }
  if ( v5 == 1507 )
    goto LABEL_13;
  if ( v5 == 1508 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(a1[2] + 96LL))(a1 + 2, a2);
    goto LABEL_28;
  }
  if ( v5 <= 0x5E6 )
  {
LABEL_13:
    XamlAllUpViewController::HandleSnappingCommands(a1, a2, v5);
  }
  else
  {
LABEL_46:
    if ( Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::CanSwitchItemMoveDesktops(
           a1[24],
           a2) )
    {
      if ( v6 == 1504 )
      {
        Instance = Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs::Item::get(a1[24]);
        v11 = Instance;
        v24 = Instance;
        v12 = 1;
        v13 = Instance;
      }
      else
      {
        v25 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(a1[23]);
        v28 = 2;
        Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
                     v25,
                     v6);
        v13 = Instance;
        v24 = Instance;
        v12 = 6;
        v11 = Instance;
      }
      v28 = v12;
      v14 = __abi_winrt_ptr_ctor(Instance);
      v26 = v14;
      if ( (v12 & 4) != 0 )
      {
        v12 &= ~4u;
        v28 = v12;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( (v12 & 2) != 0 )
      {
        v12 &= ~2u;
        v28 = v12;
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      if ( (v12 & 1) != 0 && v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)a1[24] + 80LL))(a1[24], a2, v14);
      if ( v15 < 0 )
        __abi_WinRTraiseException(v15);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
LABEL_28:
  LOBYTE(v28) = TabletModeHelpers::IsTabletMode(v9, v8);
  v16 = v6 - 1501;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v7 = 3;
      v18 = v17 - 3;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                if ( v22 != 1 )
                  v7 = 9;
              }
              else
              {
                v7 = 2;
              }
            }
            else
            {
              v7 = 1;
            }
          }
          else
          {
            v7 = 6;
          }
        }
        else
        {
          v7 = 8;
        }
      }
      else
      {
        v7 = 7;
      }
    }
    else
    {
      v7 = 5;
    }
  }
  LODWORD(v24) = v7;
  XamlSwitcherTelemetry::TaskViewContextMenuInvoked<unsigned int,bool>((unsigned int *)&v24, (bool *)&v28);
  return __abi_winrt_ptr_assign(a1 + 25, 0LL);
}
