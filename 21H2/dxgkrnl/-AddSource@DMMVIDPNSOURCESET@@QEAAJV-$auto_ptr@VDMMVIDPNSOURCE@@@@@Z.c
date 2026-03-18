/*
 * XREFs of ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C01A9A24
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C018A4B0 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C00116D8 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURC.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C0011748 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNSOURCESET::AddSource(__int64 a1, __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  unsigned int *v2; // r10
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = (unsigned int *)*a2;
  if ( !*a2 )
  {
    WdLogSingleEntry0(1LL);
    v2 = (unsigned int *)*a2;
  }
  v5 = IndexedSet<DMMVIDPNSOURCE>::FindById(a1, v2[6]);
  if ( v5 )
  {
    if ( v5 != v6 )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)*a2 + 6), *a2, a1);
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(a2);
      return 3223192369LL;
    }
    goto LABEL_15;
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 != a1 + 24 )
  {
    v8 = v7 - 8;
    if ( v8 )
    {
      while ( v8 != v6 )
      {
        v9 = *(_QWORD *)(v8 + 8);
        v8 = v9 - 8;
        if ( v9 == a1 + 24 )
          v8 = 0LL;
        if ( !v8 )
          goto LABEL_10;
      }
LABEL_15:
      WdLogSingleEntry2(2LL, *a2, a1);
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(a2);
      return 3223192343LL;
    }
  }
LABEL_10:
  if ( DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::InsertTail(
         (_QWORD *)(a1 + 8),
         v6) != 1 )
  {
    WdLogSingleEntry1(1LL, 108LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a2 = 0LL;
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(a2);
  return 0LL;
}
