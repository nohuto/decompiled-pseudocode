/*
 * XREFs of MiFreeReadListPages @ 0x1406FFF84
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x1406FFEF4 (MiReleaseReadListResources.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14020B384 (MiReturnFaultCharges.c)
 *     MiPartitionIdToPointer @ 0x14024A6C4 (MiPartitionIdToPointer.c)
 *     MiGetPfnLink @ 0x1402514D0 (MiGetPfnLink.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiFreeReadListPageList @ 0x14070000C (MiFreeReadListPageList.c)
 */

unsigned __int64 __fastcall MiFreeReadListPages(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  result = MiFreeReadListPageList(a1 + 40, &v9);
  v3 = v9;
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
        v3 = MiPartitionIdToPointer((*(_QWORD *)(v8 + 40) >> 39) & 0x3FF);
      result = MiReleaseFreshPage(v8);
      ++v7;
    }
    v4 += v7;
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( v4 )
    return MiReturnFaultCharges(v3, v4, 1LL);
  return result;
}
