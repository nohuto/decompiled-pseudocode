/*
 * XREFs of CcFreeUnusedVacbLevels @ 0x1402477A4
 * Callers:
 *     CcExtendVacbArray @ 0x140247300 (CcExtendVacbArray.c)
 *     CcAllocateVacbLevels @ 0x140247914 (CcAllocateVacbLevels.c)
 *     CcSetVacbLargeOffset @ 0x14028D58C (CcSetVacbLargeOffset.c)
 *     CcReferenceFileOffset @ 0x14053B22C (CcReferenceFileOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
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
