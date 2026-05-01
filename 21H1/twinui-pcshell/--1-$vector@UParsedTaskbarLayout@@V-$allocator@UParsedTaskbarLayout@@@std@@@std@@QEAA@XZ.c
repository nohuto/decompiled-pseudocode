/*
 * XREFs of ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18017D92C
 * Callers:
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$2 @ 0x18017EE09 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$2.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$7 @ 0x180204A97 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$7.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@0AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18017CFAC (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@0AE.c)
 */

void __fastcall std::vector<ParsedTaskbarLayout>::~vector<ParsedTaskbarLayout>(__int64 *a1)
{
  void *v1; // rdi

  v1 = (void *)*a1;
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(*a1, a1[1]);
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)(136 * ((a1[2] - (__int64)v1) / 136)));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
