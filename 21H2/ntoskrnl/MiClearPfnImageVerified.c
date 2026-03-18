/*
 * XREFs of MiClearPfnImageVerified @ 0x14023CC50
 * Callers:
 *     MiDeletePerSessionProtos @ 0x14025592C (MiDeletePerSessionProtos.c)
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiGatherMappedPages @ 0x14028B330 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x14028C14C (MiReferencePageForModifiedWrite.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteClusterPage @ 0x1402CC0F0 (MiDeleteClusterPage.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 *     MiPrepareLargePageSubPageForFree @ 0x1405C30B0 (MiPrepareLargePageSubPageForFree.c)
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x140B05434 (MiTradeBootImagePage.c)
 * Callees:
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     KeSetPagePrivilege @ 0x14039FDB0 (KeSetPagePrivilege.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

unsigned __int8 __fastcall MiClearPfnImageVerified(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 result; // al
  unsigned __int8 v5; // di
  int PagePrivilege; // eax
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = 0LL;
  result = (*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    if ( (a2 & 4) != 0 )
      v5 = 17;
    else
      v5 = MiLockPageInline(BugCheckParameter2);
    if ( (a2 & 8) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(BugCheckParameter2);
      if ( PagePrivilege )
      {
        if ( (PagePrivilege & 0x20) != 0 )
          v7 = 512;
        else
          v7 = (a2 & 0x10) != 0 ? 32 : 16;
        v8 = v7;
        LODWORD(v8) = v7 | 0x80;
        if ( (a2 & 0x40) == 0 )
          v8 = v7;
        if ( (int)KeSetPagePrivilege(
                    0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
                    &v14,
                    v8) < 0 )
          KeBugCheckEx(
            0x1Au,
            0x5150BuLL,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
            0LL,
            0LL);
      }
    }
    result = MiSetPfnIdentity(BugCheckParameter2, 0LL);
    if ( v5 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
            v13 = (v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v12;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = v5;
      __writecr8(v5);
    }
  }
  return result;
}
