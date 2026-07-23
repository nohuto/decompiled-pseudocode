/*
 * XREFs of MiGenerateAccessViolation @ 0x1405487A0
 * Callers:
 *     MiRaisedIrqlFault @ 0x14021FF3C (MiRaisedIrqlFault.c)
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x14031C910 (MiCheckSystemPageTables.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     MiDeterminePoolType @ 0x140305AEC (MiDeterminePoolType.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall MiGenerateAccessViolation(__int64 *a1)
{
  unsigned __int64 v1; // rsi
  _QWORD **v2; // rdi
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rbx
  _KPROCESS *Process; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf

  v1 = *a1;
  if ( (unsigned int)MiDeterminePoolType(*a1) == 32 )
    return 0LL;
  v2 = (_QWORD **)&unk_140C4C940;
  v3 = ExAcquireSpinLockShared(&dword_140C4C938);
  while ( 1 )
  {
    v4 = *v2;
    while ( v4 )
    {
      if ( v1 > v4[4] )
      {
        v4 = (_QWORD *)v4[1];
      }
      else
      {
        if ( v1 >= v4[3] )
          goto LABEL_14;
        v4 = (_QWORD *)*v4;
      }
    }
    if ( v2 != (_QWORD **)&unk_140C4C940 )
      break;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      break;
    v2 = (_QWORD **)(Process[1].AffinityPadding[5] + 1008);
  }
LABEL_14:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4C938);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v4 != 0;
}
