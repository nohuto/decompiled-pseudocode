/*
 * XREFs of ?IsConstructed@?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@UEBAEXZ @ 0x1C00177C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::IsConstructed(
        __int64 a1)
{
  return *(_DWORD *)(a1 + 40) == 2;
}
