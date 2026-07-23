/*
 * XREFs of CcAllocateVacbLevels @ 0x140213284
 * Callers:
 *     CcExtendVacbArray @ 0x140212CB4 (CcExtendVacbArray.c)
 *     CcSetVacbLargeOffset @ 0x1403000FC (CcSetVacbLargeOffset.c)
 *     CcReferenceFileOffset @ 0x1404EB454 (CcReferenceFileOffset.c)
 * Callees:
 *     CcFreeUnusedVacbLevels @ 0x140213140 (CcFreeUnusedVacbLevels.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140213400 (ExAllocateFromNPagedLookasideList.c)
 */

char __fastcall CcAllocateVacbLevels(unsigned int a1, char a2, __int64 a3)
{
  char v3; // di
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  PVOID v10; // rax

  v3 = 0;
  if ( a1 > *(_DWORD *)(a3 + 24) )
  {
    do
    {
      v7 = ExAllocateFromNPagedLookasideList(&CcVacbLevelLookasideList);
      if ( !v7 )
        goto LABEL_10;
      v8 = *(_QWORD **)(a3 + 8);
      if ( *v8 != a3 )
        __fastfail(3u);
      *v7 = a3;
      v7[1] = v8;
      *v8 = v7;
      *(_QWORD *)(a3 + 8) = v7;
    }
    while ( a1 > ++*(_DWORD *)(a3 + 24) );
  }
  if ( a2 )
  {
    if ( !*(_QWORD *)(a3 + 16) )
    {
      v10 = ExAllocateFromNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList);
      *(_QWORD *)(a3 + 16) = v10;
      if ( !v10 )
      {
LABEL_10:
        CcFreeUnusedVacbLevels(a3);
        return v3;
      }
    }
  }
  return 1;
}
