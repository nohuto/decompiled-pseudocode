/*
 * XREFs of MiUnlockPagedAddress @ 0x140536C30
 * Callers:
 *     MiFreeClonePool @ 0x14055AB00 (MiFreeClonePool.c)
 *     MiFreeCombinePool @ 0x14055D0B0 (MiFreeCombinePool.c)
 *     MiLockPagedRange @ 0x140727D10 (MiLockPagedRange.c)
 *     MiFreePatchTableProtos @ 0x1408CA024 (MiFreePatchTableProtos.c)
 *     MiFreeCloneDescriptor @ 0x1408D9848 (MiFreeCloneDescriptor.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockPagedAddress(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  struct _LIST_ENTRY *Flink; // r8
  _DWORD *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v1 = v13;
  if ( MiPteInShadowRange((unsigned __int64)&v13)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0 )
  {
    v2 = v1;
    if ( (v1 & 0x20) == 0 || (v1 & 0x42) == 0 )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v5 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v13 >> 3) & 0x1FF));
        if ( (v5 & 0x20) != 0 )
          v1 |= 0x20uLL;
        if ( (v5 & 0x42) != 0 )
          v1 |= 0x42uLL;
      }
      else
      {
        v1 = v13;
      }
    }
  }
  v6 = 48 * ((v1 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v7 = (unsigned __int8)MiLockPageInline(v6, v2, (__int64)Flink, v4);
  MiRemoveLockedPageChargeAndDecRef(v6);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
