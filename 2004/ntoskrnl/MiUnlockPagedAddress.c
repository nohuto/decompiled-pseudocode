/*
 * XREFs of MiUnlockPagedAddress @ 0x140531520
 * Callers:
 *     MiFreeClonePool @ 0x140555420 (MiFreeClonePool.c)
 *     MiFreeCombinePool @ 0x1405579D0 (MiFreeCombinePool.c)
 *     MiLockPagedRange @ 0x140715E10 (MiLockPagedRange.c)
 *     MiFreePatchTableProtos @ 0x1408C68C4 (MiFreePatchTableProtos.c)
 *     MiFreeCloneDescriptor @ 0x1408D60E8 (MiFreeCloneDescriptor.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v1 = v16;
  if ( MiPteInShadowRange((unsigned __int64)&v16)
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
        v5 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v16 >> 3) & 0x1FF));
        if ( (v5 & 0x20) != 0 )
          v1 |= 0x20uLL;
        if ( (v5 & 0x42) != 0 )
          v1 |= 0x42uLL;
      }
      else
      {
        v1 = v16;
      }
    }
  }
  v6 = 48 * ((v1 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v7 = (unsigned __int8)MiLockPageInline(v6, v2, (__int64)Flink, v4);
  MiRemoveLockedPageChargeAndDecRef(v6, v8, v9, v10);
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
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
