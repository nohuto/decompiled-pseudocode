/*
 * XREFs of MiLockStealSystemVm @ 0x140298704
 * Callers:
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x140218D60 (MiIsPfnFileOnly.c)
 *     MiUnlockStealVm @ 0x14026D310 (MiUnlockStealVm.c)
 *     MmAttachSession @ 0x140298FE0 (MmAttachSession.c)
 *     MiReferenceOwningSession @ 0x14029947C (MiReferenceOwningSession.c)
 *     MiSmallVaStillMapsFrame @ 0x1402CE1F8 (MiSmallVaStillMapsFrame.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiIsPfnFromSlabAllocation @ 0x140302EF0 (MiIsPfnFromSlabAllocation.c)
 *     MiVaIsPageFileHash @ 0x140302FFC (MiVaIsPageFileHash.c)
 *     MiSynchronizeSystemVa @ 0x140311C40 (MiSynchronizeSystemVa.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiLockStealSystemVm(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  int SystemRegionType; // r15d
  unsigned int v10; // edi
  int v11; // r13d
  char v12; // al
  bool v13; // zf
  int v14; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v18; // eax
  __int64 AnyMultiplexedVm; // rax
  __int64 v20; // r14
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r8
  int v24; // eax
  ULONG_PTR v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 SessionVm; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r8
  int v33; // eax
  __int64 v34; // rax
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
  __int64 v55; // [rsp+80h] [rbp+18h]
  __int64 v56; // [rsp+88h] [rbp+20h]

  v55 = a3;
  v6 = a2;
  v7 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  v56 = v7;
  v8 = a3 << 25 >> 16;
  SystemRegionType = MiGetSystemRegionType(v8);
  v10 = 0;
  if ( v8 < 0xFFFFF68000000000uLL || (v11 = 1, v8 > 0xFFFFF6FFFFFFFFFFuLL) )
    v11 = 0;
  if ( SystemRegionType == 5 )
  {
    v12 = *(_BYTE *)(a1 + 35);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v13 = (v12 & 0x10) == 0;
    v14 = KiIrqlFlags;
    if ( v13 )
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
            v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v13 = (v18 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v18;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
      *(_DWORD *)(a4 + 8) |= 0x20u;
      v20 = AnyMultiplexedVm;
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
            v13 = (v33 & v32[5]) == 0;
            v32[5] &= v33;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
      }
      __writecr8(v6);
      v34 = MiGetAnyMultiplexedVm(2LL);
      *(_DWORD *)(a4 + 8) |= 0x10u;
      v20 = v34;
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
            v13 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
      }
      __writecr8(v6);
      v20 = MiGetAnyMultiplexedVm(1LL);
      *(_DWORD *)(a4 + 48) = v39;
    }
    else
    {
      if ( SystemRegionType != 9 || !MiVaIsPageFileHash(v7, v8) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v14 = KiIrqlFlags;
LABEL_74:
        if ( v14 )
        {
          if ( (v14 & 1) != 0 )
          {
            v50 = KeGetCurrentIrql();
            if ( v50 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v50 >= 2u )
            {
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v13 = (v53 & v52[5]) == 0;
              v52[5] &= v53;
              if ( v13 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
        }
        __writecr8(v6);
        return 0LL;
      }
      v20 = MiGetAnyMultiplexedVm(3LL);
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
            v13 = (v43 & v42[5]) == 0;
            v42[5] &= v43;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(v41);
          }
        }
      }
      __writecr8(v6);
    }
LABEL_54:
    if ( !(unsigned int)MiSynchronizeSystemVa(v20, v8, SystemRegionType, v11, a4) )
      goto LABEL_58;
    v44 = (a1 + 0x58000000000LL) / 48;
    if ( v11 )
    {
      if ( !(unsigned int)MiSmallVaStillMapsFrame(v8, (a1 + 0x58000000000LL) / 48) )
      {
LABEL_57:
        v10 = 2;
LABEL_58:
        MiUnlockStealVm(a4);
        if ( (*(_BYTE *)(v20 + 184) & 7) != 3 )
          return v10;
        return 0LL;
      }
    }
    else
    {
      v54 = MI_READ_PTE_LOCK_FREE(v55);
      if ( (v54 & 1) == 0 || (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v54) >> 12) & 0xFFFFFFFFFLL) != v44 )
        goto LABEL_57;
    }
    if ( ((unsigned int)(*(_DWORD *)(a4 + 48) - 2) <= 1
       || (*(_DWORD *)(a4 + 8) & 0x20) != 0
       || (*(_BYTE *)a1 & 1) != 0 && (*(_BYTE *)(a1 + 35) & 8) == 0)
      && v44 <= 0xFFFFFFFFFLL
      && (*(_QWORD *)(48 * v44 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0
      && *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) == v56
      && !(unsigned int)MI_PFN_IS_PROTO(a1) )
    {
      IsPfnFileOnly = MiIsPfnFileOnly(v46);
      if ( IsPfnFileOnly != v48 && !(unsigned int)MiIsPfnFromSlabAllocation(a1) )
        return v49;
    }
    goto LABEL_58;
  }
  *(_QWORD *)(a4 + 56) = MiReferenceOwningSession(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v13 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
  }
  __writecr8(v6);
  v25 = *(_QWORD *)(a4 + 56);
  if ( v25 )
  {
    if ( (int)MmAttachSession(v25) >= 0 )
    {
      SessionVm = MiGetSessionVm(v27, v26, v28);
      *(_DWORD *)(a4 + 8) |= 0x80u;
      v20 = SessionVm;
      goto LABEL_54;
    }
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return 0LL;
}
