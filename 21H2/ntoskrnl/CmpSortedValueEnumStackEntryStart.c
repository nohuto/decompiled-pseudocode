/*
 * XREFs of CmpSortedValueEnumStackEntryStart @ 0x14087B888
 * Callers:
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087BA5C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpSortedValueEnumStackEntryStart(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  size_t v6; // rbp
  unsigned int v7; // ebx
  struct _LOOKASIDE_LIST_EX *v8; // r9
  struct _PRIVILEGE_SET *v9; // rdi
  _QWORD *v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // r13
  signed __int64 v13; // r15
  size_t v14; // r14
  _QWORD *v15; // r12
  unsigned int *v16; // rdi
  __int64 v17; // rax
  struct _PRIVILEGE_SET *v18; // rdi
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF
  struct _PRIVILEGE_SET *TransientPoolWithTag; // [rsp+88h] [rbp+20h]

  v21 = 0xFFFFFFFFLL;
  *(_QWORD *)a1 = a2;
  v6 = *(unsigned int *)(a3 + 36);
  WORD2(v21) = 0;
  if ( (_DWORD)v6 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 8 * v6, 0x38374D43u, a4);
    v9 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      v10 = CmpAllocateTransientPoolWithTag(PagedPool, 8 * v6, 0x38374D43u, v8);
      if ( v10 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a2 + 8))(a2, *(unsigned int *)(a3 + 40), &v21);
        v12 = v10;
        v13 = (char *)v9 - (char *)v10;
        v14 = v6;
        v15 = v10;
        v16 = (unsigned int *)v11;
        do
        {
          *v12 = 0LL;
          *(_DWORD *)v12 = -1;
          v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(a2 + 8))(a2, *v16, v15++);
          *(_QWORD *)((char *)v12 + v13) = v17;
          ++v16;
          ++v12;
          --v14;
        }
        while ( v14 );
        v18 = TransientPoolWithTag;
        (*(void (__fastcall **)(__int64, __int64 *))(a2 + 16))(a2, &v21);
        qsort(v18, v6, 8uLL, CmpSortedValueEnumStackValueCompareFunction);
        *(_QWORD *)(a1 + 8) = v18;
        v9 = 0LL;
        v7 = 0;
        *(_QWORD *)(a1 + 16) = v10;
        *(_DWORD *)(a1 + 24) = v6;
      }
      else
      {
        v7 = -1073741670;
      }
      if ( v9 )
        CmSiFreeMemory(v9);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
