/*
 * XREFs of MiCopyHeaderIfResident @ 0x140355BE4
 * Callers:
 *     MiCreateImageFileMap @ 0x1407084A8 (MiCreateImageFileMap.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiUpdatePageAttributeStamp @ 0x140326FF8 (MiUpdatePageAttributeStamp.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14033F2C0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsPageOnBadList @ 0x14034D80C (MiIsPageOnBadList.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14034F510 (MiTryLockProtoPoolPageAtDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  char v11; // al
  unsigned __int64 v12; // rbx
  int v13; // r14d
  ULONG_PTR v14; // rbx
  __int64 v15; // rsi
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  bool v22; // cf
  struct _LIST_ENTRY *Flink; // r8
  __int64 v24; // rax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v33; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 v35; // [rsp+60h] [rbp+40h] BYREF
  __int64 v36; // [rsp+70h] [rbp+50h] BYREF
  __int64 v37; // [rsp+78h] [rbp+58h] BYREF

  v35 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140C4C800);
    v5 = *(__int64 **)(a1 + 40);
    if ( !v5 || (v6 = *v5) == 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu )
          {
            v22 = CurrentIrql < 2u;
LABEL_74:
            if ( !v22 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v20 = (v33 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v33;
              if ( v20 )
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
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
    }
    __writecr8(v4);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
  if ( (*(_DWORD *)(v6 + 56) & 3) != 0
    || (v9 = *(_QWORD *)(v6 + 136)) == 0
    || (int)MiTryLockProtoPoolPageAtDpc(*(__int64 **)(v6 + 136), v8, &v37, &v35) < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && (unsigned __int8)v4 <= 0xFu )
        {
          v22 = v21 < 2u;
          goto LABEL_74;
        }
      }
    }
LABEL_5:
    __writecr8(v4);
    return 0LL;
  }
  v10 = v35;
  v11 = *(_BYTE *)(v35 + 34);
  if ( (v11 & 0x20) != 0 || (v11 & 0xC0) != 0x40 || (*(_BYTE *)(v35 + 35) & 0x40) != 0 || MiIsPageOnBadList(v35) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      v20 = (v30[5] & 0xFFFF0007) == 0;
      v30[5] &= 0xFFFF0007;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(v29);
      v10 = v35;
    }
    __writecr8(2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_69;
  }
  v36 = MI_READ_PTE_LOCK_FREE(v9);
  v12 = v36;
  if ( (v36 & 1) != 0 )
  {
    if ( MiPteInShadowRange((unsigned __int64)&v36)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v24 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v36 >> 3) & 0x1FF));
        if ( (v24 & 0x20) != 0 )
          v12 |= 0x20uLL;
        if ( (v24 & 0x42) != 0 )
          v12 |= 0x42uLL;
      }
      else
      {
        v12 = v36;
      }
    }
    v13 = 0;
  }
  else
  {
    if ( qword_140C4DDC0 )
    {
      if ( (v36 & 0x10) != 0 )
        v12 = v36 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = ~qword_140C4DDC0 & v36;
    }
    v13 = 1;
  }
  v14 = (v12 >> 12) & 0xFFFFFFFFFLL;
  v15 = 48 * a2 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v20 = (v26[5] & 0xFFFF0007) == 0;
        v26[5] &= 0xFFFF0007;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
    __writecr8(2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_69:
    MiUnlockProtoPoolPage(v37, v4);
    return 0LL;
  }
  MiCopyPage(a2, v14, 0LL, 4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      v20 = (v28[5] & 0xFFFF0007) == 0;
      v28[5] &= 0xFFFF0007;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(v27);
    }
  }
  __writecr8(2uLL);
  if ( v13 == 1 )
    MiUpdatePageAttributeStamp(v35);
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v37, v4);
  return 1LL;
}
