/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x14059D028
 * Callers:
 *     MiReservePageFileSpace @ 0x14033AC90 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x14059B62C (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x14059C8C8 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x1402879F8 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140287A8C (MiDecrementModifiedWriteCount.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 */

__int64 *__fastcall MiReleasePageFileSectionInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 *result; // rax

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 32);
    MiUnlockProtoPoolPage(v5, a2, a3, a4);
  }
  result = (__int64 *)MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (__int64 *)MiReleaseControlAreaWaiters(result);
  return result;
}
