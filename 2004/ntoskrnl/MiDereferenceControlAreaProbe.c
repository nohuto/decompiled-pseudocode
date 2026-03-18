/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x14025DF5C
 * Callers:
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiSegmentDelete @ 0x1406091B4 (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x140260548 (MiDeleteControlArea.c)
 *     MiQueueControlAreaDelete @ 0x14052516C (MiQueueControlAreaDelete.c)
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
