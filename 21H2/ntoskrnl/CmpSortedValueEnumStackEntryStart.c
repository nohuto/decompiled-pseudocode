/*
 * XREFs of CmpSortedValueEnumStackEntryStart @ 0x140921BE8
 * Callers:
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140921D8C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpSortedValueEnumStackEntryStart(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int v4; // ebx
  struct _LOOKASIDE_LIST_EX *v7; // r9
  size_t v8; // r14
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rsi
  struct _LOOKASIDE_LIST_EX *v10; // r9
  ULONG_PTR v11; // rdx
  __int64 CellFlat; // rax
  unsigned int *v13; // r12
  unsigned int *v14; // rbp
  _QWORD *p_PrivilegeCount; // r13
  size_t v16; // r15
  ULONG_PTR v17; // rdx
  __int64 CellPaged; // rax
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF
  unsigned int *v22; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v21 = 0LL;
  HvpGetCellContextReinitialize(&v21);
  *(_QWORD *)a1 = a2;
  v8 = *(unsigned int *)(a3 + 36);
  if ( (_DWORD)v8 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 8 * v8, 0x38374D43u, v7);
    if ( !TransientPoolWithTag )
      return (unsigned int)-1073741670;
    v22 = (unsigned int *)CmpAllocateTransientPoolWithTag(PagedPool, 8 * v8, 0x38374D43u, v10);
    if ( !v22 )
    {
      CmSiFreeMemory(TransientPoolWithTag);
      return (unsigned int)-1073741670;
    }
    v11 = *(unsigned int *)(a3 + 40);
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(a2, v11, &v21);
    else
      CellFlat = HvpGetCellPaged(a2, v11, (unsigned int *)&v21);
    v13 = (unsigned int *)CellFlat;
    v14 = v22;
    p_PrivilegeCount = &TransientPoolWithTag->PrivilegeCount;
    v16 = v8;
    do
    {
      HvpGetCellContextReinitialize(v14);
      v17 = *v13;
      if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(a2, v17, v14);
      else
        CellPaged = HvpGetCellPaged(a2, v17, v14);
      *p_PrivilegeCount = CellPaged;
      v14 += 2;
      ++p_PrivilegeCount;
      ++v13;
      --v16;
    }
    while ( v16 );
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a2, &v21);
    else
      HvpReleaseCellPaged(a2, (unsigned int *)&v21);
    qsort(TransientPoolWithTag, v8, 8uLL, CmpSortedValueEnumStackValueCompareFunction);
    *(_QWORD *)(a1 + 16) = v22;
    *(_QWORD *)(a1 + 8) = TransientPoolWithTag;
    *(_DWORD *)(a1 + 24) = v8;
  }
  return v4;
}
