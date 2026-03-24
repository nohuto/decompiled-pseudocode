/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x1402F7AB0
 * Callers:
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     MiSegmentDelete @ 0x1406E8110 (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x1402F7AE4 (MiDeleteControlArea.c)
 *     MiQueueControlAreaDelete @ 0x14052A61C (MiQueueControlAreaDelete.c)
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
