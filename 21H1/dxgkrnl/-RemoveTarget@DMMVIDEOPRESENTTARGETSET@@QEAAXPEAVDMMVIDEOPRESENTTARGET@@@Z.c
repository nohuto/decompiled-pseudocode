/*
 * XREFs of ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C005B2C0
 * Callers:
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E154C (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000D880 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0022BF8 (-FindByValue@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGETSET::RemoveTarget(
        DMMVIDEOPRESENTTARGETSET ***this,
        struct DMMVIDEOPRESENTTARGET *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r11
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  DMMVIDEOPRESENTTARGETSET **v10; // rdx
  DMMVIDEOPRESENTTARGETSET *v11; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = Set<DMMVIDEOPRESENTTARGET>::FindByValue((__int64)this, (__int64)a2);
  if ( DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
         (__int64)(this + 1),
         v5) )
  {
    v7 = (_QWORD *)(v6 + 8);
    v8 = *(_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v8 + 8) != v6 + 8 || (v9 = *(_QWORD **)(v6 + 16), (_QWORD *)*v9 != v7) )
LABEL_8:
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *v7 = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    this[5] = (DMMVIDEOPRESENTTARGETSET **)((char *)this[5] - 1);
  }
  v10 = this[15];
  v11 = (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 512);
  if ( *v10 != (DMMVIDEOPRESENTTARGETSET *)(this + 14) )
    goto LABEL_8;
  *(_QWORD *)v11 = this + 14;
  *((_QWORD *)a2 + 65) = v10;
  *v10 = v11;
  this[15] = (DMMVIDEOPRESENTTARGETSET **)v11;
  ReferenceCounted::Release((struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 64), (__int64)v10);
}
