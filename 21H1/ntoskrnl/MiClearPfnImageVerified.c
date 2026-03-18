/*
 * XREFs of MiClearPfnImageVerified @ 0x140353638
 * Callers:
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiReadyLargePageToFree @ 0x140223170 (MiReadyLargePageToFree.c)
 *     MiDeleteClusterSection @ 0x140280410 (MiDeleteClusterSection.c)
 *     MiDeleteClusterPage @ 0x14028DDB0 (MiDeleteClusterPage.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiProbeLeafPteAccess @ 0x1402A77A0 (MiProbeLeafPteAccess.c)
 *     MiDeletePerSessionProtos @ 0x14031F1CC (MiDeletePerSessionProtos.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 *     MiReferencePageForModifiedWrite @ 0x1403536FC (MiReferencePageForModifiedWrite.c)
 *     MmChangeImageProtection @ 0x1406EF580 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x140A42A24 (MiTradeBootImagePage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x14050D3B8 (KeSetPagePrivilege.c)
 */

char __fastcall MiClearPfnImageVerified(ULONG_PTR a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v5; // si
  char result; // al
  unsigned __int8 v7; // di
  int PagePrivilege; // eax
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = 0LL;
  v5 = a2;
  result = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    if ( (a2 & 4) != 0 )
      v7 = 17;
    else
      v7 = MiLockPageInline(a1, a2, a3, a4);
    if ( (v5 & 8) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(a1, 1, (unsigned __int64 *)&v16);
      if ( PagePrivilege )
      {
        if ( (PagePrivilege & 0x20) != 0 )
          v9 = 512;
        else
          v9 = (v5 & 0x10) != 0 ? 32 : 16;
        v10 = v9;
        LODWORD(v10) = v9 | 0x80;
        if ( (v5 & 0x40) == 0 )
          v10 = v9;
        if ( (int)KeSetPagePrivilege((__int64)(a1 + 0x58000000000LL) / 48, &v16, v10) < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, (__int64)(a1 + 0x58000000000LL) / 48, 0LL, 0LL);
      }
    }
    result = -1;
    *(_QWORD *)(a1 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    if ( v7 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v14 = ~(unsigned __int16)(-1LL << (v7 + 1));
            v15 = (v14 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v14;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = v7;
      __writecr8(v7);
    }
  }
  return result;
}
