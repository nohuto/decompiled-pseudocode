/*
 * XREFs of ?get@EventType@IVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AW4VirtualDesktopCollectionChangedEventType@3456@XZ @ 0x18030E798
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_68c3aed66eb015dfcd76405720e32398__void_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___::Invoke @ 0x180303EA0 (Platform--Details--__abi_FunctorCapture__lambda_68c3aed66eb015dfcd76405720e32398__v_ea_180303EA0.c)
 *     ?OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItemDataSource@2345@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Z @ 0x180305630 (-OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@.c)
 *     ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x180318BF8 (-ActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXPE$AA.c)
 *     ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x180325D8C (-ActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXPE$AAV.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EC420 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs::EventType::get(
        __int64 *a1)
{
  __int64 v1; // rax
  int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(v1 + 48))(a1, &v4);
  if ( v2 < 0 )
  {
    __abi_WinRTraiseException(v2);
    __debugbreak();
  }
  return v4;
}
