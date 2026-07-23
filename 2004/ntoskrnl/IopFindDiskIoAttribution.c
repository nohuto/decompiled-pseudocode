/*
 * XREFs of IopFindDiskIoAttribution @ 0x14027A1E0
 * Callers:
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x14027A0D4 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x14027A150 (IoRecordIoAttribution.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     IopDiskIoAttributionTreeCompare @ 0x14034E1B8 (IopDiskIoAttributionTreeCompare.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall IopFindDiskIoAttribution(__int64 a1)
{
  unsigned __int64 v1; // rbp
  KIRQL v2; // al
  unsigned __int64 Root; // rbx
  unsigned __int64 v4; // rsi
  int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  Root = (unsigned __int64)IopDiskIoAttributionTree.Root;
  v4 = v2;
  if ( (*(_BYTE *)&IopDiskIoAttributionTree.0 & 1) != 0 && IopDiskIoAttributionTree.Root )
    Root = (unsigned __int64)&IopDiskIoAttributionTree ^ (unsigned __int64)IopDiskIoAttributionTree.Root;
  v5 = *(_BYTE *)&IopDiskIoAttributionTree.0 & 1;
  if ( Root )
  {
    do
    {
      v6 = IopDiskIoAttributionTreeCompare(&v14, Root);
      if ( v6 >= 0 )
      {
        if ( v6 <= 0 )
          break;
        v7 = *(_QWORD *)(Root + 8);
      }
      else
      {
        v7 = *(_QWORD *)Root;
      }
      if ( v5 && v7 )
        Root ^= v7;
      else
        Root = v7;
    }
    while ( Root );
    if ( Root )
    {
      v1 = Root;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(Root + 32)) <= 1 )
        __fastfail(0xEu);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v1;
}
