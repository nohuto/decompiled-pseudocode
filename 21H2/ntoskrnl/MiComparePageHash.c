/*
 * XREFs of MiComparePageHash @ 0x14055D580
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14055D95C (MiValidatePagefilePageHash.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComparePageHash(__int64 a1, unsigned int a2, int a3)
{
  volatile LONG *v3; // r15
  __int64 v4; // rbx
  unsigned int v6; // esi
  int v8; // r14d
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  struct _LIST_ENTRY *Flink; // r8
  __int64 v18; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v22; // eax
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v3 = (volatile LONG *)(a1 + 232);
  v4 = a2;
  v6 = 0;
  v8 = 0;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v10 = *(_QWORD *)(a1 + 216) + 4 * v4;
  v24 = MI_READ_PTE_LOCK_FREE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = v24;
  if ( (v24 & 1) != 0 && *(_DWORD *)v10 != a3 )
  {
    if ( MiPteInShadowRange((unsigned __int64)&v24)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v18 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v24 >> 3) & 0x1FF));
        if ( (v18 & 0x20) != 0 )
          v11 |= 0x20uLL;
        if ( (v18 & 0x42) != 0 )
          v11 |= 0x42uLL;
      }
      else
      {
        v11 = v24;
      }
    }
    if ( (*(_BYTE *)(48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 34) & 0x10) != 0 )
    {
      if ( !byte_140C4E8C0 )
        v8 = -1073741761;
    }
    else
    {
      *(_DWORD *)v10 = a3;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v16 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    v6 = v8;
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = v13->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v16 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v13);
        }
      }
    }
  }
  __writecr8(v9);
  return v6;
}
