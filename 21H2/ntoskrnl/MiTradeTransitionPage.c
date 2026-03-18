/*
 * XREFs of MiTradeTransitionPage @ 0x1402E8240
 * Callers:
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiCanPageMove @ 0x140277C9C (MiCanPageMove.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiGetPfnChannel @ 0x1402E8990 (MiGetPfnChannel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTradeTransitionPage(ULONG_PTR a1, unsigned __int8 a2, __int64 a3, int a4, int a5, __int64 *a6)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v9; // r14
  int v10; // r12d
  int PfnChannel; // eax
  __int64 v12; // r8
  unsigned int v13; // r12d
  __int64 Page; // rax
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r12
  BOOL IsPfnFromSlabAllocation; // eax
  int v20; // r8d
  __int64 v21; // r14
  unsigned int v23; // r14d
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  bool v28; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  int v35; // edx
  _DWORD *v36; // r9
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  int v39; // eax
  _DWORD *v40; // r8
  __int64 v41; // [rsp+20h] [rbp-38h]
  __int64 v42; // [rsp+60h] [rbp+8h]

  v6 = a2;
  if ( *(_WORD *)(a1 + 32) )
  {
    ++dword_140C29DE8;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    if ( MiCanPageMove(a1) )
    {
      if ( !MiIsPfnFromSlabAllocation(a1) )
      {
        v42 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v28 = (v32 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v32;
              if ( v28 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v6);
        v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
        if ( a4 == -1 )
        {
          v10 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) + 2);
          PfnChannel = MiGetPfnChannel(a1);
          v12 = (a5 & 0x1000000 | 0x8000u) >> 8;
          v13 = (PfnChannel << byte_140C506CD) | dword_140C50738 & v9 | (v10 << byte_140C506CC);
          if ( (a5 & 0x2000000) != 0 )
            LODWORD(v12) = v12 | 0x20000;
        }
        else
        {
          v12 = 48LL;
          v13 = dword_140C50738 & v9 | a4 & ~dword_140C50738;
        }
        Page = MiGetPage(v42, v13, v12);
        v41 = Page;
        if ( Page == -1 )
        {
          ++dword_140C29E14;
          return 1LL;
        }
        v15 = 48 * Page - 0x220000000000LL;
        v18 = (unsigned __int8)MiLockPageInline(a1);
        if ( v15 == a1 )
        {
          v21 = -1LL;
LABEL_20:
          ++dword_140C29DA4;
          *(_QWORD *)(a1 + 16) = ZeroPte;
          MiSetOriginalPtePfnFromFreeList(a1 + 16, v16, v17);
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v37 = KeGetCurrentIrql();
              if ( v37 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v37 >= 2u )
              {
                v38 = KeGetCurrentPrcb();
                v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
                v40 = v38->SchedulerAssist;
                v28 = (v39 & v40[5]) == 0;
                v40[5] &= v39;
                if ( v28 )
                  KiRemoveSystemWorkPriorityKick(v38);
              }
            }
          }
          __writecr8(v18);
          if ( a6 )
            *a6 = v21;
          return 3LL;
        }
        if ( v9 > qword_140C50840
          || (*(_QWORD *)(16 * ((__int64)(a1 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0
          || _bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
        {
          v20 = 0;
        }
        else
        {
          IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(a1);
          v20 = 0;
          if ( !IsPfnFromSlabAllocation
            && !*(_WORD *)(a1 + 32)
            && *(char *)(a1 + 35) >= 0
            && v42 == *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL))
            && MiCanPageMove(a1) )
          {
            if ( (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) <= 2u )
            {
              MiReplaceTransitionPage(a1, v15, v20, a3);
              v21 = v41;
              goto LABEL_20;
            }
            v23 = 2;
            goto LABEL_28;
          }
        }
        v23 = v20;
LABEL_28:
        ++dword_140C29DE8;
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v33 = KeGetCurrentIrql();
            if ( v33 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v33 >= 2u )
            {
              v34 = KeGetCurrentPrcb();
              v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
              v36 = v34->SchedulerAssist;
              v28 = (v35 & v36[5]) == 0;
              v36[5] &= v35;
              if ( v28 )
                KiRemoveSystemWorkPriorityKick(v34);
            }
          }
        }
        __writecr8(v18);
        MiReleaseFreshPage(v15);
        return v23;
      }
      ++dword_140C29DF0;
    }
    else
    {
      ++dword_140C29DEC;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
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
        v28 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
  }
  __writecr8(v6);
  return 0LL;
}
