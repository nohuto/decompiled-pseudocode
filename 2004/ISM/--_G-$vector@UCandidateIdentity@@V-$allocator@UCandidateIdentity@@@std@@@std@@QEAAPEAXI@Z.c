/*
 * XREFs of ??_G?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAXI@Z @ 0x1801788F4
 * Callers:
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x18017BB38 (-Reset@EdgyImpl@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@0AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x18017809C (--$_Destroy_range@V-$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@0AEAV-$.c)
 */

CandidateIdentity **__fastcall std::vector<CandidateIdentity>::`scalar deleting destructor'(CandidateIdentity **a1)
{
  CandidateIdentity *v1; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<CandidateIdentity>>(*a1, a1[1]);
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)(40 * ((a1[2] - v1) / 40)));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
