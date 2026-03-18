/*
 * XREFs of MiCopyHeaderIfResident @ 0x14029E440
 * Callers:
 *     MiCreateImageFileMap @ 0x140707E70 (MiCreateImageFileMap.c)
 * Callees:
 *     MiUpdatePageAttributeStamp @ 0x14024DD20 (MiUpdatePageAttributeStamp.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14026FA0C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiIsPageOnBadList @ 0x140273354 (MiIsPageOnBadList.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 *v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rdi
  char v12; // al
  unsigned __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  bool v24; // cf
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  __int64 v27; // rdx
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v34; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 v36; // [rsp+60h] [rbp+40h] BYREF
  __int64 v37; // [rsp+70h] [rbp+50h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp+58h] BYREF

  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140C4F100);
    v5 = *(__int64 **)(a1 + 40);
    v6 = v4;
    if ( !v5 || (v7 = *v5) == 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu )
          {
            v24 = CurrentIrql < 2u;
LABEL_63:
            if ( !v24 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v22 = (v34 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v34;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            goto LABEL_5;
          }
        }
      }
      goto LABEL_5;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v22 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    __writecr8(v6);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
  if ( (*(_DWORD *)(v7 + 56) & 3) != 0
    || (v10 = *(_QWORD *)(v7 + 136)) == 0
    || (int)MiTryLockProtoPoolPageAtDpc(*(_QWORD *)(v7 + 136), v9, &v37, (__int64)&v36) < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && (unsigned __int8)v6 <= 0xFu )
        {
          v24 = v23 < 2u;
          goto LABEL_63;
        }
      }
    }
LABEL_5:
    __writecr8(v6);
    return 0LL;
  }
  v11 = v36;
  v12 = *(_BYTE *)(v36 + 34);
  if ( (v12 & 0x20) != 0 || (v12 & 0xC0) != 0x40 || (*(_BYTE *)(v36 + 35) & 0x40) != 0 || MiIsPageOnBadList(v36) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v30 = KeGetCurrentPrcb();
      v31 = v30->SchedulerAssist;
      v22 = (v31[5] & 0xFFFF0007) == 0;
      v31[5] &= 0xFFFF0007;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(v30);
      v11 = v36;
    }
    __writecr8(2uLL);
    v27 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_58;
  }
  v13 = MI_READ_PTE_LOCK_FREE(v10);
  v38 = v13;
  if ( (v13 & 1) != 0 )
  {
    v13 = MI_READ_PTE_LOCK_FREE(&v38);
    v14 = 0;
  }
  else
  {
    if ( qword_140C50780 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140C50780;
    }
    v14 = 1;
  }
  v15 = (v13 >> 12) & 0xFFFFFFFFFFLL;
  v16 = 48 * a2 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v22 = (v26[5] & 0xFFFF0007) == 0;
        v26[5] &= 0xFFFF0007;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
    __writecr8(2uLL);
    v27 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_58:
    LOBYTE(v27) = v6;
    MiUnlockProtoPoolPage(v37, v27);
    return 0LL;
  }
  MiCopyPage(a2, v15, 0LL, 4LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      v22 = (v29[5] & 0xFFFF0007) == 0;
      v29[5] &= 0xFFFF0007;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(v28);
    }
  }
  __writecr8(2uLL);
  if ( v14 )
    MiUpdatePageAttributeStamp(v36);
  v17 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v17) = v6;
  MiUnlockProtoPoolPage(v37, v17);
  return 1LL;
}
