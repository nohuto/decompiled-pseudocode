/*
 * XREFs of ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x180076914
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18007792C (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180083870 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18018F568 (-ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

char __fastcall MPCHolographicInputManager::IsProviderPrimary(
        MPCHolographicInputManager *this,
        const struct IMPCInputProviderBase *a2)
{
  __int64 *v2; // rdi
  __int64 *v4; // rsi
  const struct IMPCInputProviderBase *v5; // rbx
  const struct IMPCInputProviderBase *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 322);
  v4 = (__int64 *)*((_QWORD *)this + 323);
  while ( 1 )
  {
    if ( v2 == v4 )
      return 0;
    v7 = (const struct IMPCInputProviderBase *)*v2;
    v5 = v7;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v7);
    if ( v5 == a2 )
      break;
    if ( v5 )
      (*(void (__fastcall **)(const struct IMPCInputProviderBase *))(*(_QWORD *)v5 + 16LL))(v5);
    ++v2;
  }
  if ( v5 )
    (*(void (__fastcall **)(const struct IMPCInputProviderBase *))(*(_QWORD *)v5 + 16LL))(v5);
  return 1;
}
