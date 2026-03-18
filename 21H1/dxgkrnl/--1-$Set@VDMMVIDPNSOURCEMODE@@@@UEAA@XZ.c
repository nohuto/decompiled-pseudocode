/*
 * XREFs of ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C005B388
 * Callers:
 *     ??_G?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C005B460 (--_G-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C005B4B0 (--_E-$Set@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAXXZ @ 0x1C0014E10 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE.c)
 */

_QWORD *__fastcall Set<DMMVIDPNSOURCEMODE>::~Set<DMMVIDPNSOURCEMODE>(_QWORD *a1, __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  *a1 = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  v2 = (void (__fastcall ***)(_QWORD, __int64))(a1 + 1);
  *v2 = (void (__fastcall **)(_QWORD, __int64))&DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  return DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::Clear(v2, a2);
}
