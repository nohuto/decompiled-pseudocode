/*
 * XREFs of CmpConcatenateValueLists @ 0x1408784E0
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140729760 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     HvAllocateCell @ 0x1407207E4 (HvAllocateCell.c)
 */

__int64 __fastcall CmpConcatenateValueLists(ULONG_PTR a1, unsigned int *a2, unsigned int *a3, int a4, unsigned int *a5)
{
  int v5; // ebx
  unsigned int v7; // edx
  unsigned int v8; // ebx
  unsigned int *v11; // rax
  unsigned int v12; // eax
  char *v13; // r15
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  const void *v16; // rax
  const void *v17; // rax
  unsigned int *v18; // rax
  void *v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF
  __int64 v22; // [rsp+90h] [rbp+50h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  v5 = *a3;
  v7 = *a2;
  v20 = 0LL;
  v8 = v7 + v5;
  LODWORD(v22) = -1;
  LODWORD(v21) = -1;
  if ( v8 < v7 )
  {
    return (unsigned int)-1073741670;
  }
  else if ( v8 )
  {
    v12 = HvAllocateCell(a1, 4 * v8, a4, &v20, &v22);
    v13 = (char *)v20;
    v14 = v12;
    if ( v12 == -1 )
    {
      v8 = -1073741670;
    }
    else
    {
      v15 = 0;
      if ( *a2 )
      {
        v16 = (const void *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(a1 + 8))(a1, a2[1], &v21);
        memmove(v13, v16, 4LL * *a2);
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v21);
        v15 = *a2;
      }
      if ( *a3 )
      {
        v17 = (const void *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(a1 + 8))(a1, a3[1], &v21);
        memmove(&v13[4 * v15], v17, 4LL * *a3);
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v21);
      }
      v18 = a5;
      *a5 = v8;
      v8 = 0;
      v18[1] = v14;
    }
    if ( v13 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v22);
  }
  else
  {
    v11 = a5;
    *a5 = 0;
    v11[1] = -1;
  }
  return v8;
}
