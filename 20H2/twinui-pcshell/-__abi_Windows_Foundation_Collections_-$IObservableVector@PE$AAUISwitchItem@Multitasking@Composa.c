/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IObservableVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_add_VectorChanged@?Q?$IObservableVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJPE$AAV?$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@PEAVEventRegistrationToken@34@@Z @ 0x18030BCA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IObservableVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows______abi_add_VectorChanged__Q__IObservableVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAJPE_AAV__VectorChangedEventHandler_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___234_PEAVEventRegistrationToken_34__Z(
        _BYTE *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF

  if ( a1[168] )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  memset_0(&v7, 0, sizeof(v7));
  try
  {
    *a3 = v7;
    (*(void (__fastcall **)(_BYTE *, __int64 *, __int64))(*(_QWORD *)a1 + 64LL))(a1, &v7, a2);
    *a3 = v7;
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
