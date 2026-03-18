/*
 * XREFs of IopFindDiskIoAttribution @ 0x1402EED50
 * Callers:
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1402EEC44 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x1402EECC0 (IoRecordIoAttribution.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 *     IopDiskIoAttributionTreeCompare @ 0x14031EF08 (IopDiskIoAttributionTreeCompare.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopFindDiskIoAttribution(__int64 a1)
{
  __int64 v1; // rbp
  KIRQL v2; // al
  __int64 v3; // r8
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  int v6; // edi
  int v7; // eax
  __int64 v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v4 = IopDiskIoAttributionTree;
  v5 = v2;
  if ( (BYTE8(IopDiskIoAttributionTree) & 1) != 0 && (_QWORD)IopDiskIoAttributionTree )
    v4 = (unsigned __int64)&IopDiskIoAttributionTree ^ IopDiskIoAttributionTree;
  v6 = BYTE8(IopDiskIoAttributionTree) & 1;
  if ( v4 )
  {
    do
    {
      v7 = IopDiskIoAttributionTreeCompare(&v15, v4, v3);
      if ( v7 >= 0 )
      {
        if ( v7 <= 0 )
          break;
        v8 = *(_QWORD *)(v4 + 8);
      }
      else
      {
        v8 = *(_QWORD *)v4;
      }
      if ( v6 && v8 )
        v4 ^= v8;
      else
        v4 = v8;
    }
    while ( v4 );
    if ( v4 )
    {
      v1 = v4;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 32)) <= 1 )
        __fastfail(0xEu);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v1;
}
