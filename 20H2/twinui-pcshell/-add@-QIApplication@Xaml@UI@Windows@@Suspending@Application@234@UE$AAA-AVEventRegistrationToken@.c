/*
 * XREFs of ?add@?QIApplication@Xaml@UI@Windows@@Suspending@Application@234@UE$AAA?AVEventRegistrationToken@Foundation@4@PE$AAVSuspendingEventHandler@234@@Z @ 0x1802F34B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802EBC80 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

_QWORD *__fastcall _add__QIApplication_Xaml_UI_Windows__Suspending_Application_234_UE_AAA_AVEventRegistrationToken_Foundation_4_PE_AAVSuspendingEventHandler_234__Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        _QWORD *a2,
        __int64 a3)
{
  int v5; // edi
  __int64 v7; // [rsp+48h] [rbp+20h]

  *a2 = 0LL;
  v7 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIApplication_Xaml_UI_Windows__);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v7 + 104LL))(v7, a3, a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v5 < 0 )
  {
    __abi_WinRTraiseException(v5);
    __debugbreak();
  }
  return a2;
}
