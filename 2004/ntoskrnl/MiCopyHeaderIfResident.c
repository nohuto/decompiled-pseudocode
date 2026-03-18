/*
 * XREFs of MiCopyHeaderIfResident @ 0x140265B30
 * Callers:
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402E41B0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsPageOnBadList @ 0x140319D2C (MiIsPageOnBadList.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14033AA6C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiUpdatePageAttributeStamp @ 0x1403567A8 (MiUpdatePageAttributeStamp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  char v14; // al
  unsigned __int64 v15; // rbx
  int v16; // r14d
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  bool v26; // cf
  struct _LIST_ENTRY *Flink; // r8
  __int64 v28; // rax
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  __int64 v31; // rdx
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v38; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 v40; // [rsp+60h] [rbp+40h] BYREF
  __int64 v41; // [rsp+70h] [rbp+50h] BYREF
  __int64 v42; // [rsp+78h] [rbp+58h] BYREF

  v40 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140C4C780);
    v5 = *(__int64 **)(a1 + 40);
    if ( !v5 || (v6 = *v5) == 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C780);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu )
          {
            v26 = CurrentIrql < 2u;
LABEL_74:
            if ( !v26 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v24 = (v38 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v38;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            goto LABEL_5;
          }
        }
      }
      goto LABEL_5;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v6 + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C780);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v24 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    __writecr8(v4);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C780);
  if ( (*(_DWORD *)(v6 + 56) & 3) != 0
    || (v9 = *(_QWORD *)(v6 + 136)) == 0
    || (int)MiTryLockProtoPoolPageAtDpc(*(_QWORD *)(v6 + 136), v8, &v42, &v40) < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && (unsigned __int8)v4 <= 0xFu )
        {
          v26 = v25 < 2u;
          goto LABEL_74;
        }
      }
    }
LABEL_5:
    __writecr8(v4);
    return 0LL;
  }
  v13 = v40;
  v14 = *(_BYTE *)(v40 + 34);
  if ( (v14 & 0x20) != 0
    || (v14 & 0xC0) != 0x40
    || (*(_BYTE *)(v40 + 35) & 0x40) != 0
    || (unsigned int)MiIsPageOnBadList(v40, v10, v11, v12) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      v24 = (v35[5] & 0xFFFF0007) == 0;
      v35[5] &= 0xFFFF0007;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v34);
      v13 = v40;
    }
    __writecr8(2uLL);
    v31 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_69;
  }
  v41 = MI_READ_PTE_LOCK_FREE(v9);
  v15 = v41;
  if ( (v41 & 1) != 0 )
  {
    if ( MiPteInShadowRange((unsigned __int64)&v41)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v28 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v41 >> 3) & 0x1FF));
        if ( (v28 & 0x20) != 0 )
          v15 |= 0x20uLL;
        if ( (v28 & 0x42) != 0 )
          v15 |= 0x42uLL;
      }
      else
      {
        v15 = v41;
      }
    }
    v16 = 0;
  }
  else
  {
    if ( qword_140C4DD40 )
    {
      if ( (v41 & 0x10) != 0 )
        v15 = v41 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v15 = ~qword_140C4DD40 & v41;
    }
    v16 = 1;
  }
  v17 = (v15 >> 12) & 0xFFFFFFFFFLL;
  v18 = 48 * a2 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v24 = (v30[5] & 0xFFFF0007) == 0;
        v30[5] &= 0xFFFF0007;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(2uLL);
    v31 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_69:
    LOBYTE(v31) = v4;
    MiUnlockProtoPoolPage(v42, v31);
    return 0LL;
  }
  MiCopyPage(a2, v17, 0LL, 4LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      v24 = (v33[5] & 0xFFFF0007) == 0;
      v33[5] &= 0xFFFF0007;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  __writecr8(2uLL);
  if ( v16 == 1 )
    MiUpdatePageAttributeStamp(v40);
  v19 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v19) = v4;
  MiUnlockProtoPoolPage(v42, v19);
  return 1LL;
}
