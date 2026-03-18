/*
 * XREFs of MiUpdatePfnPriorityByPte @ 0x140236580
 * Callers:
 *     MiSystemFault @ 0x1402BD490 (MiSystemFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1405F9950 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1405FA310 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiInvalidPteConforms @ 0x14022A870 (MiInvalidPteConforms.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiRelinkStandbyPage @ 0x1402D1FBC (MiRelinkStandbyPage.c)
 *     MiIsPteInStore @ 0x140314E74 (MiIsPteInStore.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiUpdatePfnPriorityByPte(unsigned __int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // r9
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rdx
  ULONG_PTR v12; // rbx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  char v15; // di
  char v16; // al
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v19; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  char v28; // cl
  unsigned int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  int v34; // [rsp+70h] [rbp+18h] BYREF
  __int64 v35; // [rsp+78h] [rbp+20h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      result = MI_READ_PTE_LOCK_FREE(a1);
      v35 = result;
      v7 = result;
      if ( (result & 1) != 0 )
      {
        if ( (unsigned __int64)&v35 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v35 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(&v35, result, v5, v6)
          && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( !Flink )
          {
            v7 = v35;
            v9 = 6;
            goto LABEL_22;
          }
          v10 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v35 >> 3) & 0x1FF));
          if ( (v10 & 0x20) != 0 )
            v7 |= 0x20uLL;
          if ( (v10 & 0x42) != 0 )
            v7 |= 0x42uLL;
        }
        v9 = 6;
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
        if ( qword_140C4DD40 )
        {
          if ( (v7 & 0x10) != 0 )
            v7 &= ~0x10uLL;
          else
            v7 &= ~qword_140C4DD40;
        }
        v9 = 2;
      }
LABEL_22:
      v11 = (v7 >> 12) & 0xFFFFFFFFFLL;
      result = 0x4000000000000LL;
      if ( (*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
        return result;
      v12 = 48 * v11 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v11 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v11;
      }
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34, v11);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      if ( (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) != a1
        && (!(unsigned int)MI_PFN_IS_PROTO(v12) || a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        goto LABEL_71;
      }
      v15 = *(_BYTE *)(v12 + 34);
      v16 = v15 & 7;
      if ( v9 != 6 )
        break;
      if ( v16 == 6 )
        goto LABEL_51;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v19 = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v21 = (v20 & v19[5]) == 0;
            v19[5] &= v20;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v22 = (__int64)(a1 << 25) >> 16;
        if ( v22 < 0xFFFFF68000000000uLL || v22 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          result = MiGetSystemRegionType(v22);
          if ( (_DWORD)result == 9 )
            return result;
        }
      }
    }
    if ( (unsigned __int8)(v16 - 2) <= 2u && (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) == 0 )
      break;
LABEL_52:
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
LABEL_51:
  v23 = MI_READ_PTE_LOCK_FREE(a1);
  if ( v35 != v23 )
    goto LABEL_52;
  v28 = *(_BYTE *)(v12 + 35);
  if ( (v28 & 8) != 0 )
    v29 = 5;
  else
    v29 = v28 & 7;
  if ( a2 != v29 && a2 >= v29 )
  {
    if ( (v15 & 7) == 2 )
    {
      if ( v29
        || (*(_DWORD *)(v12 + 16) & 0x400LL) != 0
        || !(unsigned int)MiIsPteInStore(
                            *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v12 + 40) >> 39) & 0x3FFLL)),
                            *(_QWORD *)(v12 + 16)) )
      {
        MiRelinkStandbyPage(v12);
      }
    }
    else
    {
      *(_BYTE *)(v12 + 35) = v28 ^ (a2 ^ v28) & 7;
    }
  }
LABEL_71:
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v30 = KeGetCurrentIrql();
      if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
