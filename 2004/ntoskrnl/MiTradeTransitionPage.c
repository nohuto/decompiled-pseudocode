/*
 * XREFs of MiTradeTransitionPage @ 0x14031D0D8
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x14031A534 (MiGetPfnChannel.c)
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MiCanPageMove @ 0x14031D380 (MiCanPageMove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTradeTransitionPage(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        __int128 *a3,
        int a4,
        int a5,
        __int64 *a6)
{
  unsigned __int64 v6; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  int v11; // ebp
  int PfnChannel; // eax
  __int64 v13; // r8
  unsigned int v14; // ebp
  __int64 Page; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rdx
  unsigned __int64 v22; // rbp
  __int64 v23; // r8
  __int64 v24; // r9
  BOOL IsPfnFromSlabAllocation; // eax
  int v26; // r8d
  unsigned int v28; // r15d
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  bool v33; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  int v40; // edx
  _DWORD *v41; // r9
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r9
  int v44; // eax
  _DWORD *v45; // r8
  __int64 v46; // [rsp+50h] [rbp+8h]

  v6 = a2;
  if ( *(_WORD *)(BugCheckParameter2 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    if ( (unsigned int)MiCanPageMove(BugCheckParameter2) && !MiIsPfnFromSlabAllocation(BugCheckParameter2) )
    {
      v9 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
      v46 = v9;
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
            v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v33 = (v37 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v37;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
      v10 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      if ( a4 == -1 )
      {
        v11 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) + 2);
        PfnChannel = MiGetPfnChannel(BugCheckParameter2);
        v13 = 128LL;
        v14 = (PfnChannel << byte_140C4DC8D) | dword_140C4DCF8 & v10 | (v11 << byte_140C4DC8C);
        if ( (a5 & 0x3000000) != 0 )
          v13 = 65664LL;
      }
      else
      {
        v13 = 48LL;
        v14 = dword_140C4DCF8 & v10 | a4 & ~dword_140C4DCF8;
      }
      Page = MiGetPage(v9, v14, v13);
      v19 = Page;
      if ( Page == -1 )
        return 1LL;
      v20 = 48 * Page - 0x58000000000LL;
      v22 = (unsigned __int8)MiLockPageInline(BugCheckParameter2, v16, v17, v18);
      if ( v20 == BugCheckParameter2 )
      {
        v19 = -1LL;
LABEL_19:
        *(_QWORD *)(BugCheckParameter2 + 16) = ZeroPte;
        MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(BugCheckParameter2 + 16), v21, v23, v24);
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v42 = KeGetCurrentIrql();
            if ( v42 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v42 >= 2u )
            {
              v43 = KeGetCurrentPrcb();
              v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
              v45 = v43->SchedulerAssist;
              v33 = (v44 & v45[5]) == 0;
              v45[5] &= v44;
              if ( v33 )
                KiRemoveSystemWorkPriorityKick(v43);
            }
          }
        }
        __writecr8(v22);
        if ( a6 )
          *a6 = v19;
        return 3LL;
      }
      if ( v10 > 0xFFFFFFFFFLL
        || (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
        || MiIsPfnFileOnly(BugCheckParameter2) )
      {
        v26 = 0;
      }
      else
      {
        IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(BugCheckParameter2);
        v26 = 0;
        if ( !IsPfnFromSlabAllocation
          && !*(_WORD *)(BugCheckParameter2 + 32)
          && v46 == *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL))
          && (unsigned int)MiCanPageMove(BugCheckParameter2) )
        {
          if ( (unsigned __int8)((*(_BYTE *)(BugCheckParameter2 + 34) & 7) - 2) <= 2u )
          {
            MiReplaceTransitionPage(BugCheckParameter2, v20, v26, a3);
            goto LABEL_19;
          }
          v28 = 2;
          goto LABEL_24;
        }
      }
      v28 = v26;
LABEL_24:
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
            v41 = v39->SchedulerAssist;
            v33 = (v40 & v41[5]) == 0;
            v41[5] &= v40;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
      }
      __writecr8(v22);
      MiReleaseFreshPage(v20);
      return v28;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v33 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
  }
  __writecr8(v6);
  return 0LL;
}
