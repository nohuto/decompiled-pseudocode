/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C0009130
 * Callers:
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C01244D0 (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::InsertTail(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  char result; // al
  _QWORD *v8; // rax

  if ( a2 )
  {
    v3 = a1 + 2;
    v4 = 0LL;
    if ( (_QWORD *)*v3 != v3 )
      v4 = *v3 - 8LL;
    while ( v4 && v4 != a2 )
    {
      v8 = *(_QWORD **)(v4 + 8);
      v4 = (__int64)(v8 - 1);
      if ( v8 == v3 )
        v4 = 0LL;
    }
    if ( v4 )
      return 0;
  }
  v5 = (_QWORD *)(a2 + 8);
  v6 = (_QWORD *)a1[3];
  if ( (_QWORD *)*v6 != a1 + 2 )
    __fastfail(3u);
  *v5 = a1 + 2;
  v5[1] = v6;
  *v6 = v5;
  a1[3] = v5;
  result = 1;
  ++a1[4];
  return result;
}
