/*
 * XREFs of CmpAddValueToListEx @ 0x14065C284
 * Callers:
 *     CmpCopyKeyPartial @ 0x14076FA4C (CmpCopyKeyPartial.c)
 *     CmpMergeKeyValues @ 0x1408795E0 (CmpMergeKeyValues.c)
 *     CmpAddValueToList @ 0x14087B518 (CmpAddValueToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvReallocateCell @ 0x14065B1D0 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x1407207E4 (HvAllocateCell.c)
 */

__int64 __fastcall CmpAddValueToListEx(ULONG_PTR a1, int a2, unsigned int a3, int a4, unsigned int *a5, int a6)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  int v10; // edx
  unsigned int v11; // edi
  unsigned int v12; // r8d
  unsigned int Cell; // eax
  __int64 v14; // rdx
  _DWORD *v16; // r8
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18[4]; // [rsp+38h] [rbp-20h] BYREF

  v18[0] = 0LL;
  v17 = 0xFFFFFFFFLL;
  v8 = a3;
  v9 = *a5;
  v10 = 1;
  v11 = v9 + 1;
  if ( (unsigned int)(v9 + 1) <= 1 )
  {
    if ( a6 )
      v10 = a6;
    Cell = HvAllocateCell(a1, 4 * v10, a4, (unsigned int)v18, (__int64)&v17);
  }
  else
  {
    if ( v11 >= 0x64 )
    {
      v12 = 4 * ((v9 + 100) & 0xFFFFFF9C);
      if ( v12 > 0x1000 )
        v12 = (v12 + 4095) & 0xFFFFF000;
    }
    else
    {
      v12 = 4 * v11;
    }
    Cell = HvReallocateCell(a1, a5[1], v12, 1, v18, &v17);
  }
  if ( Cell == -1 )
    return 3221225626LL;
  v14 = v18[0];
  a5[1] = Cell;
  if ( (unsigned int)v9 > (unsigned int)v8 )
  {
    v16 = (_DWORD *)(v14 + 4 * v9);
    do
    {
      v9 = (unsigned int)(v9 - 1);
      *v16-- = *(_DWORD *)(v14 + 4 * v9);
    }
    while ( (unsigned int)v9 > (unsigned int)v8 );
  }
  *(_DWORD *)(v14 + 4 * v8) = a2;
  *a5 = v11;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v17);
  return 0LL;
}
