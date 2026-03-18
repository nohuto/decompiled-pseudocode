/*
 * XREFs of ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C001D9AC
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C018A4B0 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C0011444 (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTARGETSET *__fastcall DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(DMMVIDPNTARGETSET *this, struct DMMVIDPN *const a2)
{
  _QWORD *v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 2;
  v3 = (_QWORD *)((char *)this + 8);
  *v3 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  v3[3] = v3 + 2;
  v3[2] = v3 + 2;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGETSET::`vftable'{for `IndexedSet<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNTARGETSET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGETSET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETSET>'};
  *((_DWORD *)this + 22) = 1833172999;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))*v3)(v3) )
    ContainedBy<DMMVIDPN>::SetContainer((__int64)this + 64, (__int64)a2);
  else
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5) + 24) = *((int *)this + 4);
  return this;
}
