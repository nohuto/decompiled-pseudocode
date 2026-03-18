/*
 * XREFs of MiFinishResume @ 0x140383AC0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MiReferencePageRuns @ 0x140300EC0 (MiReferencePageRuns.c)
 *     MiDereferencePageRunsEx @ 0x1403221F0 (MiDereferencePageRunsEx.c)
 *     PsGetNextPartition @ 0x14033B800 (PsGetNextPartition.c)
 *     MiPurgeZeroList @ 0x140383B6C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140384224 (MiPurgePartitionStandby.c)
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
  _InterlockedDecrement(&dword_140C4ED58);
  stru_140C4E568.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_140C4E550, 0, 0);
}
