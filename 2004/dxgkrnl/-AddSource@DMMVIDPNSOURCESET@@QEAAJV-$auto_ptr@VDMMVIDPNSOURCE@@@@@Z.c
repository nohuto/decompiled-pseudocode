/*
 * XREFs of ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C01244D0
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C010C3A8 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B08 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C0009130 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURC.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C00091A8 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNSOURCESET::AddSource(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // r10
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax

  v2 = *a2;
  v3 = 0;
  if ( !*a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v17);
    v2 = *a2;
  }
  v6 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(a1, v2[6]);
  if ( v6 )
  {
    v13 = (v6 != v8) + 1;
  }
  else
  {
    v7 = a1 + 24;
    v9 = *(_QWORD *)(a1 + 24);
    if ( v9 == a1 + 24 )
      goto LABEL_11;
    v10 = v9 - 8;
    if ( !v10 )
      goto LABEL_11;
    do
    {
      if ( v10 == v8 )
        break;
      v11 = *(_QWORD *)(v10 + 8);
      v10 = v11 - 8;
      if ( v11 == v7 )
        v10 = 0LL;
    }
    while ( v10 );
    if ( v10 )
    {
      v13 = 1;
    }
    else
    {
LABEL_11:
      if ( DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::InsertTail(
             (_QWORD *)(a1 + 8),
             v8) != 1 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v12, v7);
        *(_QWORD *)(v18 + 24) = 108LL;
        WdLogEvent5_WdAssertion(v18);
      }
      v13 = 3;
    }
  }
  v14 = (unsigned int)(v13 - 1);
  if ( (_DWORD)v14 )
  {
    v15 = (unsigned int)(v14 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        *a2 = 0LL;
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v15, v7);
        WdLogEvent5_WdError(v19);
        v3 = -1073741823;
      }
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v15, v7);
      v20[3] = (*a2)[6];
      v20[4] = *a2;
      v20[5] = a1;
      WdLogEvent5_WdError(v20);
      v3 = -1071774927;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v14, v7);
    *(_QWORD *)(v21 + 24) = *a2;
    *(_QWORD *)(v21 + 32) = a1;
    WdLogEvent5_WdError(v21);
    v3 = -1071774953;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return v3;
}
