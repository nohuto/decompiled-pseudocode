/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x1409668FC
 * Callers:
 *     AslPathWildcardFindFirst @ 0x14096549C (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140965A6C (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140966608 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x14096682C (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
