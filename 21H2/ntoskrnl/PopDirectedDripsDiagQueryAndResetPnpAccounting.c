/*
 * XREFs of PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x14057CBB4
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x1408F7304 (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x14057CAF0 (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
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

  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C1E9F0);
  v9 = byte_140C1EA68;
  v10 = v7;
  if ( byte_140C1EA68 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v8, 0);
  v11 = xmmword_140C1EB58;
  *a2 = qword_140C1EA70;
  *(_OWORD *)a3 = v11;
  *(_OWORD *)(a3 + 16) = xmmword_140C1EB68;
  *(_OWORD *)(a3 + 32) = xmmword_140C1EB78;
  *(_OWORD *)(a3 + 48) = xmmword_140C1EB88;
  *(_OWORD *)(a3 + 64) = xmmword_140C1EB98;
  *(_OWORD *)(a3 + 80) = xmmword_140C1EBA8;
  *(_QWORD *)(a3 + 96) = qword_140C1EBB8;
  *a4 = *(_OWORD *)qword_140C1EA88;
  a4[1] = *(_OWORD *)&qword_140C1EA88[2];
  a4[2] = *(_OWORD *)&qword_140C1EA88[4];
  a4[3] = *(_OWORD *)&qword_140C1EA88[6];
  a4[4] = *(_OWORD *)&qword_140C1EA88[8];
  a4[5] = *(_OWORD *)&qword_140C1EA88[10];
  a4[6] = *(_OWORD *)&qword_140C1EA88[12];
  v12 = a4 + 8;
  *(v12 - 1) = *(_OWORD *)&qword_140C1EA88[14];
  *v12 = *(_OWORD *)&qword_140C1EA88[16];
  v12[1] = *(_OWORD *)&qword_140C1EA88[18];
  v12[2] = *(_OWORD *)&qword_140C1EA88[20];
  v12[3] = *(_OWORD *)&qword_140C1EA88[22];
  v12[4] = *(_OWORD *)&qword_140C1EA88[24];
  qword_140C1EA70 = 0LL;
  memset(&xmmword_140C1EB58, 0, 0x68uLL);
  memset(qword_140C1EA88, 0, sizeof(qword_140C1EA88));
  if ( v9 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v13, 1);
  KxReleaseSpinLock(&qword_140C1E9F0);
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
