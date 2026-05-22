/*
 * XREFs of ?OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ @ 0x18009BC6C
 * Callers:
 *     ?OnReportQueryCallbackStatic@DockDeviceCollection@@SAJPEAXK0@Z @ 0x18009BE10 (-OnReportQueryCallbackStatic@DockDeviceCollection@@SAJPEAXK0@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??4?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009B770 (--4-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DockDeviceCollection::OnReportQueryCallback(DockDeviceCollection *this)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  _QWORD *v4; // rax
  unsigned int *v5; // rdi
  const struct std::nothrow_t *v6; // rdx
  unsigned int v7; // edi
  void *v8; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r9
  void *v13; // rdi
  int v14; // eax
  const struct std::nothrow_t *v15; // rdx
  int v16; // eax
  unsigned int v18; // [rsp+30h] [rbp-28h]
  void *v19; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (DockDeviceCollection *)((char *)this + 2816);
  while ( 1 )
  {
    v19 = 0LL;
    v3 = _Mtx_lock(v2);
    if ( v3 )
    {
      std::_Throw_C_error(v3);
      __debugbreak();
      return DockDeviceCollection::OnReportQueryCallback_::_1_::dtor_0();
    }
    if ( !*((_QWORD *)this + 351) )
      break;
    v4 = (_QWORD *)*((_QWORD *)this + 347);
    if ( v4 )
      v4 = (_QWORD *)*v4;
    v5 = *(unsigned int **)(v4[1] + 8 * (*((_QWORD *)this + 350) & (v4[2] - 1LL)));
    v18 = *v5;
    std::unique_ptr<unsigned char [0]>::operator=(&v19, (const struct std::nothrow_t *)(v5 + 2));
    v7 = v5[4];
    v20 = v7;
    v8 = *(void **)(*(_QWORD *)(*((_QWORD *)this + 348) + 8
                                                        * (*((_QWORD *)this + 350) & (*((_QWORD *)this + 349) - 1LL)))
                  + 8LL);
    if ( v8 )
      operator delete(v8, v6);
    if ( (*((_QWORD *)this + 351))-- == 1LL )
      v10 = 0LL;
    else
      v10 = *((_QWORD *)this + 350) + 1LL;
    *((_QWORD *)this + 350) = v10;
    v11 = _Mtx_unlock(v2);
    if ( v11 )
    {
      std::_Throw_C_error(v11);
      break;
    }
    v12 = v7;
    v13 = v19;
    v14 = (*(__int64 (__fastcall **)(DockDeviceCollection *, _QWORD, void *, __int64))(*(_QWORD *)this + 80LL))(
            this,
            v18,
            v19,
            v12);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        197LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
        (const char *)(unsigned int)v14);
    if ( v13 )
      operator delete(v13, v15);
  }
  v16 = _Mtx_unlock(v2);
  if ( v16 )
    std::_Throw_C_error(v16);
  return 0LL;
}
