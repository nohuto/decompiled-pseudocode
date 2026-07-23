/*
 * XREFs of MiFreeReadListPageList @ 0x14070000C
 * Callers:
 *     MiFreeReadListPages @ 0x1406FFF84 (MiFreeReadListPages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x14024A6C4 (MiPartitionIdToPointer.c)
 *     MiGetPfnLink @ 0x1402514D0 (MiGetPfnLink.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
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
