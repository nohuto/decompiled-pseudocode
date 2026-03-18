/*
 * XREFs of ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x1C0008244
 * Callers:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ @ 0x1C00081B4 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ.c)
 *     ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0018B48 (-CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCEMODESET *__fastcall DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(
        DMMVIDPNSOURCEMODESET *this,
        struct DMMVIDPNSOURCE *a2)
{
  char *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 8) = 0LL;
  v4 = (char *)this + 32;
  *(_QWORD *)v4 = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  *((_QWORD *)v4 + 3) = v4 + 16;
  *((_QWORD *)v4 + 2) = v4 + 16;
  *((_DWORD *)v4 + 10) = 2;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 3) = &IndexedSet<DMMVIDPNSOURCEMODE>::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 15) = &DMMVIDPNSOURCEMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODESET>'};
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_DWORD *)this + 32) = 1833173004;
  if ( (**((unsigned __int8 (***)(void))this + 4))() )
  {
    if ( a2 && *((_QWORD *)this + 14) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v8);
    }
    *((_QWORD *)this + 14) = a2;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
