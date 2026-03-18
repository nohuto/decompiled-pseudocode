/*
 * XREFs of MiFinishResume @ 0x14038DF70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetNextPartition @ 0x140236710 (PsGetNextPartition.c)
 *     MiDereferencePageRunsEx @ 0x14023FD0C (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14023FF18 (MiReferencePageRuns.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MiPurgeZeroList @ 0x14038E01C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x14038E4BC (MiPurgePartitionStandby.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1)
{
  __int64 v2; // rsi
  void *i; // rcx
  _QWORD *NextPartition; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdi

  v2 = MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  for ( i = 0LL; ; i = v5 )
  {
    NextPartition = PsGetNextPartition(i);
    v5 = NextPartition;
    if ( !NextPartition )
      break;
    v6 = *NextPartition;
    if ( a1 )
    {
      MiPurgePartitionStandby(*NextPartition, a1);
      *(_BYTE *)(v6 + 15588) = 0;
    }
    MiPurgeZeroList(v6);
  }
  if ( v2 )
    MiDereferencePageRunsEx(v2, 1);
  _InterlockedDecrement(&dword_140C53440);
  stru_140C529E8.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_140C529D0, 0, 0);
}
