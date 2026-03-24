/*
 * XREFs of ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C00090C0
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C010D698 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0111980 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0ProtectableFromChange@@QEAA@EE@Z @ 0x1C00091A4 (--0ProtectableFromChange@@QEAA@EE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTOPOLOGY *__fastcall DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY(
        DMMVIDPNTOPOLOGY *this,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  unsigned __int8 (__fastcall ***v3)(_QWORD); // rdi
  unsigned __int8 (__fastcall **v5)(_QWORD); // rax
  __int64 v7; // rax
  __int64 v8; // rcx

  v3 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 8);
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &Set<DMMVIDPNPRESENTPATH>::`vftable';
  *((_QWORD *)this + 1) = &DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::`vftable';
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_DWORD *)this + 12) = 2;
  *((_BYTE *)this + 192) = 1;
  ProtectableFromChange::ProtectableFromChange((DMMVIDPNTOPOLOGY *)((char *)this + 56), a2, a3);
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 49) = 0;
  *(_QWORD *)this = &DMMVIDPNTOPOLOGY::`vftable'{for `Set<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 7) = &DMMVIDPNTOPOLOGY::`vftable'{for `ProtectableFromChange'};
  *((_QWORD *)this + 20) = &DMMVIDPNTOPOLOGY::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 22) = &DMMVIDPNTOPOLOGY::`vftable'{for `SignedWithClassSignature<DMMVIDPNTOPOLOGY>'};
  *((_DWORD *)this + 46) = 1833173002;
  v5 = *v3;
  *((_BYTE *)this + 200) = 0;
  if ( !(*v5)(v3) )
  {
    v7 = WdLogNewEntry5_WdTrace();
    v8 = *((int *)this + 4);
LABEL_6:
    *(_QWORD *)(v7 + 24) = v8;
    return this;
  }
  if ( *((_DWORD *)this + 18) != 2 )
  {
    v7 = WdLogNewEntry5_WdTrace();
    v8 = *((int *)this + 16);
    goto LABEL_6;
  }
  return this;
}
