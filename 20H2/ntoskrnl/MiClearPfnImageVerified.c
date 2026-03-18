/*
 * XREFs of MiClearPfnImageVerified @ 0x140349B58
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14026CA10 (MiProbeLeafPteAccess.c)
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiReadyLargePageToFree @ 0x1402AD140 (MiReadyLargePageToFree.c)
 *     MiDeleteClusterPage @ 0x1402AEC40 (MiDeleteClusterPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePerSessionProtos @ 0x14032D664 (MiDeletePerSessionProtos.c)
 *     MiReferencePageForModifiedWrite @ 0x14034474C (MiReferencePageForModifiedWrite.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiDeleteClusterSection @ 0x14034A680 (MiDeleteClusterSection.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MmChangeImageProtection @ 0x140658F80 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x140A4E514 (MiTradeBootImagePage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1402ABE40 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x140511338 (KeSetPagePrivilege.c)
 */

char __fastcall MiClearPfnImageVerified(ULONG_PTR a1, char a2)
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
  result = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    if ( (a2 & 4) != 0 )
      v5 = 17;
    else
      v5 = MiLockPageInline(a1);
    if ( (a2 & 8) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(a1, 1, (unsigned __int64 *)&v14);
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
        if ( (int)KeSetPagePrivilege((__int64)(a1 + 0x58000000000LL) / 48, &v14, v8) < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, (__int64)(a1 + 0x58000000000LL) / 48, 0LL, 0LL);
      }
    }
    result = -1;
    *(_QWORD *)(a1 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    if ( v5 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
