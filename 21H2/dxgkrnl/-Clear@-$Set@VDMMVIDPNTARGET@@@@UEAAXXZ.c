/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNTARGET@@@@UEAAXXZ @ 0x1C006AA80
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAXXZ @ 0x1C0018EA4 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@.c)
 */

char __fastcall Set<DMMVIDPNTARGET>::Clear(__int64 a1)
{
  return DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::Clear(a1 + 8);
}
