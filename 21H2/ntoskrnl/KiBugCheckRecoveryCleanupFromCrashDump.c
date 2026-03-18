/*
 * XREFs of KiBugCheckRecoveryCleanupFromCrashDump @ 0x140578AD8
 * Callers:
 *     KiCaptureDumpPostRecovery @ 0x140579004 (KiCaptureDumpPostRecovery.c)
 * Callees:
 *     KiSendThawExecution @ 0x1402DA5B0 (KiSendThawExecution.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HvlResumeFromRootCrashdump @ 0x140547EA8 (HvlResumeFromRootCrashdump.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x140579B48 (KiUpdateBugcheckRecoveryProgress.c)
 */

__int64 __fastcall KiBugCheckRecoveryCleanupFromCrashDump(unsigned __int8 a1, char a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+2Ch] [rbp-1Ch]

  result = (unsigned int)KiBugcheckRecoveryDumpPolicy;
  v4 = a1;
  if ( KiBugcheckRecoveryDumpPolicy && KiBugcheckRecoveryDumpPolicy < 3 )
  {
    if ( KiBugcheckRecoveryDumpPolicy == 2 )
    {
      HvlResumeFromRootCrashdump(1);
      v10 = 0LL;
      v8 = 1LL;
      v9 = 99;
      KiUpdateBugcheckRecoveryProgress(&v8);
    }
    KiSendThawExecution(1);
    off_140C01F08[0]();
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v7 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    if ( a2 )
      _enable();
  }
  return result;
}
