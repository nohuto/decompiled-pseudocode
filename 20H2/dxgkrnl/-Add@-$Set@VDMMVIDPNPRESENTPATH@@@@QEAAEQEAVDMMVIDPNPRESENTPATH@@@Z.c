/*
 * XREFs of ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0007D8C
 * Callers:
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0120FD8 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C0007DFC (-FindByValue@-$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAEQEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0007E58 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U-$DoubleLinkedListElementDeleter@.c)
 */

char __fastcall Set<DMMVIDPNPRESENTPATH>::Add(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v9; // rax

  if ( Set<DMMVIDPNPRESENTPATH>::FindByValue() )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::ContainsByReference(
                          a1 + 8,
                          a2) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v9 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v9);
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 32);
    v7 = (_QWORD *)(a2 + 8);
    if ( *v6 != a1 + 24 )
      __fastfail(3u);
    *v7 = a1 + 24;
    *(_QWORD *)(a2 + 16) = v6;
    *v6 = v7;
    *(_QWORD *)(a1 + 32) = v7;
    ++*(_QWORD *)(a1 + 40);
  }
  return 1;
}
