/*
 * XREFs of MiClearPfnImageVerified @ 0x140220654
 * Callers:
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MiDeletePerSessionProtos @ 0x14024D674 (MiDeletePerSessionProtos.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x140277E5C (MiReferencePageForModifiedWrite.c)
 *     MiProbeLeafPteAccess @ 0x1402AFFF0 (MiProbeLeafPteAccess.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiDeleteClusterSection @ 0x14030B130 (MiDeleteClusterSection.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiReadyLargePageToFree @ 0x140334A80 (MiReadyLargePageToFree.c)
 *     MiDeleteClusterPage @ 0x140336580 (MiDeleteClusterPage.c)
 *     MmChangeImageProtection @ 0x1406A80B0 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x140A50E60 (MiTradeBootImagePage.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x140333440 (MiGetPagePrivilege.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x1405130B8 (KeSetPagePrivilege.c)
 */

char __fastcall MiClearPfnImageVerified(ULONG_PTR BugCheckParameter2, char a2)
{
  char result; // al
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
        if ( (int)KeSetPagePrivilege((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, &v14, v8) < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 0LL, 0LL);
      }
    }
    result = -1;
    *(_QWORD *)(BugCheckParameter2 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
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
