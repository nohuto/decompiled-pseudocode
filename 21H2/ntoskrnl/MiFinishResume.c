/*
 * XREFs of MiFinishResume @ 0x1403849F0
 * Callers:
 *     <none>
 * Callees:
 *     MiDereferencePageRunsEx @ 0x140241A18 (MiDereferencePageRunsEx.c)
 *     PsGetNextPartition @ 0x140250E68 (PsGetNextPartition.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiPurgeZeroList @ 0x140384A9C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140385154 (MiPurgePartitionStandby.c)
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
  _InterlockedDecrement(&dword_140C4EF18);
  stru_140C4E728.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_140C4E710, 0, 0);
}
