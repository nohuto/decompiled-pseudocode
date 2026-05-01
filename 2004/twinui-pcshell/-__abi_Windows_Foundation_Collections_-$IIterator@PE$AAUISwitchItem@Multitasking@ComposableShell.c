/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_GetMany@?Q?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@2Platform@@UE$AAAJIPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x18030C360
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?GetMany@?Q?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@2Platform@@UE$AAAIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@7@@Z @ 0x180302230 (-GetMany@-Q-$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collect.c)
 *     ?Init@?$ArrayReference@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AEAAXPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I_N@Z @ 0x18030295C (-Init@-$ArrayReference@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Plat.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IIterator_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows______abi_GetMany__Q__IIterator_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_2Platform__UE_AAAJIPEAPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_4_PEAI_Z(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  void *v5; // rax
  _QWORD v8[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v9[112]; // [rsp+50h] [rbp-98h] BYREF

  v5 = a3;
  if ( *(_BYTE *)(a1 + 104) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a4 = 0;
  try
  {
    Platform::ArrayReference<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Init(
      v8,
      v5,
      a2,
      1);
    *a4 = _GetMany__Q__IIterator_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_2Platform__UE_AAAIP_01E_AAV__WriteOnlyArray_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_7__Z(
            a1,
            (__int64)v9);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
