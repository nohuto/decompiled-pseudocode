/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x14056B70C
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1408F59C4 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopIsRemoteDesktopEnabled @ 0x1408DC924 (PopIsRemoteDesktopEnabled.c)
 */

__int64 __fastcall PopDiagTraceCsResiliencyEnter(__int64 a1, char a2, __int128 *a3)
{
  char IsRemoteDesktopEnabled; // bl
  unsigned __int64 v7; // r14
  int v8; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v12; // zf

  IsRemoteDesktopEnabled = PopIsRemoteDesktopEnabled();
  v7 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  memset(PopCsResiliencyStats, 0, 0x140uLL);
  byte_140C230E3 = byte_140C23F25;
  byte_140C230E1 = dword_140C23ECC == 0;
  dword_140C2310C = PopNetStandbyReason;
  byte_140C23111 = PopNetBIRequestActive;
  dword_140C23100 = PopEsState;
  dword_140C23104 = PopEsReason;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140C230E2 = byte_140C23F24;
  dword_140C230E4 = v8;
  qword_140C23168 = -1LL;
  PopCsResiliencyStats[0] = 1;
  byte_140C23110 = IsRemoteDesktopEnabled;
  byte_140C230E8 = a2;
  xmmword_140C230F0 = *a3;
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
