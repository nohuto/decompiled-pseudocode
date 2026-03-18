/*
 * XREFs of ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0004B20
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x1C00049A0 (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QE.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0005CF0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0005F44 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(DMMVIDPNTARGET *this, const struct DMMVIDPNTARGET *a2)
{
  int v2; // eax
  __int64 v4; // r13
  __int64 v6; // rax
  char *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 (__fastcall ***v11)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v12)(_QWORD); // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  char *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // r11
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rbp
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax

  v2 = *((_DWORD *)a2 + 6);
  v4 = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v2;
  if ( v2 == -1 )
  {
    v38 = WdLogNewEntry5_WdAssertion(&SetElement::`vftable', a2);
    *(_QWORD *)(v38 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v38);
  }
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  v6 = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 12) = v6;
  *((_DWORD *)this + 22) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 72));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4E506456u);
  v11 = (unsigned __int8 (__fastcall ***)(_QWORD))PoolWithTag;
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
    v11 = 0LL;
  }
  v12 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v11 != v12 && v12 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v12)[2])(v12, 1LL);
  *((_QWORD *)this + 15) = v11;
  if ( !v11 )
    goto LABEL_52;
  if ( !(**v11)(v11) )
  {
    v40 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v40 + 24) = this;
    *(_QWORD *)(v40 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v40);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    return this;
  }
  if ( !*((_QWORD *)a2 + 13) )
    goto LABEL_31;
  v13 = ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x4E506456u);
  v14 = v13;
  if ( v13 )
  {
    v15 = *((_QWORD *)a2 + 13);
    v13[1] = 0LL;
    v13[2] = 0LL;
    *v13 = &SetElement::`vftable';
    v13[3] = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
    *((_DWORD *)v13 + 10) = 0;
    v13[4] = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
    *((_DWORD *)v13 + 18) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v15 + 32))(v15 + 32)
      || !*(_QWORD *)(v15 + 48)
      || !*(_QWORD *)(v15 + 56) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v41 + 24) = 155LL;
      WdLogEvent5_WdAssertion(v41);
    }
    v18 = v14 + 6;
    v14[7] = v14 + 6;
    v19 = v15 + 48;
    v14[6] = v14 + 6;
    v14[8] = 0LL;
    v20 = *(_QWORD *)(v15 + 48);
    if ( v20 != v15 + 48 )
      v4 = v20 - 8;
    v21 = 0LL;
    if ( v4 )
    {
      while ( 1 )
      {
        v29 = (char *)ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x4B677844u);
        if ( !v29 )
          break;
        *((_QWORD *)v29 + 1) = 0LL;
        *((_QWORD *)v29 + 2) = 0LL;
        *(_QWORD *)v29 = &SetElement::`vftable';
        *((_DWORD *)v29 + 6) = *(_DWORD *)(v4 + 24);
        *(_OWORD *)(v29 + 72) = *(_OWORD *)(v4 + 72);
        *(_OWORD *)(v29 + 88) = *(_OWORD *)(v4 + 88);
        *(_OWORD *)(v29 + 104) = *(_OWORD *)(v4 + 104);
        *((_QWORD *)v29 + 15) = *(_QWORD *)(v4 + 120);
        *((_QWORD *)v29 + 5) = 0LL;
        *((_QWORD *)v29 + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
        *((_QWORD *)v29 + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
        *((_DWORD *)v29 + 14) = *(_DWORD *)(v4 + 56);
        *(_QWORD *)v29 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
        *((_QWORD *)v29 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
        *((_QWORD *)v29 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
        *((_QWORD *)v29 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
        *((_DWORD *)v29 + 32) = *(_DWORD *)(v4 + 128);
        *((_DWORD *)v29 + 33) = *(_DWORD *)(v4 + 132);
        *((_DWORD *)v29 + 34) = *(_DWORD *)(v4 + 136);
        if ( !(unsigned __int8)DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(v14 + 4) )
        {
          v34 = (_QWORD *)v14[7];
          if ( (_QWORD *)*v34 != v18 )
            __fastfail(3u);
          *v33 = v18;
          v33[1] = v34;
          *v34 = v33;
          v14[7] = v33;
          ++v14[8];
        }
        v35 = *(_QWORD *)(v4 + 8);
        v20 = v15 + 48;
        v4 = v35 - 8;
        if ( v35 == v15 + 48 )
          v4 = 0LL;
        if ( !v4 )
        {
          v21 = v14[8];
          goto LABEL_18;
        }
      }
      v42 = WdLogNewEntry5_WdLowResource(v30, 0LL, v31, v32);
      *(_QWORD *)(v42 + 24) = 172LL;
      WdLogEvent5_WdLowResource(v42);
      *((_DWORD *)v14 + 10) = -1073741801;
    }
    else
    {
LABEL_18:
      if ( v21 != *(_QWORD *)(v15 + 64) )
      {
        v43 = WdLogNewEntry5_WdAssertion(v20, v19);
        *(_QWORD *)(v43 + 24) = 186LL;
        WdLogEvent5_WdAssertion(v43);
      }
      *((_DWORD *)v14 + 18) = 2;
    }
    v14[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
    *((_DWORD *)v14 + 20) = 0;
    v14[11] = &ReferenceCounted::`vftable';
    *v14 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
    v14[3] = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
    v14[11] = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
    v14[13] = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
    v14[15] = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
    *((_DWORD *)v14 + 24) = 1;
    *((_BYTE *)v14 + 136) = 1;
    v14[14] = 0LL;
    *((_DWORD *)v14 + 32) = 1833173005;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v14[4])(v14 + 4) )
    {
      v23 = (_QWORD *)v14[6];
      if ( v23 != v14 + 6 )
      {
        v36 = v23 - 1;
        if ( v23 != (_QWORD *)8 )
        {
          do
          {
            if ( v36[5] )
            {
              v44 = WdLogNewEntry5_WdAssertion(v22, v8);
              WdLogEvent5_WdAssertion(v44);
            }
            v36[5] = v14;
            if ( !v36 )
            {
              v45 = WdLogNewEntry5_WdAssertion(v22, v8);
              WdLogEvent5_WdAssertion(v45);
            }
            v37 = (_QWORD *)v36[1];
            v36 = v37 - 1;
            if ( v37 == v14 + 6 )
              v36 = 0LL;
          }
          while ( v36 );
        }
      }
      v24 = *(_QWORD *)(v15 + 144);
      v14[18] = v24 ? IndexedSet<DMMVIDPNTARGETMODE>::FindById(v14 + 3, *(unsigned int *)(v24 + 24)) : 0LL;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)v14 + 10);
    }
  }
  else
  {
    v14 = 0LL;
  }
  v12 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 13);
  if ( v12 && v14 != v12 )
    ReferenceCounted::Release((ReferenceCounted *)(v12 + 11));
  *((_QWORD *)this + 13) = v14;
  if ( !v14 )
  {
LABEL_52:
    v39 = WdLogNewEntry5_WdLowResource(v12, v8, v9, v10);
    *(_QWORD *)(v39 + 24) = this;
    *(_QWORD *)(v39 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v39);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))v14[3])(v14 + 3) )
  {
    v46 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v46 + 24) = this;
    *(_QWORD *)(v46 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v46);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
    return this;
  }
  v27 = *((_QWORD *)this + 13);
  if ( *(_QWORD *)(v27 + 112) )
  {
    v47 = WdLogNewEntry5_WdAssertion(v26, v25);
    WdLogEvent5_WdAssertion(v47);
  }
  *(_QWORD *)(v27 + 112) = this;
LABEL_31:
  *((_DWORD *)this + 22) = 2;
  return this;
}
