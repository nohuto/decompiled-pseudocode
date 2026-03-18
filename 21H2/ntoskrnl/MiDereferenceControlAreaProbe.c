/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x14027031C
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiProbeUnlockPage @ 0x1402B7320 (MiProbeUnlockPage.c)
 *     MiSegmentDelete @ 0x1406F4904 (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x1402700FC (MiDeleteControlArea.c)
 *     MiQueueControlAreaDelete @ 0x14058BE04 (MiQueueControlAreaDelete.c)
 */

void __fastcall MiDereferenceControlAreaProbe(volatile signed __int64 *a1, int a2)
{
  if ( _InterlockedExchangeAdd64(a1 + 14, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    if ( a2 )
      MiQueueControlAreaDelete();
    else
      MiDeleteControlArea((PVOID)a1);
  }
}
