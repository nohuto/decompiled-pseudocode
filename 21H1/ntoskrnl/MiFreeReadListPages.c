/*
 * XREFs of MiFreeReadListPages @ 0x14063E4FC
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x14063E46C (MiReleaseReadListResources.c)
 * Callees:
 *     MiGetPfnLink @ 0x140322740 (MiGetPfnLink.c)
 *     MiPartitionIdToPointer @ 0x140323828 (MiPartitionIdToPointer.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x140340698 (MiReturnFaultCharges.c)
 *     MiFreeReadListPageList @ 0x14063E584 (MiFreeReadListPageList.c)
 */

void __fastcall MiFreeReadListPages(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = MiFreeReadListPageList(a1 + 40, &v10);
  v3 = v10;
  v4 = v2;
  v5 = (__int64 *)(a1 + 48);
  v6 = 4LL;
  do
  {
    v7 = 0LL;
    while ( *v5 )
    {
      *v5 = MiGetPfnLink(*v5);
      if ( !v3 )
        v3 = MiPartitionIdToPointer((*(_QWORD *)(v9 + 40) >> 39) & 0x3FF);
      MiReleaseFreshPage(v9, v8, v9);
      ++v7;
    }
    v4 += v7;
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( v4 )
    MiReturnFaultCharges(v3, v4, 1);
}
