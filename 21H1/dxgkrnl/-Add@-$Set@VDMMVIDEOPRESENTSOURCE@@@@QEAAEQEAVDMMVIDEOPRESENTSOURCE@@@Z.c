/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0022FD8
 * Callers:
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C0182A30 (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0023070 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDelete.c)
 */

char __fastcall Set<DMMVIDEOPRESENTSOURCE>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r11
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 v11; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 != a1 + 24 )
  {
    v3 -= 8LL;
    if ( v3 )
    {
      do
      {
        if ( v3 == a2 )
          break;
        v4 = *(_QWORD *)(v3 + 8);
        v3 = v4 - 8;
        if ( v4 == a1 + 24 )
          v3 = 0LL;
      }
      while ( v3 );
      if ( v3 )
        return 0;
    }
  }
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::ContainsByReference(
                          a1 + 8,
                          a2,
                          v3) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v11 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v11);
  }
  else
  {
    v8 = *(_QWORD **)(v7 + 24);
    v9 = (_QWORD *)(a2 + 8);
    if ( *v8 != v7 + 16 )
      __fastfail(3u);
    *v9 = v7 + 16;
    *(_QWORD *)(a2 + 16) = v8;
    *v8 = v9;
    *(_QWORD *)(v7 + 24) = v9;
    ++*(_QWORD *)(v7 + 32);
  }
  return 1;
}
