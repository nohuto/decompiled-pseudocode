/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x140385180
 * Callers:
 *     MiReservePageFileSpace @ 0x1402BA590 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x1403844EC (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x1403851BC (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x1402286BC (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x14022877C (MiReleaseControlAreaWaiters.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 */

_QWORD *__fastcall MiReleasePageFileSectionInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 32);
    MiUnlockProtoPoolPage(v3, a2);
  }
  result = (_QWORD *)MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (_QWORD *)MiReleaseControlAreaWaiters(result);
  return result;
}
