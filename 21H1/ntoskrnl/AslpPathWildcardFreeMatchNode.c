/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x14096555C
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1409640FC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1409646CC (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140965268 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x14096548C (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall AslpPathWildcardFreeMatchNode(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 )
    {
      ZwClose(v2);
      a1[3] = 0LL;
    }
    v3 = (void *)a1[1];
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x74705041u);
      a1[1] = 0LL;
    }
    a1[2] = 0LL;
  }
}
