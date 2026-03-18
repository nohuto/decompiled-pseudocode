/*
 * XREFs of MiFinishResume @ 0x1403815A0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetNextPartition @ 0x140202C94 (PsGetNextPartition.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiReferencePageRuns @ 0x1402F02C0 (MiReferencePageRuns.c)
 *     MiDereferencePageRunsEx @ 0x140313848 (MiDereferencePageRunsEx.c)
 *     MiPurgeZeroList @ 0x14038164C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140381D04 (MiPurgePartitionStandby.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rsi
  void *i; // rcx
  _QWORD *NextPartition; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdi

  v5 = MiReferencePageRuns((__int64)&MiSystemPartition, 0, a3, a4);
  for ( i = 0LL; ; i = v8 )
  {
    NextPartition = PsGetNextPartition(i);
    v8 = NextPartition;
    if ( !NextPartition )
      break;
    v9 = *NextPartition;
    if ( a1 )
    {
      MiPurgePartitionStandby(*NextPartition, a1);
      *(_BYTE *)(v9 + 4828) = 0;
    }
    MiPurgeZeroList(v9);
  }
  if ( v5 )
    MiDereferencePageRunsEx(v5, 1);
  _InterlockedDecrement(&dword_140C4EE18);
  stru_140C4E628.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_140C4E610, 0, 0);
}
