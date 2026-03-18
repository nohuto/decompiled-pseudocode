/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAXXZ @ 0x1C006A590
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAXXZ @ 0x1C0016FF0 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE.c)
 */

__int64 __fastcall Set<DMMVIDPNSOURCEMODE>::Clear(__int64 a1)
{
  return DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::Clear(a1 + 8);
}
