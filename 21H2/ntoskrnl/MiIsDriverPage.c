/*
 * XREFs of MiIsDriverPage @ 0x1402189A0
 * Callers:
 *     MiRemoveWsleList @ 0x140218310 (MiRemoveWsleList.c)
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 *     MiAddWorkingSetEntries @ 0x1403234A0 (MiAddWorkingSetEntries.c)
 *     MiRemoveWsle @ 0x140331CC0 (MiRemoveWsle.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIsDriverPage(__int64 a1, int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v5; // cl
  _QWORD *v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r9
  unsigned __int64 v10; // r8
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v13; // r9
  int v14; // edx
  bool v15; // zf

  v3 = a1 << 25 >> 16;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v5 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (v5 + 1)) & 0xFFFC;
      }
    }
  }
  ExAcquireSpinLockSharedAtDpcLevel(&PsLoadedModuleSpinLock);
  v6 = (_QWORD *)BugCheckParameter3;
  v7 = 0LL;
  if ( BugCheckParameter3 )
  {
    do
    {
      v8 = *(v6 - 23);
      if ( v3 > v8 + (unsigned int)(*((_DWORD *)v6 - 42) - 1) )
      {
        v6 = (_QWORD *)v6[1];
      }
      else
      {
        if ( v3 >= v8 )
        {
          if ( v6 )
            v7 = (__int64)(v6 - 29);
          break;
        }
        v6 = (_QWORD *)*v6;
      }
    }
    while ( v6 );
  }
  if ( a2 )
  {
    if ( !v7 )
    {
      v7 = qword_140C4F5E0;
      if ( qword_140C4F5E0 )
      {
        v10 = *(_QWORD *)(qword_140C4F5E0 + 48);
        if ( v3 < v10 || v3 > v10 + (unsigned int)(*(_DWORD *)(qword_140C4F5E0 + 64) - 1) )
          v7 = 0LL;
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( CurrentIrql < 0xFu )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  return v7;
}
