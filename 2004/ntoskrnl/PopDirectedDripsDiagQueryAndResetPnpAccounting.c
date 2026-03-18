/*
 * XREFs of PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x140577534
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x1408F3DB4 (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x140577470 (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 */

__int64 __fastcall PopDirectedDripsDiagQueryAndResetPnpAccounting(__int64 a1, _QWORD *a2, __int64 a3, _OWORD *a4)
{
  KIRQL v7; // al
  __int64 v8; // rcx
  char v9; // si
  unsigned __int64 v10; // rbx
  __int128 v11; // xmm0
  _OWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C1E930);
  v9 = byte_140C1E9A8;
  v10 = v7;
  if ( byte_140C1E9A8 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v8, 0);
  v11 = xmmword_140C1EA98;
  *a2 = qword_140C1E9B0;
  *(_OWORD *)a3 = v11;
  *(_OWORD *)(a3 + 16) = xmmword_140C1EAA8;
  *(_OWORD *)(a3 + 32) = xmmword_140C1EAB8;
  *(_OWORD *)(a3 + 48) = xmmword_140C1EAC8;
  *(_OWORD *)(a3 + 64) = xmmword_140C1EAD8;
  *(_OWORD *)(a3 + 80) = xmmword_140C1EAE8;
  *(_QWORD *)(a3 + 96) = qword_140C1EAF8;
  *a4 = *(_OWORD *)qword_140C1E9C8;
  a4[1] = *(_OWORD *)&qword_140C1E9C8[2];
  a4[2] = *(_OWORD *)&qword_140C1E9C8[4];
  a4[3] = *(_OWORD *)&qword_140C1E9C8[6];
  a4[4] = *(_OWORD *)&qword_140C1E9C8[8];
  a4[5] = *(_OWORD *)&qword_140C1E9C8[10];
  a4[6] = *(_OWORD *)&qword_140C1E9C8[12];
  v12 = a4 + 8;
  *(v12 - 1) = *(_OWORD *)&qword_140C1E9C8[14];
  *v12 = *(_OWORD *)&qword_140C1E9C8[16];
  v12[1] = *(_OWORD *)&qword_140C1E9C8[18];
  v12[2] = *(_OWORD *)&qword_140C1E9C8[20];
  v12[3] = *(_OWORD *)&qword_140C1E9C8[22];
  v12[4] = *(_OWORD *)&qword_140C1E9C8[24];
  qword_140C1E9B0 = 0LL;
  memset(&xmmword_140C1EA98, 0, 0x68uLL);
  memset(qword_140C1E9C8, 0, sizeof(qword_140C1E9C8));
  if ( v9 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v13, 1);
  KxReleaseSpinLock(&qword_140C1E930);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v17 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return result;
}
