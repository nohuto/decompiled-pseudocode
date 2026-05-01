/*
 * XREFs of ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x1802F7058
 * Callers:
 *     ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x1800D5800 (-ActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXPE.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?get@EventType@IVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AW4VirtualDesktopCollectionChangedEventType@3456@XZ @ 0x1802ECBF8 (-get@EventType@IVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@W.c)
 *     CreationThreadDispatcher::RunAsync__lambda_a024861b188cf4ada81763f84c86531a___ @ 0x1802F50C0 (CreationThreadDispatcher--RunAsync__lambda_a024861b188cf4ada81763f84c86531a___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _ActivationChanged__QIXamlSwitcherWindowInteractionEvents__XamlAllUpViewController__UE_AAAXPE_AAVObject_Platform__PE_AAVWindowActivatedEventArgs_Core_UI_Windows___Z(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 WeakReference; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs::EventType::get(a3) == 1 )
  {
    WeakReference = Platform::Details::GetWeakReference(a1);
    v5 = WeakReference;
    v6 = *(_QWORD *)(a1 + 88);
    v9 = WeakReference;
    if ( WeakReference )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
    v7 = CreationThreadDispatcher::RunAsync__lambda_a024861b188cf4ada81763f84c86531a___(v6, (volatile int *)&v9);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        392LL,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v7);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
