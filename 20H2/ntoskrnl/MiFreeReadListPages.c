/*
 * XREFs of MiFreeReadListPages @ 0x1406584B4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x140658424 (MiReleaseReadListResources.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x14031EF60 (MiPartitionIdToPointer.c)
 *     MiReturnFaultCharges @ 0x140329604 (MiReturnFaultCharges.c)
 *     MiGetPfnLink @ 0x140330EE0 (MiGetPfnLink.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiFreeReadListPageList @ 0x14065853C (MiFreeReadListPageList.c)
 */

void __fastcall MiFreeReadListPages(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = MiFreeReadListPageList(a1 + 40, &v9);
  v3 = v9;
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
        v3 = MiPartitionIdToPointer((*(_QWORD *)(v8 + 40) >> 39) & 0x3FF);
      MiReleaseFreshPage(v8);
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
