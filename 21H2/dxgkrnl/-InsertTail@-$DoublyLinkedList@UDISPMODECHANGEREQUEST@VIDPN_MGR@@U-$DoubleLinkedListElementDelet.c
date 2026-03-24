/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000CAF8
 * Callers:
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000CA70 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<VIDPN_MGR::DISPMODECHANGEREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::DISPMODECHANGEREQUEST>>::InsertTail(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r9
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  char result; // al

  if ( a2 )
  {
    v3 = a1 + 2;
    v4 = 0LL;
    if ( (_QWORD *)*v3 != v3 )
      v4 = *v3 - 8LL;
    while ( v4 && v4 != a2 )
    {
      v5 = *(_QWORD **)(v4 + 8);
      v4 = (__int64)(v5 - 1);
      if ( v5 == v3 )
        v4 = 0LL;
    }
    if ( v4 )
      return 0;
  }
  v6 = (_QWORD *)(a2 + 8);
  v7 = (_QWORD *)a1[3];
  if ( (_QWORD *)*v7 != a1 + 2 )
    __fastfail(3u);
  *v6 = a1 + 2;
  v6[1] = v7;
  *v7 = v6;
  a1[3] = v6;
  result = 1;
  ++a1[4];
  return result;
}
