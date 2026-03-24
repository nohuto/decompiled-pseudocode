/*
 * XREFs of MiTradeTransitionPage @ 0x14026B6E8
 * Callers:
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x140218D60 (MiIsPfnFileOnly.c)
 *     MiCanPageMove @ 0x14026B990 (MiCanPageMove.c)
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiIsPfnFromSlabAllocation @ 0x140302EF0 (MiIsPfnFromSlabAllocation.c)
 *     MiGetPfnChannel @ 0x1403041C4 (MiGetPfnChannel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140329F30 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTradeTransitionPage(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 *a6)
{
  unsigned __int64 v6; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // r8
  int PfnChannel; // eax
  __int64 v15; // r8
  unsigned int v16; // ebp
  __int64 Page; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r13
  __int64 v21; // r12
  unsigned __int64 v22; // rbp
  int IsPfnFromSlabAllocation; // eax
  __int64 v24; // rdx
  unsigned int v25; // r8d
  unsigned int v27; // r15d
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  int v39; // edx
  _DWORD *v40; // r9
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  int v43; // eax
  _DWORD *v44; // r8
  __int64 v45; // [rsp+50h] [rbp+8h]

  v6 = (unsigned __int8)a2;
  if ( *(_WORD *)(BugCheckParameter2 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    if ( (unsigned int)MiCanPageMove(BugCheckParameter2, a2)
      && !(unsigned int)MiIsPfnFromSlabAllocation(BugCheckParameter2) )
    {
      v9 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
      v45 = v9;
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v32 = (v36 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v36;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
      v10 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      if ( a4 == -1 )
      {
        v11 = *(_DWORD *)(MiSearchNumaNodeTable((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) + 8);
        PfnChannel = MiGetPfnChannel(BugCheckParameter2, v12, v13);
        v15 = 128LL;
        v16 = (PfnChannel << byte_140C4DE8D) | dword_140C4DEF8 & v10 | (v11 << byte_140C4DE8C);
        if ( (a5 & 0x3000000) != 0 )
          v15 = 65664LL;
      }
      else
      {
        v15 = 48LL;
        v16 = dword_140C4DEF8 & v10 | a4 & ~dword_140C4DEF8;
      }
      Page = MiGetPage(v9, v16, v15);
      v20 = Page;
      if ( Page == -1 )
        return 1LL;
      v21 = 48 * Page - 0x58000000000LL;
      v22 = (unsigned __int8)MiLockPageInline(BugCheckParameter2, v18, v19);
      if ( v21 == BugCheckParameter2 )
      {
        v20 = -1LL;
LABEL_19:
        *(_QWORD *)(BugCheckParameter2 + 16) = ZeroPte;
        MiSetOriginalPtePfnFromFreeList(BugCheckParameter2 + 16);
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v41 = KeGetCurrentIrql();
            if ( v41 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v41 >= 2u )
            {
              v42 = KeGetCurrentPrcb();
              v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
              v44 = v42->SchedulerAssist;
              v32 = (v43 & v44[5]) == 0;
              v44[5] &= v43;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v42);
            }
          }
        }
        __writecr8(v22);
        if ( a6 )
          *a6 = v20;
        return 3LL;
      }
      if ( v10 > 0xFFFFFFFFFLL
        || (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
        || MiIsPfnFileOnly(BugCheckParameter2) )
      {
        v25 = 0;
      }
      else
      {
        IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(BugCheckParameter2);
        v25 = 0;
        if ( !IsPfnFromSlabAllocation
          && !*(_WORD *)(BugCheckParameter2 + 32)
          && v45 == *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL))
          && (unsigned int)MiCanPageMove(BugCheckParameter2, v24) )
        {
          if ( (unsigned __int8)((*(_BYTE *)(BugCheckParameter2 + 34) & 7) - 2) <= 2u )
          {
            MiReplaceTransitionPage(BugCheckParameter2);
            goto LABEL_19;
          }
          v27 = 2;
          goto LABEL_24;
        }
      }
      v27 = v25;
LABEL_24:
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v37 = KeGetCurrentIrql();
          if ( v37 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v37 >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
            v40 = v38->SchedulerAssist;
            v32 = (v39 & v40[5]) == 0;
            v40[5] &= v39;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
      }
      __writecr8(v22);
      MiReleaseFreshPage(v21);
      return v27;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v32 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
  }
  __writecr8(v6);
  return 0LL;
}
