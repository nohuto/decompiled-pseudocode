/*
 * XREFs of MiFreeReadListPageList @ 0x140609434
 * Callers:
 *     MiFreeReadListPages @ 0x1406093AC (MiFreeReadListPages.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiPartitionIdToPointer @ 0x14035A294 (MiPartitionIdToPointer.c)
 *     MiGetPfnLink @ 0x140360050 (MiGetPfnLink.c)
 */

__int64 __fastcall MiFreeReadListPageList(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v5; // rbx
  __int64 PfnLink; // rax
  __int64 v8; // r8
  bool v9; // zf

  v2 = *a1;
  v5 = 0LL;
  while ( v2 )
  {
    PfnLink = MiGetPfnLink(v2);
    v9 = *a2 == 0;
    *a1 = PfnLink;
    if ( v9 )
      *a2 = MiPartitionIdToPointer((*(_QWORD *)(v8 + 40) >> 39) & 0x3FF);
    MiReleaseFreshPage(v8);
    v2 = *a1;
    ++v5;
  }
  return v5;
}
