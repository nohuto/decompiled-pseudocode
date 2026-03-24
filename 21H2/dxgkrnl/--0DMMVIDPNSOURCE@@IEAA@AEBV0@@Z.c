/*
 * XREFs of ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C00088BC
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x1C000874C (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QE.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0008C60 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(DMMVIDPNSOURCE *this, const struct DMMVIDPNSOURCE *a2)
{
  int v2; // eax
  DMMVIDPNSOURCEMODESET *PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  DMMVIDPNSOURCEMODESET *v9; // rdi
  DMMVIDPNSOURCEMODESET *v10; // rcx
  DMMVIDPNSOURCEMODESET *v11; // rax
  DMMVIDPNSOURCEMODESET *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rax

  v2 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v2;
  if ( v2 == -1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(&SetElement::`vftable', a2);
    *(_QWORD *)(v17 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v17);
  }
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_DWORD *)this + 14) = 1833173000;
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
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
  PoolWithTag = (DMMVIDPNSOURCEMODESET *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4E506456u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 2) = 0;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *(_QWORD *)PoolWithTag = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *((_QWORD *)PoolWithTag + 3) = (char *)PoolWithTag + 16;
    *((_QWORD *)PoolWithTag + 2) = (char *)PoolWithTag + 16;
    *((_DWORD *)PoolWithTag + 10) = 2;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 14);
  if ( v9 != v10 && v10 )
    (*(void (__fastcall **)(DMMVIDPNSOURCEMODESET *, __int64))(*(_QWORD *)v10 + 16LL))(v10, 1LL);
  *((_QWORD *)this + 14) = v9;
  if ( !v9 )
    goto LABEL_23;
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNSOURCEMODESET *))v9)(v9) )
  {
    v19 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v19);
    v20 = *(_DWORD *)(*((_QWORD *)this + 14) + 8LL);
    goto LABEL_26;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v11 = (DMMVIDPNSOURCEMODESET *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x4E506456u);
    if ( v11 )
      v12 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v11, *((const struct DMMVIDPNSOURCEMODESET **)a2 + 13));
    else
      v12 = 0LL;
    v10 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 13);
    if ( v10 && v12 != v10 )
      ReferenceCounted::Release((DMMVIDPNSOURCEMODESET *)((char *)v10 + 88), v6);
    *((_QWORD *)this + 13) = v12;
    if ( v12 )
    {
      if ( (**((unsigned __int8 (__fastcall ***)(__int64))v12 + 3))((__int64)v12 + 24) )
      {
        v15 = *((_QWORD *)this + 13);
        if ( *(_QWORD *)(v15 + 112) )
        {
          v22 = WdLogNewEntry5_WdAssertion(v14, v13);
          WdLogEvent5_WdAssertion(v22);
        }
        *(_QWORD *)(v15 + 112) = this;
        goto LABEL_19;
      }
      v21 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v21 + 24) = this;
      *(_QWORD *)(v21 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v21);
      v20 = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
LABEL_26:
      *((_DWORD *)this + 18) = v20;
      return this;
    }
LABEL_23:
    v18 = WdLogNewEntry5_WdLowResource(v10, v6, v7, v8);
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v18);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_19:
  *((_DWORD *)this + 22) = 2;
  return this;
}
