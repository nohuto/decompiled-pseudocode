/*
 * XREFs of RtlLookupElementGenericTable @ 0x180065320
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x180065368 (FindNodeOrParent_0.c)
 *     RtlSplay @ 0x180065400 (RtlSplay.c)
 */

PVOID __cdecl RtlLookupElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS v3; // rbx
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent_0(Table, Buffer, &Links) != 1 )
    return 0LL;
  v3 = Links;
  Table->TableRoot = RtlSplay(Links);
  return &v3[1].RightChild;
}
