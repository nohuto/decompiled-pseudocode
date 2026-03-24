/*
 * XREFs of MiClearPfnImageVerified @ 0x1402A3214
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14020B6F0 (MiProbeLeafPteAccess.c)
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x1402568EC (MiReferencePageForModifiedWrite.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiRestoreTransitionPte @ 0x1402A2DD0 (MiRestoreTransitionPte.c)
 *     MiDeletePerSessionProtos @ 0x1402CF174 (MiDeletePerSessionProtos.c)
 *     MiDeleteClusterSection @ 0x1403003E0 (MiDeleteClusterSection.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiReadyLargePageToFree @ 0x140329D30 (MiReadyLargePageToFree.c)
 *     MiDeleteClusterPage @ 0x14032B830 (MiDeleteClusterPage.c)
 *     MmChangeImageProtection @ 0x1406D0DD0 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x140A4FE60 (MiTradeBootImagePage.c)
 * Callees:
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x1403286F0 (MiGetPagePrivilege.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x140512E78 (KeSetPagePrivilege.c)
 */

char __fastcall MiClearPfnImageVerified(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  char v4; // si
  char result; // al
  unsigned __int8 v6; // di
  int PagePrivilege; // eax
  unsigned int v8; // eax
  __int64 v9; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v15 = 0LL;
  v4 = a2;
  result = (*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    if ( (a2 & 4) != 0 )
      v6 = 17;
    else
      v6 = MiLockPageInline(BugCheckParameter2, a2, a3);
    if ( (v4 & 8) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(BugCheckParameter2);
      if ( PagePrivilege )
      {
        if ( (PagePrivilege & 0x20) != 0 )
          v8 = 512;
        else
          v8 = (v4 & 0x10) != 0 ? 32 : 16;
        v9 = v8;
        LODWORD(v9) = v8 | 0x80;
        if ( (v4 & 0x40) == 0 )
          v9 = v8;
        if ( (int)KeSetPagePrivilege((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, &v15, v9) < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 0LL, 0LL);
      }
    }
    result = -1;
    *(_QWORD *)(BugCheckParameter2 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    if ( v6 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << (v6 + 1));
            v14 = (v13 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = v6;
      __writecr8(v6);
    }
  }
  return result;
}
