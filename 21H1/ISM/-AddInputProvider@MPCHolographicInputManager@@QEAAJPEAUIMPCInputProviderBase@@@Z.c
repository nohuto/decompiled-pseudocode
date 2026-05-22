/*
 * XREFs of ?AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18001FC4C
 * Callers:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001F9E0 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18001FD04 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18001FE90 (--$_Emplace_reallocate@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIM.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHolographicInputManager::AddInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  char *v4; // rsi
  struct IMPCInputProviderBase **i; // rax
  struct IMPCInputProviderBase *v6; // rbx
  __int64 *v7; // rdx
  _QWORD *v8; // rcx
  int v10; // ebx
  struct IMPCInputProviderBase *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = (char *)this + 2312;
  for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)this + 289);
        i != *((struct IMPCInputProviderBase ***)this + 290);
        ++i )
  {
    if ( *i == a2 )
      return 2147942487LL;
  }
  v6 = a2;
  v11 = a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v11);
  v7 = (__int64 *)*((_QWORD *)v4 + 1);
  if ( *((__int64 **)v4 + 2) == v7 )
  {
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
      v4,
      v7,
      &v11);
    v6 = v11;
  }
  else
  {
    *v7 = 0LL;
    if ( v7 != (__int64 *)&v11 )
    {
      *v7 = (__int64)a2;
      v6 = 0LL;
    }
    *((_QWORD *)v4 + 1) += 8LL;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v6 + 16LL))(v6);
  v8 = (_QWORD *)*((_QWORD *)this + 322);
  if ( v8 == *((_QWORD **)this + 323)
    || (v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 48LL))(*v8),
        v10 == (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2))
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 322) + 264LL))(**((_QWORD **)this + 322)) )
  {
    MPCHolographicInputManager::AddPrimaryInputProvider(this, a2);
  }
  if ( *((_QWORD *)this + 297) )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 288LL))(a2);
  return 0LL;
}
