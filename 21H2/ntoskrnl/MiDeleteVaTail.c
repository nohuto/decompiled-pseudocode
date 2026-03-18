/*
 * XREFs of MiDeleteVaTail @ 0x14032F0E0
 * Callers:
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiDecayPfnFullyInitialized @ 0x1402302B0 (MiDecayPfnFullyInitialized.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiTerminateWsleCluster @ 0x14032F750 (MiTerminateWsleCluster.c)
 *     MiReplicatePteChange @ 0x14036CB28 (MiReplicatePteChange.c)
 */

__int64 __fastcall MiDeleteVaTail(_QWORD *a1)
{
  unsigned __int64 *v1; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // rcx
  struct _SLIST_ENTRY *v5; // rcx
  __int64 v7; // rbp
  __int64 v8; // rcx

  v1 = (unsigned __int64 *)a1[21];
  MiTerminateWsleCluster(v1 + 15);
  MiFlushTbList(a1[2]);
  v3 = *v1;
  if ( *v1 )
  {
    v4 = a1[3];
    if ( (*(_BYTE *)(v4 + 184) & 7) != 0 && v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v7 = v1[1];
      v8 = 3LL;
      do
      {
        v3 = (__int64)(v3 << 25) >> 16;
        v7 = v7 << 25 >> 16;
        --v8;
      }
      while ( v8 );
      MiReplicatePteChange(v3, v7);
      MiDeletePteRun(a1[3], (__int64)v1);
      if ( v3 )
        MiReplicatePteChange(v3, v7);
    }
    else
    {
      MiDeletePteRun(v4, (__int64)v1);
    }
    *v1 = 0LL;
  }
  v5 = (struct _SLIST_ENTRY *)v1[11];
  if ( v5 )
  {
    MiDecayPfnFullyInitialized(v5);
    v1[11] = 0LL;
  }
  return 0LL;
}
