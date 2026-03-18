/*
 * XREFs of MiLockStealSystemVm @ 0x140321188
 * Callers:
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiSynchronizeSystemVa @ 0x1402BDCD0 (MiSynchronizeSystemVa.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     MmAttachSession @ 0x1402DCB20 (MmAttachSession.c)
 *     MiUnlockStealVm @ 0x14031BE4C (MiUnlockStealVm.c)
 *     MiReferenceOwningSession @ 0x1403205AC (MiReferenceOwningSession.c)
 *     MiSmallVaStillMapsFrame @ 0x140320F80 (MiSmallVaStillMapsFrame.c)
 *     MiVaIsPageFileHash @ 0x14033C948 (MiVaIsPageFileHash.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiLockStealSystemVm(ULONG_PTR a1, unsigned __int8 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int SystemRegionType; // r15d
  unsigned int v13; // edi
  int v14; // r13d
  char v15; // al
  bool v16; // zf
  int v17; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  char *AnyMultiplexedVm; // rax
  char *v23; // r14
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r8
  int v27; // eax
  _KPROCESS *v28; // rcx
  unsigned __int64 SessionVm; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r8
  int v33; // eax
  char *v34; // rax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r8
  int v38; // eax
  int v39; // r11d
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r8
  int v43; // eax
  unsigned __int64 v44; // rbx
  __int64 v46; // rcx
  int IsPfnFileOnly; // eax
  int v48; // r8d
  unsigned int v49; // r8d
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r8
  int v53; // eax
  __int64 v54; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v55; // [rsp+80h] [rbp+18h]
  __int64 v56; // [rsp+88h] [rbp+20h]

  v55 = a3;
  v6 = a2;
  v7 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  v56 = v7;
  v8 = (__int64)(a3 << 25) >> 16;
  SystemRegionType = MiGetSystemRegionType(v8);
  v13 = 0;
  if ( v8 < 0xFFFFF68000000000uLL || (v14 = 1, v8 > 0xFFFFF6FFFFFFFFFFuLL) )
    v14 = 0;
  if ( SystemRegionType == 5 )
  {
    v15 = *(_BYTE *)(a1 + 35);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v16 = (v15 & 0x10) == 0;
    v17 = KiIrqlFlags;
    if ( v16 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v16 = (v21 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v21;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
      *(_DWORD *)(a4 + 8) |= 0x20u;
      v23 = AnyMultiplexedVm;
      goto LABEL_54;
    }
    goto LABEL_74;
  }
  if ( SystemRegionType != 1 )
  {
    if ( SystemRegionType == 6 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v30 = KeGetCurrentIrql();
          if ( v30 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v30 >= 2u )
          {
            v31 = KeGetCurrentPrcb();
            v32 = v31->SchedulerAssist;
            v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v16 = (v33 & v32[5]) == 0;
            v32[5] &= v33;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
      }
      __writecr8(v6);
      v34 = MiGetAnyMultiplexedVm(2);
      *(_DWORD *)(a4 + 8) |= 0x10u;
      v23 = v34;
    }
    else if ( SystemRegionType == 12 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = v36->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v16 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
      }
      __writecr8(v6);
      v23 = MiGetAnyMultiplexedVm(1);
      *(_DWORD *)(a4 + 48) = v39;
    }
    else
    {
      if ( SystemRegionType != 9 || !MiVaIsPageFileHash(v7, v8) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v17 = KiIrqlFlags;
LABEL_74:
        if ( v17 )
        {
          if ( (v17 & 1) != 0 )
          {
            v50 = KeGetCurrentIrql();
            if ( v50 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v50 >= 2u )
            {
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v16 = (v53 & v52[5]) == 0;
              v52[5] &= v53;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
        }
        __writecr8(v6);
        return 0LL;
      }
      v23 = MiGetAnyMultiplexedVm(3);
      *(_DWORD *)(a4 + 48) = 2;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v40 = KeGetCurrentIrql();
          if ( v40 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v40 >= 2u )
          {
            v41 = KeGetCurrentPrcb();
            v42 = v41->SchedulerAssist;
            v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v16 = (v43 & v42[5]) == 0;
            v42[5] &= v43;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v41);
          }
        }
      }
      __writecr8(v6);
    }
LABEL_54:
    if ( !(unsigned int)MiSynchronizeSystemVa((__int64)v23, v8, SystemRegionType, v14, a4) )
      goto LABEL_58;
    v44 = (__int64)(a1 + 0x58000000000LL) / 48;
    if ( v14 )
    {
      if ( !MiSmallVaStillMapsFrame(v8, (__int64)(a1 + 0x58000000000LL) / 48) )
      {
LABEL_57:
        v13 = 2;
LABEL_58:
        MiUnlockStealVm(a4);
        if ( (v23[184] & 7) != 3 )
          return v13;
        return 0LL;
      }
    }
    else
    {
      v54 = MI_READ_PTE_LOCK_FREE(v55);
      if ( (v54 & 1) == 0
        || (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v54) >> 12) & 0xFFFFFFFFFLL) != v44 )
      {
        goto LABEL_57;
      }
    }
    if ( ((unsigned int)(*(_DWORD *)(a4 + 48) - 2) <= 1
       || (*(_DWORD *)(a4 + 8) & 0x20) != 0
       || (*(_BYTE *)a1 & 1) != 0 && (*(_BYTE *)(a1 + 35) & 8) == 0)
      && v44 <= 0xFFFFFFFFFLL
      && (*(_QWORD *)(48 * v44 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0
      && *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) == v56
      && !(unsigned int)MI_PFN_IS_PROTO(a1) )
    {
      IsPfnFileOnly = MiIsPfnFileOnly(v46);
      if ( IsPfnFileOnly != v48 && !MiIsPfnFromSlabAllocation(a1) )
        return v49;
    }
    goto LABEL_58;
  }
  *(_QWORD *)(a4 + 56) = MiReferenceOwningSession(a1, v9, v10, v11);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v16 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
  }
  __writecr8(v6);
  v28 = *(_KPROCESS **)(a4 + 56);
  if ( v28 )
  {
    if ( (int)MmAttachSession(v28, a4 + 72) >= 0 )
    {
      SessionVm = MiGetSessionVm();
      *(_DWORD *)(a4 + 8) |= 0x80u;
      v23 = (char *)SessionVm;
      goto LABEL_54;
    }
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return 0LL;
}
