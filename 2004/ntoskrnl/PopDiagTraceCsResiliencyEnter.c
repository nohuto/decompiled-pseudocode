/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x14056BD5C
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1408F6CB4 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopIsRemoteDesktopEnabled @ 0x1408DDC94 (PopIsRemoteDesktopEnabled.c)
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
  byte_140C23D83 = byte_140C23905;
  byte_140C23D81 = dword_140C238AC == 0;
  dword_140C23DAC = PopNetStandbyReason;
  byte_140C23DB1 = PopNetBIRequestActive;
  dword_140C23DA0 = PopEsState;
  dword_140C23DA4 = PopEsReason;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140C23D82 = byte_140C23904;
  dword_140C23D84 = v8;
  qword_140C23E08 = -1LL;
  PopCsResiliencyStats[0] = 1;
  byte_140C23DB0 = IsRemoteDesktopEnabled;
  byte_140C23D88 = a2;
  xmmword_140C23D90 = *a3;
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
