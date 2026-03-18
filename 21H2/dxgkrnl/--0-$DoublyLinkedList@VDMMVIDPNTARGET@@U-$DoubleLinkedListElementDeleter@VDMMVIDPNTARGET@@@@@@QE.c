/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x1C000CE30
 * Callers:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C000FCA4 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C000CFC0 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r9
  _QWORD *v5; // rbx
  __int64 v6; // rax
  const struct DMMVIDPNTARGET *v7; // rdi
  __int64 v8; // rax
  DMMVIDPNTARGET *Pool2; // rax
  DMMVIDPNTARGET *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    WdLogSingleEntry1(1LL, 155LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v18,
          v17,
          v19,
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
    v8 = 0LL;
LABEL_20:
    if ( v8 != *(_QWORD *)(a2 + 32) )
    {
      WdLogSingleEntry1(1LL, 186LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v24,
            v23,
            v25,
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
  v7 = (const struct DMMVIDPNTARGET *)(v6 - 8);
  v8 = 0LL;
  if ( !v7 )
    goto LABEL_20;
  while ( 1 )
  {
    Pool2 = (DMMVIDPNTARGET *)ExAllocatePool2(256LL, 128LL, 1265072196LL, v4);
    if ( !Pool2 )
      break;
    v10 = DMMVIDPNTARGET::DMMVIDPNTARGET(Pool2, v7);
    if ( !v10 )
      break;
    if ( (_QWORD *)*v5 == v5 || (v11 = *v5 - 8LL, *v5 == 8LL) )
    {
LABEL_14:
      v13 = *(_QWORD **)(a1 + 24);
      v14 = (_QWORD *)((char *)v10 + 8);
      if ( (_QWORD *)*v13 != v5 )
        __fastfail(3u);
      *v14 = v5;
      v14[1] = v13;
      *v13 = v14;
      *(_QWORD *)(a1 + 24) = v14;
      ++*(_QWORD *)(a1 + 32);
    }
    else
    {
      while ( (DMMVIDPNTARGET *)v11 != v10 )
      {
        v12 = *(_QWORD **)(v11 + 8);
        v11 = (__int64)(v12 - 1);
        if ( v12 == v5 )
          v11 = 0LL;
        if ( !v11 )
          goto LABEL_14;
      }
    }
    v15 = *((_QWORD *)v7 + 1);
    v7 = (const struct DMMVIDPNTARGET *)(v15 - 8);
    if ( v15 == a2 + 16 )
      v7 = 0LL;
    if ( !v7 )
    {
      v8 = *(_QWORD *)(a1 + 32);
      goto LABEL_20;
    }
  }
  WdLogSingleEntry1(6LL, 172LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
      v21,
      v20,
      v22,
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
