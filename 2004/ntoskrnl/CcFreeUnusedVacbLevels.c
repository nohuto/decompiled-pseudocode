/*
 * XREFs of CcFreeUnusedVacbLevels @ 0x14034FF3C
 * Callers:
 *     CcAllocateVacbLevels @ 0x14026E224 (CcAllocateVacbLevels.c)
 *     CcSetVacbLargeOffset @ 0x1402C5060 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x14034FAB0 (CcExtendVacbArray.c)
 *     CcReferenceFileOffset @ 0x1404E60F4 (CcReferenceFileOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
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
