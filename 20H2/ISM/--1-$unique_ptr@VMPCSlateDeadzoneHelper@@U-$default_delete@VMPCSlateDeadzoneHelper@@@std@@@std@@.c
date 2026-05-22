/*
 * XREFs of ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x18007D100
 * Callers:
 *     _MPCHandProcessor::MPCHandProcessor_::_1_::dtor$1 @ 0x18007D089 (_MPCHandProcessor--MPCHandProcessor_--_1_--dtor$1.c)
 *     _MPCHandProcessor::MPCHandProcessor_::_1_::dtor$2 @ 0x18007D09C (_MPCHandProcessor--MPCHandProcessor_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(_QWORD **a1)
{
  _QWORD *v1; // rbx
  std::_Ref_count_base *v2; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (std::_Ref_count_base *)v1[3];
    if ( v2 )
      std::_Ref_count_base::_Decref(v2);
    operator delete(v1, (const struct std::nothrow_t *)0x20);
  }
}
