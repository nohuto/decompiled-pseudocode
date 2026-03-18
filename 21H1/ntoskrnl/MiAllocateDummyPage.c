/*
 * XREFs of MiAllocateDummyPage @ 0x140A4E210
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 *     MiInitializeDummyPages @ 0x140A4DFBC (MiInitializeDummyPages.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiSetPfnTbFlushStamp @ 0x140224C10 (MiSetPfnTbFlushStamp.c)
 *     MiAcquireNonPagedResources @ 0x140328924 (MiAcquireNonPagedResources.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 MiAllocateDummyPage()
{
  __int64 Page; // rax
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  char v7; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  int v10; // edx
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  MiAcquireNonPagedResources((__int64)&MiSystemPartition, 1uLL, 0LL, 1u);
  Page = MiGetPage((__int64)&MiSystemPartition, 0, 520LL);
  if ( Page == -1 )
    KeBugCheckEx(0x7Du, qword_140C52790, qword_140C52780, BugCheckParameter3, 0x102uLL);
  v1 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v1, 0, 0);
  *(_QWORD *)(v1 + 8) = 0xFFFFF68000000000uLL;
  v5 = (unsigned __int8)MiLockPageInline(v1, v2, v3, v4);
  v6 = MiSwizzleInvalidPte(128LL);
  v7 = *(_BYTE *)(v1 + 34);
  *(_QWORD *)(v1 + 16) = v6;
  v7 |= 7u;
  *(_WORD *)(v1 + 32) = 2;
  *(_BYTE *)(v1 + 34) = v7;
  *(_BYTE *)(v1 + 34) = v7 | 0x20;
  *(_BYTE *)(v1 + 34) |= 8u;
  *(_QWORD *)(v1 + 40) &= 0x7FFFFFF000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v1;
}
