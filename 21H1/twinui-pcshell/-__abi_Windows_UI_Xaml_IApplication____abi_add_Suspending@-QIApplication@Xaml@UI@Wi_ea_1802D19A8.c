/*
 * XREFs of ?__abi_Windows_UI_Xaml_IApplication____abi_add_Suspending@?QIApplication@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPE$AAVSuspendingEventHandler@234@PEAVEventRegistrationToken@Foundation@4@@Z @ 0x1802D19A8
 * Callers:
 *     ?__abi_Windows_UI_Xaml_IApplication____abi_add_Suspending@?QIApplication@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJPE$AAVSuspendingEventHandler@234@PEAVEventRegistrationToken@Foundation@4@@Z @ 0x1800D3D20 (-__abi_Windows_UI_Xaml_IApplication____abi_add_Suspending@-QIApplication@Xaml@UI@Windows@@XamlEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$VectorViewIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Platform@@QEAA@XZ @ 0x180248858 (--1-$VectorViewIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collec.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_IApplication____abi_add_Suspending__QIApplication_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJPE_AAVSuspendingEventHandler_234_PEAVEventRegistrationToken_Foundation_4__Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a1 + 240) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v7 = 0LL;
  v5 = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 56))(
         *(_QWORD *)(a1 + 56),
         &_uuidof__AUIApplication_Xaml_UI_Windows__,
         &v7);
  if ( !v5 )
  {
    v8 = v7;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 104LL))(v7, a2, a3);
    Platform::Collections::VectorViewIterator<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::~VectorViewIterator<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(&v8);
  }
  return v5;
}
