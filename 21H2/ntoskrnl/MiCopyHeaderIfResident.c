/*
 * XREFs of MiCopyHeaderIfResident @ 0x14029A080
 * Callers:
 *     MiCreateImageFileMap @ 0x1406AA6D4 (MiCreateImageFileMap.c)
 * Callees:
 *     MiUpdatePageAttributeStamp @ 0x140246A30 (MiUpdatePageAttributeStamp.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14030FA04 (MiTryLockProtoPoolPageAtDpc.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // r15
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbx
  char v11; // al
  unsigned __int64 v12; // rbx
  int v13; // r14d
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
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
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v37; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 v39; // [rsp+60h] [rbp+40h] BYREF
  __int64 v40; // [rsp+70h] [rbp+50h] BYREF
  __int64 v41; // [rsp+78h] [rbp+58h] BYREF

  v39 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140C4C9C0);
    v5 = *(__int64 **)(a1 + 40);
    if ( !v5 || (v6 = *v5) == 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
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
              v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v24 = (v37 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v37;
              if ( v24 )
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
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
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
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
  if ( (*(_DWORD *)(v6 + 56) & 3) != 0
    || (v9 = *(_QWORD *)(v6 + 136)) == 0
    || (int)MiTryLockProtoPoolPageAtDpc(*(_QWORD *)(v6 + 136), v8, &v41, &v39) < 0 )
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
  v10 = v39;
  v11 = *(_BYTE *)(v39 + 34);
  if ( (v11 & 0x20) != 0
    || (v11 & 0xC0) != 0x40
    || (*(_BYTE *)(v39 + 35) & 0x40) != 0
    || (unsigned int)MiIsPageOnBadList(v39) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v33 = KeGetCurrentPrcb();
      v34 = v33->SchedulerAssist;
      v24 = (v34[5] & 0xFFFF0007) == 0;
      v34[5] &= 0xFFFF0007;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v33);
      v10 = v39;
    }
    __writecr8(2uLL);
    v31 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_69;
  }
  v40 = MI_READ_PTE_LOCK_FREE(v9);
  v12 = v40;
  if ( (v40 & 1) != 0 )
  {
    if ( (unsigned int)MiPteInShadowRange(&v40)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v28 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v40 >> 3) & 0x1FF));
        if ( (v28 & 0x20) != 0 )
          v12 |= 0x20uLL;
        if ( (v28 & 0x42) != 0 )
          v12 |= 0x42uLL;
      }
      else
      {
        v12 = v40;
      }
    }
    v13 = 0;
  }
  else
  {
    if ( qword_140C4DF80 )
    {
      if ( (v40 & 0x10) != 0 )
        v12 = v40 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = ~qword_140C4DF80 & v40;
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
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_69:
    LOBYTE(v31) = v4;
    MiUnlockProtoPoolPage(v41, v31);
    return 0LL;
  }
  MiCopyPage(a2, v14, 0LL, 4LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v32 = KeGetCurrentPrcb();
      v16 = (__int64)v32->SchedulerAssist;
      v24 = (*(_DWORD *)(v16 + 20) & 0xFFFF0007) == 0;
      *(_DWORD *)(v16 + 20) &= 0xFFFF0007;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  __writecr8(2uLL);
  if ( v13 == 1 )
    MiUpdatePageAttributeStamp(v39, v16, v17, v18);
  v19 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v19) = v4;
  MiUnlockProtoPoolPage(v41, v19);
  return 1LL;
}
