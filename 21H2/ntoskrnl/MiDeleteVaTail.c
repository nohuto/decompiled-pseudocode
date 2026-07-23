/*
 * XREFs of MiDeleteVaTail @ 0x140345880
 * Callers:
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiDecayPfnFullyInitialized @ 0x140229794 (MiDecayPfnFullyInitialized.c)
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiTerminateWsleCluster @ 0x140345A70 (MiTerminateWsleCluster.c)
 *     KeFlushMultipleRangeTb @ 0x140346370 (KeFlushMultipleRangeTb.c)
 *     MiReplicatePteChange @ 0x1403A4694 (MiReplicatePteChange.c)
 *     KeFlushCurrentTbOnly @ 0x1403B7608 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C96BC (KeFlushMultipleRangeCurrentTb.c)
 */

__int64 __fastcall MiDeleteVaTail(_QWORD *a1)
{
  unsigned __int64 *v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  _SLIST_ENTRY *v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned int v12; // eax
  _KPROCESS *Process; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v1 = (unsigned __int64 *)a1[21];
  MiTerminateWsleCluster(v1 + 15);
  v3 = a1[2];
  v4 = *(unsigned int *)(v3 + 12);
  if ( !(_DWORD)v4 )
    goto LABEL_2;
  v10 = *(unsigned __int8 *)(v3 + 4);
  v11 = qword_140C4DFD0;
  if ( (v10 & 2) == 0 )
  {
    v12 = *(_DWORD *)v3;
    if ( *(_DWORD *)v3 != 1 )
      goto LABEL_25;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].Affinity.Bitmap[5] || Process->SecureState.SecureHandle )
      v11 = -1LL;
  }
  v12 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == 1 )
  {
    v14 = 0LL;
    goto LABEL_17;
  }
LABEL_25:
  v14 = (unsigned int)((v10 & 8) != 0) + 1;
LABEL_17:
  if ( *(_BYTE *)(v3 + 5) || *(_QWORD *)(v3 + 16) > v11 )
  {
    if ( (v10 & 1) != 0 )
      KeFlushCurrentTbOnly(v12, v14, v10, v11);
    else
      KeFlushTb(v12, v14);
    *(_BYTE *)(v3 + 5) = 0;
  }
  else if ( (v10 & 1) != 0 )
  {
    KeFlushMultipleRangeCurrentTb(v4, v3 + 24, v12);
  }
  else
  {
    KeFlushMultipleRangeTb(v4, v3 + 24, v12, (unsigned int)v14);
  }
  *(_BYTE *)(v3 + 4) &= ~8u;
  *(_DWORD *)(v3 + 12) = 0;
  *(_QWORD *)(v3 + 16) = 0LL;
LABEL_2:
  v5 = *v1;
  if ( *v1 )
  {
    v8 = a1[3];
    if ( (*(_BYTE *)(v8 + 184) & 7) != 0 && v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v9 = v1[1];
      v15 = 3LL;
      do
      {
        v5 = (__int64)(v5 << 25) >> 16;
        v9 = v9 << 25 >> 16;
        --v15;
      }
      while ( v15 );
      MiReplicatePteChange(v5, v9);
      v8 = a1[3];
    }
    else
    {
      v5 = 0LL;
      v9 = 0LL;
    }
    MiDeletePteRun(v8, (__int64)v1);
    if ( v5 )
      MiReplicatePteChange(v5, v9);
    *v1 = 0LL;
  }
  v6 = (_SLIST_ENTRY *)v1[11];
  if ( v6 )
  {
    MiDecayPfnFullyInitialized(v6);
    v1[11] = 0LL;
  }
  return 0LL;
}
