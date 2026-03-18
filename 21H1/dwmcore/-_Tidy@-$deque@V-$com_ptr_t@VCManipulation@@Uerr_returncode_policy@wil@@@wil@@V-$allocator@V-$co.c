/*
 * XREFs of ?_Tidy@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1801D1464
 * Callers:
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x18021491C (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180214CD4 (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?pop_back@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801D14DC (-pop_back@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

void __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  void *v4; // rcx

  while ( a1[4] )
    std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::pop_back(a1);
  v2 = a1[2];
  while ( v2 )
  {
    --v2;
    v3 = *(void **)(a1[1] + 8 * v2);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x10uLL);
  }
  v4 = (void *)a1[1];
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8LL * a1[2]);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
