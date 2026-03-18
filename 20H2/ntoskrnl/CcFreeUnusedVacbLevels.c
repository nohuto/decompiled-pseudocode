/*
 * XREFs of CcFreeUnusedVacbLevels @ 0x1402FA84C
 * Callers:
 *     CcExtendVacbArray @ 0x1402F9F78 (CcExtendVacbArray.c)
 *     CcSetVacbLargeOffset @ 0x1402FA474 (CcSetVacbLargeOffset.c)
 *     CcAllocateVacbLevels @ 0x1402FA92C (CcAllocateVacbLevels.c)
 *     CcReferenceFileOffset @ 0x1404E9684 (CcReferenceFileOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14020B100 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall CcFreeUnusedVacbLevels(__int64 a1)
{
  _QWORD *v2; // rdx
  void *v3; // rdx
  __int64 v4; // rax

  while ( 1 )
  {
    v2 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    if ( v2[1] != a1 || (v4 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(v4 + 8) = a1;
    ExFreeToNPagedLookasideList(&CcVacbLevelLookasideList, v2);
    --*(_DWORD *)(a1 + 24);
  }
  v3 = *(void **)(a1 + 16);
  if ( v3 )
  {
    ExFreeToNPagedLookasideList(&CcVacbLevelLookasideList, v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
