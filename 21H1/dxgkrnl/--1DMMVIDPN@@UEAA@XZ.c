/*
 * XREFs of ??1DMMVIDPN@@UEAA@XZ @ 0x1C01295F4
 * Callers:
 *     ??_EDMMVIDPN@@UEAAPEAXI@Z @ 0x1C0010200 (--_EDMMVIDPN@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C0010280 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C0010310 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0010360 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x1C001038C (--1DMMVIDPNTOPOLOGY@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DMMVIDPN::~DMMVIDPN(DMMVIDPN *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r11
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax

  v3 = *((_QWORD *)this + 6);
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  if ( v3 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*(_QWORD *)(v3 + 40) + 16LL) != CurrentThread )
    {
      v21 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
      WdLogEvent5_WdAssertion(v21);
    }
    v6 = Set<DMMVIDPN>::FindByValue(v3 + 96, (__int64)this);
    if ( DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(v3 + 104, v6) )
    {
      v8 = (_QWORD *)(v11 + 8);
      v7 = *(_QWORD *)(v11 + 8);
      if ( *(_QWORD *)(v7 + 8) != v11 + 8 || (v12 = *(_QWORD **)(v11 + 16), (_QWORD *)*v12 != v8) )
        __fastfail(3u);
      *v12 = v7;
      *(_QWORD *)(v7 + 8) = v12;
      *v8 = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      --*(_QWORD *)(v3 + 136);
    }
    v13 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    *(_QWORD *)(v13 + 32) = v3;
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = this;
  }
  else
  {
    v22 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdWarning(v22);
  }
  v18 = *((_QWORD *)this + 39);
  if ( v18 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 16LL))(v18, 1LL);
  v19 = *((_QWORD *)this + 38);
  if ( v19 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 16LL))(v19, 1LL);
  DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96));
  *((_DWORD *)this + 16) |= 0x6D640000u;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted((DMMVIDPN *)((char *)this + 24), v20);
  *(_QWORD *)this = &SetElement::`vftable';
}
