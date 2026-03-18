/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x1402D104C
 * Callers:
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 *     MiSegmentDelete @ 0x140681F74 (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x1402D2584 (MiDeleteControlArea.c)
 *     MiQueueControlAreaDelete @ 0x140528B3C (MiQueueControlAreaDelete.c)
 */

__int64 __fastcall MiDereferenceControlAreaProbe(volatile signed __int64 *a1, int a2)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1 + 14, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
  {
    if ( a2 == 1 )
      return MiQueueControlAreaDelete();
    else
      return MiDeleteControlArea((PVOID)a1);
  }
  return result;
}
