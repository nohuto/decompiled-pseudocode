/*
 * XREFs of ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C006A428
 * Callers:
 *     ??_G?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C006A4F0 (--_G-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C006A540 (--_E-$Set@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAXXZ @ 0x1C0016FF0 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE.c)
 */

__int64 __fastcall Set<DMMVIDPNSOURCEMODE>::~Set<DMMVIDPNSOURCEMODE>(_QWORD *a1)
{
  _QWORD *v1; // rcx

  *a1 = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  v1 = a1 + 1;
  *v1 = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  return DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::Clear((__int64)v1);
}
