/*
 * XREFs of ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000AC20
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C01105C8 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0129070 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C000AEDC (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETSET *const a2,
        struct DMMVIDEOPRESENTTARGET *const a3)
{
  int v3; // eax
  void **v7; // rcx
  char *PoolWithTag; // rax
  unsigned __int8 (__fastcall ***v9)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v10)(_QWORD); // rcx
  DMMVIDPNTARGETMODESET *v11; // rax
  DMMVIDPNTARGETMODESET *v12; // rdi
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v3 = *((_DWORD *)a3 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v7 = &SetElement::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v3;
  if ( v3 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(&SetElement::`vftable', a2);
    *(_QWORD *)(v15 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 22) = 1;
  *((_QWORD *)this + 12) = a3;
  _InterlockedIncrement((volatile signed __int32 *)a3 + 18);
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v7, a2);
      WdLogEvent5_WdAssertion(v17);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v7, a2);
    *(_QWORD *)(v16 + 24) = (char *)this + 32;
    *(_QWORD *)(v16 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v16);
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4E506456u);
  v9 = (unsigned __int8 (__fastcall ***)(_QWORD))PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 2) = 0;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *(_QWORD *)PoolWithTag = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 16;
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 16;
    *((_DWORD *)PoolWithTag + 10) = 2;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v9 != v10 && v10 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v10)[2])(v10, 1LL);
  *((_QWORD *)this + 15) = v9;
  if ( v9 )
  {
    if ( (**v9)(v9) )
    {
      while ( 1 )
      {
        v11 = (DMMVIDPNTARGETMODESET *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x4E506456u);
        v12 = v11 ? DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(v11, this) : 0LL;
        if ( v12 )
          break;
        v20 = WdLogNewEntry5_WdLowResource();
        WdLogEvent5_WdLowResource(v20);
        ZwYieldExecution();
      }
      v13 = *((_QWORD *)this + 13);
      if ( v13 && v12 != (DMMVIDPNTARGETMODESET *)v13 )
        ReferenceCounted::Release((ReferenceCounted *)(v13 + 88));
      *((_QWORD *)this + 13) = v12;
      *((_DWORD *)this + 22) = 2;
    }
    else
    {
      v19 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v19 + 24) = this;
      *(_QWORD *)(v19 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v19);
      *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v18);
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
