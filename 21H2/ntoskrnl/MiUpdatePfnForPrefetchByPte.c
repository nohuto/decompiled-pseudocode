/*
 * XREFs of MiUpdatePfnForPrefetchByPte @ 0x140316E90
 * Callers:
 *     MiSystemFault @ 0x140279590 (MiSystemFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x1402323E8 (MiRelinkStandbyPage.c)
 *     MiIsPteInStore @ 0x140232E74 (MiIsPteInStore.c)
 *     MiInvalidPteConforms @ 0x140273A80 (MiInvalidPteConforms.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetNonResidentPteHeat @ 0x14033C3A0 (MiSetNonResidentPteHeat.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiAddPageToHeatRanges @ 0x1405B7574 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x1405B7E7C (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiUpdatePfnForPrefetchByPte(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // r14d
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v11; // rcx
  int v12; // r12d
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rbx
  unsigned __int8 CurrentIrql; // bp
  bool v17; // zf
  char v18; // r12
  __int64 v19; // rax
  char v20; // cl
  unsigned int v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  unsigned __int64 v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  unsigned __int8 v31; // al
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v36; // r8
  int v37; // eax
  unsigned __int8 v38; // al
  _DWORD *v39; // r8
  int v40; // eax
  __int64 v41; // rcx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rax
  int v44; // edx
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52[7]; // [rsp+20h] [rbp-38h] BYREF
  int v53; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      result = MI_READ_PTE_LOCK_FREE(a1);
      v52[0] = result;
      if ( (result & 1) != 0 )
      {
        result = MI_READ_PTE_LOCK_FREE(v52);
        v11 = result;
        v12 = 6;
      }
      else
      {
        if ( (result & 0x400) != 0 )
          return result;
        if ( (result & 0x800) == 0 )
          return result;
        result = MiInvalidPteConforms(result);
        if ( !(_DWORD)result )
          return result;
        result = qword_140C50780;
        if ( qword_140C50780 )
        {
          if ( (v11 & 0x10) != 0 )
          {
            v11 &= ~0x10uLL;
          }
          else
          {
            result = ~qword_140C50780;
            v11 &= ~qword_140C50780;
          }
        }
        v12 = 2;
      }
      v13 = (v11 >> 12) & 0xFFFFFFFFFFLL;
      if ( v13 > qword_140C50840 )
        return result;
      v14 = 48 * v13;
      result = 0xFFFFDE0000000028uLL;
      if ( !_bittest64((const signed __int64 *)(48 * v13 - 0x21FFFFFFFFD8LL), 0x36u) )
        return result;
      v15 = v14 - 0x220000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v8 = (-1LL << (CurrentIrql + 1)) & 4;
        v9 = (unsigned int)v8 | SchedulerAssist[5];
        SchedulerAssist[5] = v9;
      }
      v53 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v53, v8, v9, (__int64)SchedulerAssist);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      if ( (*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) != a1 )
      {
        if ( *(__int64 *)(v15 + 40) >= 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !KiIrqlFlags )
            goto LABEL_89;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_89;
          v38 = KeGetCurrentIrql();
          if ( v38 > 0xFu )
            goto LABEL_89;
          if ( CurrentIrql > 0xFu )
            goto LABEL_89;
          if ( v38 < 2u )
            goto LABEL_89;
          CurrentPrcb = KeGetCurrentPrcb();
          v39 = CurrentPrcb->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( !v17 )
            goto LABEL_89;
LABEL_88:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_89:
          result = CurrentIrql;
          __writecr8(CurrentIrql);
          return result;
        }
        if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !KiIrqlFlags )
            goto LABEL_89;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_89;
          v34 = KeGetCurrentIrql();
          if ( v34 > 0xFu )
            goto LABEL_89;
          if ( CurrentIrql > 0xFu )
            goto LABEL_89;
          if ( v34 < 2u )
            goto LABEL_89;
          CurrentPrcb = KeGetCurrentPrcb();
          v36 = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( !v17 )
            goto LABEL_89;
          goto LABEL_88;
        }
      }
      v17 = v12 == 6;
      v18 = *(_BYTE *)(v15 + 34);
      if ( !v17 )
        break;
      if ( (v18 & 7) == 6 )
        goto LABEL_11;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v26 = (__int64)(a1 << 25) >> 16;
        if ( v26 < 0xFFFFF68000000000uLL || v26 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          result = MiGetSystemRegionType(v26);
          if ( (_DWORD)result == 9 )
            return result;
        }
      }
    }
    if ( (unsigned __int8)((v18 & 7) - 2) <= 2u && (*(_QWORD *)(v15 + 24) & 0x4000000000000000LL) == 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v32 = v28->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v17 )
LABEL_74:
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
    }
LABEL_33:
    __writecr8(CurrentIrql);
  }
LABEL_11:
  v19 = MI_READ_PTE_LOCK_FREE(a1);
  if ( v52[0] != v19 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v17 )
            goto LABEL_74;
        }
      }
    }
    goto LABEL_33;
  }
  v20 = *(_BYTE *)(v15 + 35);
  if ( (v20 & 8) != 0 )
    v21 = 5;
  else
    v21 = v20 & 7;
  if ( a2 != v21 && a2 >= v21 )
  {
    if ( (v18 & 7) == 2 )
    {
      if ( v21
        || (*(_DWORD *)(v15 + 16) & 0x400LL) != 0
        || (v41 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL)),
            (*(_DWORD *)(v41 + 4) & 0x100) != 0)
        || !(unsigned int)MiIsPteInStore(v41, *(_QWORD *)(v15 + 16)) )
      {
        MiRelinkStandbyPage(v14 - 0x220000000000LL, a2);
      }
    }
    else
    {
      *(_BYTE *)(v15 + 35) = v20 ^ (a2 ^ v20) & 7;
    }
  }
  if ( a3 && (*(_BYTE *)(v15 + 34) & 7) == 2 )
  {
    v42 = *(_QWORD *)(v15 + 16);
    v43 = v42 >> 11;
    if ( (v42 & 0x400) == 0 )
      v43 = v42 >> 3;
    if ( (v43 & 1) != 0 )
    {
      MiSetNonResidentPteHeat(v15 + 16, 0LL);
      v6 = v44 + 1;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v45 = KeGetCurrentIrql();
      if ( v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        v47 = v46->SchedulerAssist;
        v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v48 & v47[5]) == 0;
        v47[5] &= v48;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v6 )
  {
    result = MiAddPageToHeatRanges(a3, 0xAAAAAAAAAAAAAAABuLL * (v14 >> 4), 3LL);
    if ( (_DWORD)result )
      return MiNotifyPageHeat(a3, v49, v50, v51);
  }
  return result;
}
