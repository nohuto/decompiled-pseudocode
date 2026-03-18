/*
 * XREFs of MiLookupIoPageNode @ 0x1402FB41C
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x1402FB198 (MiInsertPhysicalPteMapping.c)
 *     MmGetCacheAttributeEx @ 0x14052C500 (MmGetCacheAttributeEx.c)
 *     MmProtectMdlSystemAddress @ 0x14052C690 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiLookupIoPageNode(unsigned __int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  v2 = ExAcquireSpinLockShared(&dword_140C4EB80);
  v3 = (_QWORD *)*((_QWORD *)&xmmword_140C4EB88 + 1);
  v4 = v2;
  while ( v3 )
  {
    v5 = v3[5];
    if ( a1 < v5 )
    {
      v3 = (_QWORD *)*v3;
    }
    else
    {
      if ( a1 < v5 + 512 )
        break;
      v3 = (_QWORD *)v3[1];
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EB80);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v3;
}
