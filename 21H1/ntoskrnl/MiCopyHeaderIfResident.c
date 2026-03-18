/*
 * XREFs of MiCopyHeaderIfResident @ 0x1402BEB60
 * Callers:
 *     MiCreateImageFileMap @ 0x1406415A4 (MiCreateImageFileMap.c)
 * Callees:
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402D80A0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1402FD72C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiUpdatePageAttributeStamp @ 0x140318BB8 (MiUpdatePageAttributeStamp.c)
 *     MiIsPageOnBadList @ 0x14034906C (MiIsPageOnBadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rax
  __int64 v9; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  char v17; // al
  unsigned __int64 v18; // rbx
  int v19; // r14d
  ULONG_PTR v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  bool v29; // zf
  unsigned __int8 v30; // al
  bool v31; // cf
  struct _LIST_ENTRY *Flink; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  __int64 v38; // rdx
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v45; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 v47; // [rsp+60h] [rbp+40h] BYREF
  __int64 v48; // [rsp+70h] [rbp+50h] BYREF
  __int64 v49; // [rsp+78h] [rbp+58h] BYREF

  v47 = 0LL;
  v49 = 0LL;
  v48 = 0LL;
  while ( 1 )
  {
    v5 = ExAcquireSpinLockExclusive(&dword_140C4C8C0);
    v8 = *(__int64 **)(a1 + 40);
    if ( !v8 || (v9 = *v8) == 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu )
          {
            v31 = CurrentIrql < 2u;
LABEL_74:
            if ( !v31 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v29 = (v45 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v45;
              if ( v29 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            goto LABEL_5;
          }
        }
      }
      goto LABEL_5;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v9 + 72, v4, v6, v7) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v29 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
    }
    __writecr8(v5);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
  if ( (*(_DWORD *)(v9 + 56) & 3) != 0
    || (v12 = *(_QWORD *)(v9 + 136)) == 0
    || (int)MiTryLockProtoPoolPageAtDpc(*(_QWORD *)(v9 + 136), v11, &v49, &v47) < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && (unsigned __int8)v5 <= 0xFu )
        {
          v31 = v30 < 2u;
          goto LABEL_74;
        }
      }
    }
LABEL_5:
    __writecr8(v5);
    return 0LL;
  }
  v16 = v47;
  v17 = *(_BYTE *)(v47 + 34);
  if ( (v17 & 0x20) != 0
    || (v17 & 0xC0) != 0x40
    || (*(_BYTE *)(v47 + 35) & 0x40) != 0
    || (unsigned int)MiIsPageOnBadList(v47, v13, v14, v15) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v41 = KeGetCurrentPrcb();
      v42 = v41->SchedulerAssist;
      v29 = (v42[5] & 0xFFFF0007) == 0;
      v42[5] &= 0xFFFF0007;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick(v41);
      v16 = v47;
    }
    __writecr8(2uLL);
    v38 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_69;
  }
  v48 = MI_READ_PTE_LOCK_FREE(v12);
  v18 = v48;
  if ( (v48 & 1) != 0 )
  {
    if ( MiPteInShadowRange((unsigned __int64)&v48)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v33 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v48 >> 3) & 0x1FF));
        if ( (v33 & 0x20) != 0 )
          v18 |= 0x20uLL;
        if ( (v33 & 0x42) != 0 )
          v18 |= 0x42uLL;
      }
      else
      {
        v18 = v48;
      }
    }
    v19 = 0;
  }
  else
  {
    if ( qword_140C4DE80 )
    {
      if ( (v48 & 0x10) != 0 )
        v18 = v48 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v18 = ~qword_140C4DE80 & v48;
    }
    v19 = 1;
  }
  v20 = (v18 >> 12) & 0xFFFFFFFFFLL;
  v21 = 48 * a2 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v29 = (v37[5] & 0xFFFF0007) == 0;
        v37[5] &= 0xFFFF0007;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
    __writecr8(2uLL);
    v38 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_69:
    LOBYTE(v38) = v5;
    MiUnlockProtoPoolPage(v49, v38, v34, v35);
    return 0LL;
  }
  MiCopyPage(a2, v20, 0LL, 4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v39 = KeGetCurrentPrcb();
      v40 = v39->SchedulerAssist;
      v29 = (v40[5] & 0xFFFF0007) == 0;
      v40[5] &= 0xFFFF0007;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick(v39);
    }
  }
  __writecr8(2uLL);
  if ( v19 == 1 )
    MiUpdatePageAttributeStamp(v47);
  v24 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v24) = v5;
  MiUnlockProtoPoolPage(v49, v24, v22, v23);
  return 1LL;
}
