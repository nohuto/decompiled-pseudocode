/*
 * XREFs of MiUnlockCodePage @ 0x1403A11A0
 * Callers:
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiHandleDriverNonPagedSections @ 0x14075CAD0 (MiHandleDriverNonPagedSections.c)
 *     MiUnlockDriverCode @ 0x140771884 (MiUnlockDriverCode.c)
 *     MmUnlockPreChargedPagedPool @ 0x1407773A0 (MmUnlockPreChargedPagedPool.c)
 *     MiUnlockDriverPages @ 0x1408C4F20 (MiUnlockDriverPages.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockCodePage(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx
  BOOL v8; // r12d
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  struct _LIST_ENTRY *Flink; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v20; // zf
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1;
  result = 0xFFFFF68000000000uLL;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a1 <= a2 )
  {
    v8 = MiPteInShadowRange((unsigned __int64)&v21);
    do
    {
      v9 = v7;
      v10 = v7;
      if ( !a3 )
        v9 = v5;
      v21 = MI_READ_PTE_LOCK_FREE(v9);
      v12 = v21;
      if ( v8
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v21 & 1) != 0
        && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v16 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v21 >> 3) & 0x1FF));
          if ( (v16 & 0x20) != 0 )
            v12 = v21 | 0x20;
          if ( (v16 & 0x42) != 0 )
            v12 |= 0x42uLL;
        }
        else
        {
          v12 = v21;
        }
      }
      v13 = (v12 >> 12) & 0xFFFFFFFFFLL;
      if ( a3 )
        v13 += (v5 >> 3) & 0x1FF;
      v14 = 48 * v13 - 0x58000000000LL;
      v15 = (unsigned __int8)MiLockPageInline(v14, v13, (__int64)Flink, (_DWORD *)v21);
      MiRemoveLockedPageChargeAndDecRef(v14);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v20 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v20 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v15);
      v5 += 8LL;
      v7 = v10 + 8;
      if ( (v5 & 0xFFF) != 0 )
        v7 = v10;
    }
    while ( v5 <= a2 );
  }
  return result;
}
