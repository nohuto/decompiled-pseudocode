/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x180029CE0
 * Callers:
 *     ??0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x180092598 (--0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV-$vector@UItem@AgileRegistrationList@@V-$a.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D1AC (--2@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180120DE0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Ue.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Reallocate_exactly(
        __int64 **a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  _QWORD *v9; // r8
  char *result; // rax
  size_t v11; // rcx
  void *v12; // rax
  __int64 v13; // rax

  v4 = a1[1] - *a1;
  v5 = a2;
  v6 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v6 = -1LL;
  }
  else if ( v6 < 0x1000 )
  {
    if ( v6 )
      v2 = operator new(8 * a2);
    else
      v2 = 0LL;
LABEL_5:
    v7 = a1[1];
    v8 = *a1;
    v9 = v2;
    if ( *a1 == v7 )
      goto LABEL_6;
    goto LABEL_16;
  }
  v11 = v6 + 39;
  if ( v6 + 39 < v6 )
    v11 = -1LL;
  v12 = operator new(v11);
  if ( v12 )
  {
    v2 = (_QWORD *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v2 - 1) = v12;
    goto LABEL_5;
  }
  _o__invalid_parameter_noinfo_noreturn();
  do
  {
LABEL_16:
    v13 = *v8;
    *v8 = 0LL;
    *v9++ = v13;
    ++v8;
  }
  while ( v8 != v7 );
LABEL_6:
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>(
      *a1,
      a1[1],
      v9);
    std::_Deallocate<16,0>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v2;
  a1[1] = &v2[v4];
  result = (char *)&v2[v5];
  a1[2] = &v2[v5];
  return result;
}
