/*
 * XREFs of MiLockNonPagedPoolPte @ 0x140544CB0
 * Callers:
 *     MiProbeLockFrame @ 0x1402AF5D0 (MiProbeLockFrame.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockNonPagedPoolPte(ULONG_PTR BugCheckParameter3, unsigned __int8 *a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  while ( 1 )
  {
    v4 = MI_READ_PTE_LOCK_FREE(BugCheckParameter3);
    v20 = v4;
    v5 = v4;
    if ( (v4 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x5307uLL, (__int64)(BugCheckParameter3 << 25) >> 16, BugCheckParameter3, 0LL);
    v6 = v4;
    if ( MiPteInShadowRange((unsigned __int64)&v20)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v10 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v20 >> 3) & 0x1FF));
        if ( (v10 & 0x20) != 0 )
          v5 = v6 | 0x20;
        if ( (v10 & 0x42) != 0 )
          v5 |= 0x42uLL;
      }
      else
      {
        v5 = v20;
      }
    }
    v11 = 48 * ((v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v12 = MiLockPageInline(v11, (__int64)Flink, v8, v9);
    v13 = v12;
    *a2 = v12;
    if ( v6 == MI_READ_PTE_LOCK_FREE(BugCheckParameter3) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
  }
  return v11;
}
