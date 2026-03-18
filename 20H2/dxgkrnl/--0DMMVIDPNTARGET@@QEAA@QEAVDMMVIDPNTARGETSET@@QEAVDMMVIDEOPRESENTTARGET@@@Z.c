/*
 * XREFs of ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0005518
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C010B228 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C010F170 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C00045C0 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETSET *const a2,
        struct DMMVIDEOPRESENTTARGET *const a3)
{
  int v3; // eax
  void **v7; // rcx
  char *PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 (__fastcall ***v12)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v13)(_QWORD); // rcx
  DMMVIDPNTARGETMODESET *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DMMVIDPNTARGETMODESET *v19; // rdi
  __int64 v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax

  v3 = *((_DWORD *)a3 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v7 = &SetElement::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v3;
  if ( v3 == -1 )
  {
    v22 = WdLogNewEntry5_WdAssertion(&SetElement::`vftable', a2);
    *(_QWORD *)(v22 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v22);
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
      v24 = WdLogNewEntry5_WdAssertion(v7, a2);
      WdLogEvent5_WdAssertion(v24);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v7, a2);
    *(_QWORD *)(v23 + 24) = (char *)this + 32;
    *(_QWORD *)(v23 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v23);
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4E506456u);
  v12 = (unsigned __int8 (__fastcall ***)(_QWORD))PoolWithTag;
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
    v12 = 0LL;
  }
  v13 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v12 != v13 && v13 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v13)[2])(v13, 1LL);
  *((_QWORD *)this + 15) = v12;
  if ( v12 )
  {
    if ( (**v12)(v12) )
    {
      while ( 1 )
      {
        v14 = (DMMVIDPNTARGETMODESET *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x4E506456u);
        v19 = v14 ? DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(v14, this) : 0LL;
        if ( v19 )
          break;
        v27 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
        WdLogEvent5_WdLowResource(v27);
        ZwYieldExecution();
      }
      v20 = *((_QWORD *)this + 13);
      if ( v20 && v19 != (DMMVIDPNTARGETMODESET *)v20 )
        ReferenceCounted::Release((ReferenceCounted *)(v20 + 88), v15);
      *((_QWORD *)this + 13) = v19;
      *((_DWORD *)this + 22) = 2;
    }
    else
    {
      v26 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v26 + 24) = this;
      *(_QWORD *)(v26 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v26);
      *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdLowResource(v13, v9, v10, v11);
    *(_QWORD *)(v25 + 24) = this;
    *(_QWORD *)(v25 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v25);
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
