/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x14038732C
 * Callers:
 *     MiReservePageFileSpace @ 0x1403481F0 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x140386698 (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x140387368 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x14029F534 (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x14029F5F4 (MiReleaseControlAreaWaiters.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 */

_QWORD *__fastcall MiReleasePageFileSectionInfo(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    MiUnlockProtoPoolPage(v2, *(_BYTE *)(a1 + 32));
  result = (_QWORD *)MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (_QWORD *)MiReleaseControlAreaWaiters(result);
  return result;
}
