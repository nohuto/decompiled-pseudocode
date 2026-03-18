/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x140384214
 * Callers:
 *     MiReservePageFileSpace @ 0x140227910 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x140383580 (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x140384250 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x14028170C (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1402817CC (MiReleaseControlAreaWaiters.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 */

_QWORD *__fastcall MiReleasePageFileSectionInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  _QWORD *result; // rax

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 32);
    MiUnlockProtoPoolPage(v5, a2, a3, a4);
  }
  result = (_QWORD *)MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (_QWORD *)MiReleaseControlAreaWaiters(result);
  return result;
}
