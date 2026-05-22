/*
 * XREFs of ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800789C0
 * Callers:
 *     ?ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z @ 0x18007593C (-ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z.c)
 *     ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x1800771DC (-OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z.c)
 *     ?UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ @ 0x180078DF4 (-UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18001FD64 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IMPCInputProviderBase_________lambda_4eb1bd967a44c8988ac0e8ab217f7822___ @ 0x180075004 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IM.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x18007586C (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?clear@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800792E8 (-clear@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 */

char __fastcall MPCHolographicInputManager::TrySetProviderAsPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase **a2,
        __int64 a3,
        const char *a4)
{
  struct IMPCInputProviderBase *v6; // rdi
  char *v7; // r12
  _QWORD *v8; // rax
  char v9; // r15
  int v10; // ebx
  char result; // al
  const char *v12; // r9
  __int64 (__fastcall **v13)(); // [rsp+20h] [rbp-40h] BYREF
  char *v14; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v15)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  char v17; // [rsp+A0h] [rbp+40h] BYREF
  struct IMPCInputProviderBase *v18; // [rsp+B0h] [rbp+50h] BYREF
  __int64 *v19; // [rsp+B8h] [rbp+58h] BYREF

  if ( !*((_BYTE *)this + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      625LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v6 = *a2;
  v7 = (char *)this + 2576;
  v8 = (_QWORD *)*((_QWORD *)this + 322);
  v9 = 1;
  v17 = 1;
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 112LL))(*v8);
  if ( v10 != (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v6 + 112LL))(v6)
    || !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 264LL))(*a2) )
  {
    v9 = 0;
    v13 = off_1801AFCE0;
    v14 = &v17;
    v15 = &v13;
    MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v13);
  }
  result = v17;
  if ( v17 )
  {
    if ( !v9 )
    {
      v14 = (char *)this;
      v13 = off_1801AFCB0;
      v15 = &v13;
      MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v13);
      std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::clear(v7);
    }
    v18 = *a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v18);
    std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IMPCInputProviderBase_________lambda_4eb1bd967a44c8988ac0e8ab217f7822___(
      &v19,
      *((__int64 **)this + 289),
      *((__int64 **)this + 290),
      (__int64 *)&v18);
    if ( v19 == *((__int64 **)this + 290) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        664LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v12);
      __debugbreak();
    }
    MPCHolographicInputManager::AddPrimaryInputProvider(this, *a2);
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 32LL))(*a2);
    return v17;
  }
  return result;
}
