/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C000D670
 * Callers:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0010220 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r9
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rdi
  __int64 Pool2; // rax
  __int64 v11; // rdx
  _QWORD *v12; // r8
  int v13; // ecx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // r8d

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    WdLogSingleEntry1(1LL, 155LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v19,
          v18,
          v20,
          0,
          2,
          -1,
          (__int64)L"i_rList.IsValid()",
          155LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v5 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 == a2 + 16 )
  {
    v7 = 0LL;
    goto LABEL_6;
  }
  v9 = v6 - 8;
  v7 = 0LL;
  if ( !v9 )
  {
LABEL_6:
    if ( v7 != *(_QWORD *)(a2 + 32) )
    {
      WdLogSingleEntry1(1LL, 186LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v25,
            v24,
            v26,
            0,
            2,
            -1,
            (__int64)L"this->GetNumElements() == i_rList.GetNumElements()",
            186LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    *(_DWORD *)(a1 + 40) = 2;
    return a1;
  }
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(256LL, 112LL, 1265072196LL, v4);
    v11 = Pool2;
    if ( !Pool2 )
      break;
    *(_QWORD *)Pool2 = &SetElement::`vftable';
    v12 = (_QWORD *)(Pool2 + 8);
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    v13 = *(_DWORD *)(v9 + 24);
    *(_QWORD *)(Pool2 + 32) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_DWORD *)(Pool2 + 24) = v13;
    *(_QWORD *)(Pool2 + 48) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
    *(_DWORD *)(Pool2 + 56) = *(_DWORD *)(v9 + 56);
    *(_QWORD *)Pool2 = &DMMVIDPNSOURCEMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *(_QWORD *)(Pool2 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *(_QWORD *)(Pool2 + 48) = &DMMVIDPNSOURCEMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODE>'};
    *(_QWORD *)(Pool2 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    *(_DWORD *)(Pool2 + 72) = *(_DWORD *)(v9 + 72);
    *(_OWORD *)(Pool2 + 76) = *(_OWORD *)(v9 + 76);
    *(_OWORD *)(Pool2 + 92) = *(_OWORD *)(v9 + 92);
    if ( (_QWORD *)*v5 == v5 || (v14 = *v5 - 8LL, *v5 == 8LL) )
    {
LABEL_17:
      v16 = *(_QWORD **)(a1 + 24);
      if ( (_QWORD *)*v16 != v5 )
        __fastfail(3u);
      *v12 = v5;
      v12[1] = v16;
      *v16 = v12;
      *(_QWORD *)(a1 + 24) = v12;
      ++*(_QWORD *)(a1 + 32);
    }
    else
    {
      while ( v14 != v11 )
      {
        v15 = *(_QWORD **)(v14 + 8);
        v14 = (__int64)(v15 - 1);
        if ( v15 == v5 )
          v14 = 0LL;
        if ( !v14 )
          goto LABEL_17;
      }
    }
    v17 = *(_QWORD *)(v9 + 8);
    v9 = v17 - 8;
    if ( v17 == a2 + 16 )
      v9 = 0LL;
    if ( !v9 )
    {
      v7 = *(_QWORD *)(a1 + 32);
      goto LABEL_6;
    }
  }
  WdLogSingleEntry1(6LL, 172LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
      v22,
      v21,
      v23,
      0,
      1,
      -1,
      (__int64)L"Failed to allocate memory for doubly linked list element",
      172LL,
      0LL,
      0LL,
      0LL,
      0LL);
  *(_DWORD *)(a1 + 8) = -1073741801;
  return a1;
}
