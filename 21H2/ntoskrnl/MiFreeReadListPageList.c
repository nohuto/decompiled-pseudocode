/*
 * XREFs of MiFreeReadListPageList @ 0x1406E8C2C
 * Callers:
 *     MiFreeReadListPages @ 0x1406E8BA4 (MiFreeReadListPages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1402CBF58 (MiPartitionIdToPointer.c)
 *     MiGetPfnLink @ 0x1402D2F30 (MiGetPfnLink.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiFreeReadListPageList(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v5; // rbx
  __int64 PfnLink; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  bool v10; // zf

  v2 = *a1;
  v5 = 0LL;
  while ( v2 )
  {
    PfnLink = MiGetPfnLink(v2);
    v10 = *a2 == 0;
    *a1 = PfnLink;
    if ( v10 )
      *a2 = MiPartitionIdToPointer((*(_QWORD *)(v9 + 40) >> 39) & 0x3FF);
    MiReleaseFreshPage(v9, v8, v9);
    v2 = *a1;
    ++v5;
  }
  return v5;
}
