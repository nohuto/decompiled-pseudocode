/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNTARGETMODE@@@@UEAAXXZ @ 0x1C005A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAXXZ @ 0x1C0059EEC (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRE.c)
 */

void __fastcall Set<DMMVIDPNTARGETMODE>::Clear(__int64 a1, __int64 a2)
{
  DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::Clear(a1 + 8, a2);
}
