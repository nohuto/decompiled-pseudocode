/*
 * XREFs of ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C005A01C
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C005A1C0 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??_E?$Set@VDMMVIDPN@@@@UEAAPEAXI@Z @ 0x1C005AAD0 (--_E-$Set@VDMMVIDPN@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAXXZ @ 0x1C005AF54 (-Clear@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAXXZ.c)
 */

__int64 __fastcall Queue<DMMVIDPN>::~Queue<DMMVIDPN>(_QWORD *a1)
{
  *a1 = &Set<DMMVIDPN>::`vftable';
  a1[1] = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  return DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::Clear();
}
