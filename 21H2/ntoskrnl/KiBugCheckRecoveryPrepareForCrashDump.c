/*
 * XREFs of KiBugCheckRecoveryPrepareForCrashDump @ 0x140578EF0
 * Callers:
 *     KiCaptureDumpPostRecovery @ 0x140579004 (KiCaptureDumpPostRecovery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HvlPrepareForRootCrashdump @ 0x140547AF4 (HvlPrepareForRootCrashdump.c)
 *     IoRevertFromDemotedDumpType @ 0x140552B10 (IoRevertFromDemotedDumpType.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x140578BB4 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x140579B48 (KiUpdateBugcheckRecoveryProgress.c)
 */

char __fastcall KiBugCheckRecoveryPrepareForCrashDump(unsigned __int8 *a1, bool *a2)
{
  __int16 v4; // ax
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+2Ch] [rbp-1Ch]
  int v11; // [rsp+40h] [rbp-8h]

  if ( !KiBugcheckRecoveryDumpPolicy || KiBugcheckRecoveryDumpPolicy >= 3 )
    return 0;
  if ( KiBugcheckRecoveryDumpPolicy == 2 )
  {
    if ( !KiPristineTriageDump )
      IoRevertFromDemotedDumpType();
    HvlEnlightenments &= 0x2000u;
    v10 = 0LL;
    v8 = 1LL;
    v9 = 96;
    KiUpdateBugcheckRecoveryProgress(&v8);
  }
  off_140C01F18[0]();
  v4 = v11;
  _disable();
  *a2 = (v4 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  *a1 = CurrentIrql;
  KiBugCheckRecoveryFreezeOtherProcessors(0);
  if ( KiBugcheckRecoveryDumpPolicy == 2 )
    HvlPrepareForRootCrashdump(0);
  return 1;
}
