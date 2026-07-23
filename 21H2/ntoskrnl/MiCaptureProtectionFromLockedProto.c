/*
 * XREFs of MiCaptureProtectionFromLockedProto @ 0x14036C920
 * Callers:
 *     MiGetPageProtection @ 0x14033BAF0 (MiGetPageProtection.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiCaptureProtectionFromLockedProto(unsigned __int64 a1)
{
  unsigned __int64 v2; // rbx
  struct _LIST_ENTRY *Flink; // r8
  _DWORD *v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  int v19; // eax
  _DWORD *v20; // r8
  __int64 v21; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    do
    {
      v21 = MI_READ_PTE_LOCK_FREE(a1);
      v2 = v21;
      if ( (v21 & 1) == 0 )
      {
        v9 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 5;
        return v9 & 0x1F;
      }
      if ( MiPteInShadowRange((unsigned __int64)&v21)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v11 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v21 >> 3) & 0x1FF));
          if ( (v11 & 0x20) != 0 )
            v2 |= 0x20uLL;
          if ( (v11 & 0x42) != 0 )
            v2 |= 0x42uLL;
        }
        else
        {
          v2 = v21;
        }
      }
      v5 = (v2 >> 12) & 0xFFFFFFFFFLL;
    }
    while ( (*(_QWORD *)(48 * v5 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
    v6 = 48 * v5 - 0x58000000000LL;
    v7 = (unsigned __int8)MiLockPageInline(v6, 0x4000000000000LL, (__int64)Flink, v4);
    v8 = MI_READ_PTE_LOCK_FREE(a1);
    if ( v21 == v8 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  v9 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(v6 + 16) >> 5;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v20 = v18->SchedulerAssist;
        v16 = (v19 & v20[5]) == 0;
        v20[5] &= v19;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  __writecr8(v7);
  return v9 & 0x1F;
}
