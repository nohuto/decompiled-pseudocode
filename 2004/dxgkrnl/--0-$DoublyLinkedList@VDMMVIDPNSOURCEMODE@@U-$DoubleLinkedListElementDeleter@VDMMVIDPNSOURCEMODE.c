/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C0005240
 * Callers:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C00089B0 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  _QWORD *v15; // r8
  _QWORD *v16; // r9
  int v17; // ecx
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v21 + 24) = 155LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v7 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  v8 = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 != a2 + 16 )
    v8 = v9 - 8;
  if ( v8 )
  {
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x4B677844u);
      v15 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      *PoolWithTag = &SetElement::`vftable';
      v16 = PoolWithTag + 1;
      PoolWithTag[2] = 0LL;
      PoolWithTag[1] = 0LL;
      v17 = *(_DWORD *)(v8 + 24);
      PoolWithTag[4] = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
      PoolWithTag[5] = 0LL;
      *((_DWORD *)PoolWithTag + 6) = v17;
      PoolWithTag[6] = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
      *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)(v8 + 56);
      *PoolWithTag = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
      PoolWithTag[4] = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
      PoolWithTag[6] = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
      PoolWithTag[8] = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
      *((_DWORD *)PoolWithTag + 18) = *(_DWORD *)(v8 + 72);
      v18 = 0LL;
      *(_OWORD *)((char *)v15 + 76) = *(_OWORD *)(v8 + 76);
      *(_OWORD *)((char *)v15 + 92) = *(_OWORD *)(v8 + 92);
      v5 = (_QWORD *)*v7;
      v9 = *v7 - 8LL;
      if ( (_QWORD *)*v7 != v7 )
        v18 = *v7 - 8LL;
      if ( !v18 )
        goto LABEL_20;
      do
      {
        if ( (_QWORD *)v18 == v15 )
          break;
        v9 = *(_QWORD *)(v18 + 8);
        v18 = v9 - 8;
        if ( (_QWORD *)v9 == v7 )
          v18 = 0LL;
      }
      while ( v18 );
      if ( !v18 )
      {
LABEL_20:
        v19 = *(_QWORD **)(a1 + 24);
        if ( (_QWORD *)*v19 != v7 )
          __fastfail(3u);
        *v16 = v7;
        v16[1] = v19;
        *v19 = v16;
        *(_QWORD *)(a1 + 24) = v16;
        ++*(_QWORD *)(a1 + 32);
      }
      v20 = *(_QWORD *)(v8 + 8);
      v8 = v20 - 8;
      if ( v20 == a2 + 16 )
        v8 = 0LL;
      if ( !v8 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        goto LABEL_7;
      }
    }
    v22 = WdLogNewEntry5_WdLowResource(v13, v12, 0LL, v14);
    *(_QWORD *)(v22 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v22);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  else
  {
LABEL_7:
    if ( v3 != *(_QWORD *)(a2 + 32) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v9, v5);
      *(_QWORD *)(v23 + 24) = 186LL;
      WdLogEvent5_WdAssertion(v23);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  return a1;
}
