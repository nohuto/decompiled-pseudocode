/*
 * XREFs of MiFreeReadListPages @ 0x1406E8BA4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x1406E8B14 (MiReleaseReadListResources.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14028E1E4 (MiReturnFaultCharges.c)
 *     MiPartitionIdToPointer @ 0x1402CBF58 (MiPartitionIdToPointer.c)
 *     MiGetPfnLink @ 0x1402D2F30 (MiGetPfnLink.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiFreeReadListPageList @ 0x1406E8C2C (MiFreeReadListPageList.c)
 */

unsigned __int64 __fastcall MiFreeReadListPages(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  result = MiFreeReadListPageList(a1 + 40, &v10);
  v3 = v10;
  v4 = result;
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
      result = MiReleaseFreshPage(v9, v8, v9);
      ++v7;
    }
    v4 += v7;
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( v4 )
    return MiReturnFaultCharges(v3, v4, 1);
  return result;
}
