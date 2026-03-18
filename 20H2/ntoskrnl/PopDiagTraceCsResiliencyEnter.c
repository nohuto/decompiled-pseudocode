/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x14056F78C
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1408FC8C4 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopIsRemoteDesktopEnabled @ 0x1408E3AD4 (PopIsRemoteDesktopEnabled.c)
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
  byte_140C22FE3 = byte_140C23DA5;
  byte_140C22FE1 = dword_140C23D4C == 0;
  dword_140C2300C = PopNetStandbyReason;
  byte_140C23011 = PopNetBIRequestActive;
  dword_140C23000 = PopEsState;
  dword_140C23004 = PopEsReason;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140C22FE2 = byte_140C23DA4;
  dword_140C22FE4 = v8;
  qword_140C23068 = -1LL;
  PopCsResiliencyStats[0] = 1;
  byte_140C23010 = IsRemoteDesktopEnabled;
  byte_140C22FE8 = a2;
  xmmword_140C22FF0 = *a3;
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
