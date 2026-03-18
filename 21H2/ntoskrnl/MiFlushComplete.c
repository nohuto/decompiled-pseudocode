/*
 * XREFs of MiFlushComplete @ 0x140597ED0
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x1405980C8 (MiIssueAsynchronousFlush.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x1402879F8 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140287A8C (MiDecrementModifiedWriteCount.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x140334830 (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x140584530 (MiRetardMdl.c)
 *     MiFreeOverlappedFlushEntry @ 0x140598054 (MiFreeOverlappedFlushEntry.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFlushComplete(__int64 a1, __int64 a2)
{
  struct _MDL *v2; // rbx
  CSHORT MdlFlags; // ax
  __int64 *v6; // rax
  LONG result; // eax
  __int64 v8; // rcx

  v2 = *(struct _MDL **)(a1 + 72);
  MdlFlags = v2->MdlFlags;
  if ( (MdlFlags & 0x200) != 0 )
  {
    MiRetardMdl(*(_QWORD *)(a1 + 72));
    MdlFlags = v2->MdlFlags;
  }
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v2->MappedSystemVa, v2);
  MiUnlockMdlWritePages(v2, (int *)a2);
  if ( *(int *)a2 < 0 )
    *(_QWORD *)(a2 + 8) = 0LL;
  v6 = (__int64 *)MiDecrementModifiedWriteCount(*(_QWORD *)(a1 + 32), 0);
  if ( v6 )
    MiReleaseControlAreaWaiters(v6);
  if ( v2 != (struct _MDL *)(a1 + 80) )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 72) = a1 + 80;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 )
  {
    if ( *(int *)a2 < 0 )
      *(_DWORD *)(v8 + 20) = *(_DWORD *)a2;
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 16), 0xFFFFFFFF);
    if ( result == 1 )
      return MiFreeOverlappedFlushEntry((PVOID)v8);
  }
  return result;
}
