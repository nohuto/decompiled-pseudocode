/*
 * XREFs of ?DisplayContextChangeCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800757B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A64 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DeferInvokeHelper@MPCHolographicInputManager@@AEAAXAEBV?$function@$$A6AXXZ@std@@W4MsgPriority@@@Z @ 0x180075548 (-DeferInvokeHelper@MPCHolographicInputManager@@AEAAXAEBV-$function@$$A6AXXZ@std@@W4MsgPriority@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHolographicInputManager::DisplayContextChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int a6)
{
  __int64 v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall **v9)(); // [rsp+30h] [rbp-58h] BYREF
  __int128 v10; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall ***v11)(); // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( a5 && a6 == 4 )
  {
    if ( !a4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        1143LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        0LL);
      __debugbreak();
    }
    LODWORD(v8) = *a5;
    *((_QWORD *)&v8 + 1) = a4;
    v9 = off_1801AFC20;
    v10 = v8;
    v11 = &v9;
    MPCHolographicInputManager::DeferInvokeHelper(a4, (__int64)&v9);
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)&v9, v6);
  }
  return 0LL;
}
