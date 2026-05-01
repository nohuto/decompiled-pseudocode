/*
 * XREFs of ?Exit@?QIApplication@Xaml@UI@Windows@@Application@234@UE$AAAXXZ @ 0x1802F05A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802EBC80 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _Exit__QIApplication_Xaml_UI_Windows__Application_234_UE_AAAXXZ(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *))
{
  int v1; // edi
  __int64 result; // rax
  __int64 v3; // [rsp+38h] [rbp+10h]

  v3 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIApplication_Xaml_UI_Windows__);
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 136LL))(v3);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    __debugbreak();
  }
  return result;
}
