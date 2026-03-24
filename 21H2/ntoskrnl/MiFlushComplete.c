/*
 * XREFs of MiFlushComplete @ 0x14053D160
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x14053D2E8 (MiIssueAsynchronousFlush.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x1403259E0 (MiUnlockMdlWritePages.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     MiReleaseControlAreaWaiters @ 0x140357284 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140357408 (MiDecrementModifiedWriteCount.c)
 *     MiRetardMdl @ 0x140530CF0 (MiRetardMdl.c)
 *     MiFreeOverlappedFlushEntry @ 0x14053D274 (MiFreeOverlappedFlushEntry.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFlushComplete(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int16 v7; // cx
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  LONG result; // eax
  __int64 v14; // rcx

  v4 = *(_QWORD *)(a1 + 72);
  v7 = *(_WORD *)(v4 + 10);
  if ( (v7 & 0x200) != 0 )
  {
    MiRetardMdl(v4);
    v7 = *(_WORD *)(v4 + 10);
  }
  v8 = v4
     + 48
     + 8
     * ((*(unsigned int *)(v4 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)) >> 12);
  if ( (v7 & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(v4 + 24), (PMDL)v4);
  MiUnlockMdlWritePages((_QWORD *)(v4 + 48), v8, a2, a4);
  if ( *(int *)a2 < 0 )
    *(_QWORD *)(a2 + 8) = 0LL;
  v9 = (_QWORD *)MiDecrementModifiedWriteCount(*(_QWORD *)(a1 + 32), 0);
  if ( v9 )
    MiReleaseControlAreaWaiters(v9, v10, v11, v12);
  if ( v4 != a1 + 80 )
  {
    ExFreePoolWithTag((PVOID)v4, 0);
    *(_QWORD *)(a1 + 72) = a1 + 80;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  v14 = *(_QWORD *)(a1 + 40);
  if ( v14 )
  {
    if ( *(int *)a2 < 0 )
      *(_DWORD *)(v14 + 20) = *(_DWORD *)a2;
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 16), 0xFFFFFFFF);
    if ( result == 1 )
      return MiFreeOverlappedFlushEntry((PVOID)v14);
  }
  return result;
}
