/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x1C00049A0
 * Callers:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C0008410 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0004B20 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  const struct DMMVIDPNTARGET *v9; // rsi
  DMMVIDPNTARGET *PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DMMVIDPNTARGET *v14; // r9
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // r9
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v20 + 24) = 155LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v7 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 == a2 + 16 || (v9 = (const struct DMMVIDPNTARGET *)(v8 - 8), v8 == 8) )
  {
LABEL_22:
    if ( v3 != *(_QWORD *)(a2 + 32) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v22 + 24) = 186LL;
      WdLogEvent5_WdAssertion(v22);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      PoolWithTag = (DMMVIDPNTARGET *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x4B677844u);
      if ( !PoolWithTag )
        break;
      v14 = DMMVIDPNTARGET::DMMVIDPNTARGET(PoolWithTag, v9);
      if ( !v14 )
        break;
      v6 = 0LL;
      v5 = *v7 - 8LL;
      if ( (_QWORD *)*v7 != v7 )
        v6 = *v7 - 8LL;
      if ( !v6 )
        goto LABEL_16;
      do
      {
        if ( (DMMVIDPNTARGET *)v6 == v14 )
          break;
        v15 = *(_QWORD **)(v6 + 8);
        v6 = (__int64)(v15 - 1);
        if ( v15 == v7 )
          v6 = 0LL;
      }
      while ( v6 );
      if ( !v6 )
      {
LABEL_16:
        v16 = *(_QWORD **)(a1 + 24);
        v17 = (_QWORD *)((char *)v14 + 8);
        if ( (_QWORD *)*v16 != v7 )
          __fastfail(3u);
        *v17 = v7;
        v17[1] = v16;
        *v16 = v17;
        *(_QWORD *)(a1 + 24) = v17;
        ++*(_QWORD *)(a1 + 32);
      }
      v18 = *((_QWORD *)v9 + 1);
      v9 = (const struct DMMVIDPNTARGET *)(v18 - 8);
      if ( v18 == a2 + 16 )
        v9 = 0LL;
      if ( !v9 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        goto LABEL_22;
      }
    }
    v21 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    *(_QWORD *)(v21 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v21);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
