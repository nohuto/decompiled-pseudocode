/*
 * XREFs of ??_G?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@UEAAPEAXI@Z @ 0x1C005C710
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAXXZ @ 0x1C0016440 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@.c)
 */

void (__fastcall ***__fastcall DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`scalar deleting destructor'(
        void (__fastcall ***P)(_QWORD, __int64),
        __int64 a2))(_QWORD, __int64)
{
  char v2; // bl

  v2 = a2;
  *P = (void (__fastcall **)(_QWORD, __int64))&DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::Clear(P, a2);
  if ( (v2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
