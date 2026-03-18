/*
 * XREFs of MiDeleteVaTail @ 0x1402BF6B0
 * Callers:
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiTerminateWsleCluster @ 0x1402BF020 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiDecayPfnFullyInitialized @ 0x140351A08 (MiDecayPfnFullyInitialized.c)
 *     MiReplicatePteChange @ 0x1403A3C84 (MiReplicatePteChange.c)
 */

__int64 __fastcall MiDeleteVaTail(_QWORD *a1)
{
  unsigned __int64 *v1; // rbx
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  ULONG_PTR v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rcx

  v1 = (unsigned __int64 *)a1[21];
  MiTerminateWsleCluster((__int64)(v1 + 15));
  MiFlushTbList(a1[2], v3);
  v4 = *v1;
  if ( *v1 )
  {
    v7 = a1[3];
    if ( (*(_BYTE *)(v7 + 184) & 7) != 0 && v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v8 = v1[1];
      v9 = 3LL;
      do
      {
        v4 = (__int64)(v4 << 25) >> 16;
        v8 = v8 << 25 >> 16;
        --v9;
      }
      while ( v9 );
      MiReplicatePteChange(v4, v8);
      v7 = a1[3];
    }
    else
    {
      v4 = 0LL;
      v8 = 0LL;
    }
    MiDeletePteRun(v7, v1);
    if ( v4 )
      MiReplicatePteChange(v4, v8);
    *v1 = 0LL;
  }
  v5 = v1[11];
  if ( v5 )
  {
    MiDecayPfnFullyInitialized(v5);
    v1[11] = 0LL;
  }
  return 0LL;
}
