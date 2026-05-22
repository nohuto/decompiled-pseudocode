/*
 * XREFs of ?DeferInvokeHelper@MPCHolographicInputManager@@AEAAXAEBV?$function@$$A6AXXZ@std@@W4MsgPriority@@@Z @ 0x180075548
 * Callers:
 *     ?DisplayContextChangeCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800757B0 (-DisplayContextChangeCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID.c)
 *     ?Input3DSwitchDisableCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180076470 (-Input3DSwitchDisableCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCHolographicInputManager::DeferInvokeHelper(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 (__fastcall ***v5)(_QWORD, void *); // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = operator new(0x40uLL);
  v4[7] = 0LL;
  v5 = *(__int64 (__fastcall ****)(_QWORD, void *))(a2 + 56);
  if ( v5 )
    v4[7] = (**v5)(v5, v4);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, __int64), _QWORD *, __int64))(**(_QWORD **)(a1 + 2600) + 144LL))(
         *(_QWORD *)(a1 + 2600),
         lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_,
         v4,
         4LL);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1119LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v6);
}
