/*
 * XREFs of _RtlEnumerateGenericTable@8 @ 0x4B35E0A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSplay@4 @ 0x4B2E8250 (_RtlSplay@4.c)
 *     _RtlRealSuccessor@4 @ 0x4B35E030 (_RtlRealSuccessor@4.c)
 */

PVOID __cdecl RtlEnumerateGenericTable(PRTL_GENERIC_TABLE Table, BOOLEAN Restart)
{
  PRTL_SPLAY_LINKS TableRoot; // esi

  TableRoot = Table->TableRoot;
  if ( !Table->TableRoot )
    return 0;
  if ( Restart )
  {
    while ( TableRoot->LeftChild )
      TableRoot = TableRoot->LeftChild;
    goto LABEL_5;
  }
  TableRoot = RtlRealSuccessor(TableRoot);
  if ( TableRoot )
LABEL_5:
    Table->TableRoot = RtlSplay(TableRoot);
  return TableRoot != 0 ? &TableRoot[2] : 0;
}
