/*
 * XREFs of ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x180112F84
 * Callers:
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x18011349C (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x1801137E0 (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 *     ?CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@P6A?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@3@PEBG@Z@Z @ 0x180113CC8 (-CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncStringPrincipal@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010F4D0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy.c)
 */

void __fastcall MPCConstantManagerClient::CleanupPrincipals(MPCConstantManagerClient *this)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx
  __int64 *j; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 *k; // rbx
  __int64 *m; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 *n; // rbx
  __int64 *ii; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx

  v1 = (__int64 *)*((_QWORD *)this + 7);
  for ( i = (__int64 *)*((_QWORD *)this + 6); i != v1 && *(_BYTE *)(*i + 184); ++i )
    ;
  if ( i != v1 )
  {
    for ( j = i + 1; j != v1; ++j )
    {
      v5 = *j;
      if ( *(_BYTE *)(*j + 184) )
      {
        *j = 0LL;
        v6 = *i;
        *i = v5;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        ++i;
      }
    }
  }
  v7 = (__int64 *)*((_QWORD *)this + 7);
  if ( v1 != v7 )
  {
    do
    {
      v8 = *v1;
      *v1 = 0LL;
      v9 = *i;
      *i = v8;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      ++i;
      ++v1;
    }
    while ( v1 != v7 );
    v7 = (__int64 *)*((_QWORD *)this + 7);
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>>(i, v7);
  *((_QWORD *)this + 7) = i;
  v10 = (__int64 *)*((_QWORD *)this + 10);
  for ( k = (__int64 *)*((_QWORD *)this + 9); k != v10 && *(_BYTE *)(*k + 120); ++k )
    ;
  if ( k != v10 )
  {
    for ( m = k + 1; m != v10; ++m )
    {
      v13 = *m;
      if ( *(_BYTE *)(*m + 120) )
      {
        *m = 0LL;
        v14 = *k;
        *k = v13;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        ++k;
      }
    }
  }
  v15 = (__int64 *)*((_QWORD *)this + 10);
  if ( v10 != v15 )
  {
    do
    {
      v16 = *v10;
      *v10 = 0LL;
      v17 = *k;
      *k = v16;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      ++k;
      ++v10;
    }
    while ( v10 != v15 );
    v15 = (__int64 *)*((_QWORD *)this + 10);
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>>(k, v15);
  *((_QWORD *)this + 10) = k;
  v18 = (__int64 *)*((_QWORD *)this + 13);
  for ( n = (__int64 *)*((_QWORD *)this + 12); n != v18 && *(_BYTE *)(*n + 184); ++n )
    ;
  if ( n != v18 )
  {
    for ( ii = n + 1; ii != v18; ++ii )
    {
      v21 = *ii;
      if ( *(_BYTE *)(*ii + 184) )
      {
        *ii = 0LL;
        v22 = *n;
        *n = v21;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        ++n;
      }
    }
  }
  v23 = (__int64 *)*((_QWORD *)this + 13);
  if ( v18 != v23 )
  {
    do
    {
      v24 = *v18;
      *v18 = 0LL;
      v25 = *n;
      *n = v24;
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      ++n;
      ++v18;
    }
    while ( v18 != v23 );
    v23 = (__int64 *)*((_QWORD *)this + 13);
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>>(n, v23);
  *((_QWORD *)this + 13) = n;
}
