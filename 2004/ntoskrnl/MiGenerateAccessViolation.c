/*
 * XREFs of MiGenerateAccessViolation @ 0x140543090
 * Callers:
 *     MiSystemFault @ 0x1402BD490 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x1402BDC50 (MiCheckSystemPageTables.c)
 *     MiRaisedIrqlFault @ 0x1403332BC (MiRaisedIrqlFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     MiDeterminePoolType @ 0x1402533A0 (MiDeterminePoolType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall MiGenerateAccessViolation(unsigned __int64 *a1)
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
  v2 = (_QWORD **)&unk_140C4C700;
  v3 = ExAcquireSpinLockShared(&dword_140C4C6F8);
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
    if ( v2 != (_QWORD **)&unk_140C4C700 )
      break;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      break;
    v2 = (_QWORD **)(Process[1].AffinityPadding[5] + 1008);
  }
LABEL_14:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4C6F8);
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
