/*
 * XREFs of ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C00091C4
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C010C3A8 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ @ 0x1C00081B4 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@Z @ 0x1C000934C (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDeleter@.c)
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C0009384 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(
        DMMVIDPNSOURCE *this,
        struct DMMVIDPNSOURCESET *const a2,
        struct DMMVIDEOPRESENTSOURCE *const a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, *((unsigned int *)a3 + 6));
  *((_QWORD *)this + 12) = a3;
  *((_DWORD *)this + 14) = 1833173000;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 5) = 0LL;
  v8 = (_QWORD *)((char *)this + 112);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 3;
  *((_DWORD *)this + 22) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v15);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v14 + 24) = (char *)this + 32;
    *(_QWORD *)(v14 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v14);
  }
  v9 = operator new[](0x30uLL, 0x4E506456u, PagedPool);
  if ( v9 )
  {
    v9[2] = 0;
    *(_QWORD *)v9 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *((_QWORD *)v9 + 3) = v9 + 4;
    *((_QWORD *)v9 + 2) = v9 + 4;
    *((_QWORD *)v9 + 4) = 0LL;
    v9[10] = 2;
  }
  else
  {
    v9 = 0LL;
  }
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
    (char *)this + 112,
    v9);
  if ( *v8 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(_QWORD))*v8)(*v8) )
    {
      DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(this);
      *((_DWORD *)this + 22) = 2;
    }
    else
    {
      v17 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v17 + 24) = this;
      *(_QWORD *)(v17 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v17);
      *((_DWORD *)this + 18) = *(_DWORD *)(*v8 + 8LL);
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(0LL, v10, v11, v12);
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v16);
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
