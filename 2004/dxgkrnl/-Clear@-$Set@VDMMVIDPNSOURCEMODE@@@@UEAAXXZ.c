/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAXXZ @ 0x1C005C580
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAXXZ @ 0x1C0014780 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE.c)
 */

_QWORD *__fastcall Set<DMMVIDPNSOURCEMODE>::Clear(__int64 a1, __int64 a2)
{
  return DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::Clear(
           (void (__fastcall ***)(_QWORD, __int64))(a1 + 8),
           a2);
}
