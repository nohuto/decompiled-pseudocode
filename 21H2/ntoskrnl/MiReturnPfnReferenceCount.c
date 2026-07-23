/*
 * XREFs of MiReturnPfnReferenceCount @ 0x14024D52C
 * Callers:
 *     MiSectionCreated @ 0x140299C1C (MiSectionCreated.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14067BC6C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDeleteImageCreationMdls @ 0x1406AC1B4 (MiDeleteImageCreationMdls.c)
 *     MiFillPerSessionProtos @ 0x1408D8140 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnPfnReferenceCount(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // esi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf

  v2 = (unsigned __int8)MiLockPageInline(a1);
  v3 = MiRemoveLockedPageChargeAndDecRef(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return v3;
}
