/*
 * XREFs of ??_E?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@UEAAPEAXI@Z @ 0x1C005B770
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAXXZ @ 0x1C0018544 (-Clear@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNPRESE.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::`vector deleting destructor'(
        _QWORD *P,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  *P = &DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::`vftable';
  DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::Clear((__int64)P, a2);
  if ( (v2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
