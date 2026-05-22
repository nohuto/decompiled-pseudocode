/*
 * XREFs of ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x18008DBB4
 * Callers:
 *     wistd::__function::__func__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__void___cdecl(void)_::operator() @ 0x18008D6F0 (wistd--__function--__func__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002828C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18006A48C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18006A4C4 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@-$v.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // rbx
  __int64 *v2; // rdi
  __int64 *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // r14
  __int64 v5; // r15
  _QWORD **v6; // r12
  _QWORD *i; // rbx
  __int64 *v8; // r8
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 *j; // r14
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // [rsp+28h] [rbp-69h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-61h]
  __int64 *v16; // [rsp+38h] [rbp-59h]
  __int128 v17; // [rsp+40h] [rbp-51h]
  __int128 v18; // [rsp+50h] [rbp-41h]
  __int128 v19; // [rsp+60h] [rbp-31h]
  __int128 v20; // [rsp+70h] [rbp-21h]
  _OWORD v21[4]; // [rsp+88h] [rbp-9h] BYREF
  MPCHeadUpdateListener *v22; // [rsp+F8h] [rbp+67h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+100h] [rbp+6Fh]

  v22 = this;
  v1 = MPCHeadUpdateListener::s_instance;
  v14 = 0LL;
  v2 = 0LL;
  v15 = 0LL;
  v3 = 0LL;
  v16 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)MPCHeadUpdateListener::s_instance + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)MPCHeadUpdateListener::s_instance + 152));
  v23 = v4;
  v17 = *(_OWORD *)((char *)v1 + 88);
  v18 = *(_OWORD *)((char *)v1 + 104);
  v19 = *(_OWORD *)((char *)v1 + 120);
  v20 = *(_OWORD *)((char *)v1 + 136);
  v5 = *((_QWORD *)v1 + 10);
  v22 = (MPCHeadUpdateListener *)v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (_QWORD **)*((_QWORD *)v1 + 2);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v8 = i + 3;
    if ( v3 == v2 )
    {
      std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy> const &>(
        (__int64 *)&v14,
        (__int64)v2,
        v8);
      v3 = v16;
      v2 = v15;
    }
    else
    {
      v9 = *v8;
      *v2 = *v8;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v15 = ++v2;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  v10 = v14;
  for ( j = v14; j != v2; ++j )
  {
    v12 = (_QWORD *)*j;
    v13 = *(_QWORD *)*j;
    v21[0] = v17;
    v21[1] = v18;
    v21[2] = v19;
    v21[3] = v20;
    (*(void (__fastcall **)(_QWORD *, _OWORD *, __int64))(v13 + 24))(v12, v21, v5);
  }
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>(v10, v2);
    std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)(8 * (v3 - v10)));
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v22);
}
