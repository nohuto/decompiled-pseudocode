/*
 * XREFs of MiCopyHeaderIfResident @ 0x1402E8D30
 * Callers:
 *     MiCreateImageFileMap @ 0x1406D33F4 (MiCreateImageFileMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140261880 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdatePageAttributeStamp @ 0x1402C81D0 (MiUpdatePageAttributeStamp.c)
 *     MiIsPageOnBadList @ 0x14030356C (MiIsPageOnBadList.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140304CB4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // r15
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  int v14; // r14d
  ULONG_PTR v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  bool v25; // cf
  struct _LIST_ENTRY *Flink; // r8
  __int64 v27; // rax
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  struct _KPRCB *v30; // rcx
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v35; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 v37; // [rsp+60h] [rbp+40h] BYREF
  __int64 v38; // [rsp+70h] [rbp+50h] BYREF
  __int64 v39; // [rsp+78h] [rbp+58h] BYREF

  v37 = 0LL;
  v39 = 0LL;
  v38 = 0LL;
  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140C4C980);
    v5 = *(__int64 **)(a1 + 40);
    if ( !v5 || (v6 = *v5) == 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C980);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu )
          {
            v25 = CurrentIrql < 2u;
LABEL_74:
            if ( !v25 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v23 = (v35 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v35;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            goto LABEL_5;
          }
        }
      }
      goto LABEL_5;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v6 + 72)) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C980);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v23 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    __writecr8(v4);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C980);
  if ( (*(_DWORD *)(v6 + 56) & 3) != 0
    || (v9 = *(_QWORD *)(v6 + 136)) == 0
    || (int)MiTryLockProtoPoolPageAtDpc(*(_QWORD *)(v6 + 136), v8, &v39, &v37) < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && (unsigned __int8)v4 <= 0xFu )
        {
          v25 = v24 < 2u;
          goto LABEL_74;
        }
      }
    }
LABEL_5:
    __writecr8(v4);
    return 0LL;
  }
  v10 = v37;
  v11 = *(_BYTE *)(v37 + 34);
  if ( (v11 & 0x20) != 0
    || (v11 & 0xC0) != 0x40
    || (*(_BYTE *)(v37 + 35) & 0x40) != 0
    || (unsigned int)MiIsPageOnBadList(v37) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v31 = KeGetCurrentPrcb();
      v32 = v31->SchedulerAssist;
      v23 = (v32[5] & 0xFFFF0007) == 0;
      v32[5] &= 0xFFFF0007;
      if ( v23 )
        KiRemoveSystemWorkPriorityKick(v31);
      v10 = v37;
    }
    __writecr8(2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_69;
  }
  v38 = MI_READ_PTE_LOCK_FREE(v9);
  v13 = v38;
  if ( (v38 & 1) != 0 )
  {
    if ( (unsigned int)MiPteInShadowRange(&v38, v12)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v27 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v38 >> 3) & 0x1FF));
        if ( (v27 & 0x20) != 0 )
          v13 |= 0x20uLL;
        if ( (v27 & 0x42) != 0 )
          v13 |= 0x42uLL;
      }
      else
      {
        v13 = v38;
      }
    }
    v14 = 0;
  }
  else
  {
    if ( qword_140C4DF40 )
    {
      if ( (v38 & 0x10) != 0 )
        v13 = v38 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v13 = ~qword_140C4DF40 & v38;
    }
    v14 = 1;
  }
  v15 = (v13 >> 12) & 0xFFFFFFFFFLL;
  v16 = 48 * a2 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v23 = (v29[5] & 0xFFFF0007) == 0;
        v29[5] &= 0xFFFF0007;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
    __writecr8(2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_69:
    MiUnlockProtoPoolPage(v39, v4);
    return 0LL;
  }
  MiCopyPage(a2, v15, 0LL, 4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v30 = KeGetCurrentPrcb();
      v17 = (__int64)v30->SchedulerAssist;
      v23 = (*(_DWORD *)(v17 + 20) & 0xFFFF0007) == 0;
      *(_DWORD *)(v17 + 20) &= 0xFFFF0007;
      if ( v23 )
        KiRemoveSystemWorkPriorityKick(v30);
    }
  }
  __writecr8(2uLL);
  if ( v14 == 1 )
    MiUpdatePageAttributeStamp(v37, v17, v18);
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v39, v4);
  return 1LL;
}
