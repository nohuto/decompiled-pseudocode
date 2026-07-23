/*
 * XREFs of MiLockStealSystemVm @ 0x1402150E4
 * Callers:
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 * Callees:
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     MiReferenceOwningSession @ 0x140215E5C (MiReferenceOwningSession.c)
 *     MiSmallVaStillMapsFrame @ 0x14024C6F8 (MiSmallVaStillMapsFrame.c)
 *     MiUnlockStealVm @ 0x14025B2B0 (MiUnlockStealVm.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiVaIsPageFileHash @ 0x14030DD4C (MiVaIsPageFileHash.c)
 *     MiSynchronizeSystemVa @ 0x14031C990 (MiSynchronizeSystemVa.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
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
  __int64 SessionVm; // rax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r8
  int v30; // eax
  __int64 v31; // rax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r8
  int v35; // eax
  int v36; // r11d
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r8
  int v40; // eax
  unsigned __int64 v41; // rbx
  int IsPfnFileOnly; // eax
  int v44; // r8d
  unsigned int v45; // r8d
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r8
  int v49; // eax
  __int64 v50; // [rsp+70h] [rbp+8h] BYREF
  __int64 v51; // [rsp+80h] [rbp+18h]
  __int64 v52; // [rsp+88h] [rbp+20h]

  v51 = a3;
  v6 = a2;
  v7 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  v52 = v7;
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
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v13 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
      }
      __writecr8(v6);
      v31 = MiGetAnyMultiplexedVm(2LL);
      *(_DWORD *)(a4 + 8) |= 0x10u;
      v20 = v31;
    }
    else if ( SystemRegionType == 12 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v32 = KeGetCurrentIrql();
          if ( v32 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v32 >= 2u )
          {
            v33 = KeGetCurrentPrcb();
            v34 = v33->SchedulerAssist;
            v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v13 = (v35 & v34[5]) == 0;
            v34[5] &= v35;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
      }
      __writecr8(v6);
      v20 = MiGetAnyMultiplexedVm(1LL);
      *(_DWORD *)(a4 + 48) = v36;
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
            v46 = KeGetCurrentIrql();
            if ( v46 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v46 >= 2u )
            {
              v47 = KeGetCurrentPrcb();
              v48 = v47->SchedulerAssist;
              v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v13 = (v49 & v48[5]) == 0;
              v48[5] &= v49;
              if ( v13 )
                KiRemoveSystemWorkPriorityKick(v47);
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
          v37 = KeGetCurrentIrql();
          if ( v37 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v37 >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            v39 = v38->SchedulerAssist;
            v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v13 = (v40 & v39[5]) == 0;
            v39[5] &= v40;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
      }
      __writecr8(v6);
    }
LABEL_54:
    if ( !(unsigned int)MiSynchronizeSystemVa(v20, v8, SystemRegionType, v11, a4) )
      goto LABEL_58;
    v41 = (a1 + 0x58000000000LL) / 48;
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
      v50 = MI_READ_PTE_LOCK_FREE(v51);
      if ( (v50 & 1) == 0 || (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v50) >> 12) & 0xFFFFFFFFFLL) != v41 )
        goto LABEL_57;
    }
    if ( ((unsigned int)(*(_DWORD *)(a4 + 48) - 2) <= 1
       || (*(_DWORD *)(a4 + 8) & 0x20) != 0
       || (*(_BYTE *)a1 & 1) != 0 && (*(_BYTE *)(a1 + 35) & 8) == 0)
      && v41 <= 0xFFFFFFFFFLL
      && (*(_QWORD *)(48 * v41 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0
      && *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) == v52
      && !(unsigned int)MI_PFN_IS_PROTO(a1) )
    {
      IsPfnFileOnly = MiIsPfnFileOnly();
      if ( IsPfnFileOnly != v44 && !(unsigned int)MiIsPfnFromSlabAllocation(a1) )
        return v45;
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
      SessionVm = MiGetSessionVm();
      *(_DWORD *)(a4 + 8) |= 0x80u;
      v20 = SessionVm;
      goto LABEL_54;
    }
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return 0LL;
}
