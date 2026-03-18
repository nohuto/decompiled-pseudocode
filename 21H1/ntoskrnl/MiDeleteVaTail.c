/*
 * XREFs of MiDeleteVaTail @ 0x14029AD00
 * Callers:
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiTerminateWsleCluster @ 0x14029AE10 (MiTerminateWsleCluster.c)
 *     MiDecayPfnFullyInitialized @ 0x1402FCDFC (MiDecayPfnFullyInitialized.c)
 *     MiReplicatePteChange @ 0x1403A1024 (MiReplicatePteChange.c)
 */

__int64 __fastcall MiDeleteVaTail(__int64 *a1)
{
  unsigned __int64 *v1; // rbx
  _KPROCESS *v3; // rdx
  unsigned __int64 v4; // rsi
  ULONG_PTR v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rcx

  v1 = (unsigned __int64 *)a1[21];
  MiTerminateWsleCluster(v1 + 15);
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
    MiDeletePteRun(v7, (__int64)v1);
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
