/*
 * XREFs of MiUpdatePfnPriorityByPte @ 0x140336C60
 * Callers:
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiIsPteInStore @ 0x140208FE0 (MiIsPteInStore.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiRelinkStandbyPage @ 0x14025FF78 (MiRelinkStandbyPage.c)
 *     MiInvalidPteConforms @ 0x1402DFD90 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiUpdatePfnPriorityByPte(unsigned __int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *p_Flink; // r9
  unsigned __int64 v6; // rdx
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  ULONG_PTR v11; // rbx
  unsigned __int8 CurrentIrql; // si
  char v13; // di
  char v14; // al
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  char v26; // cl
  unsigned int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  int v32; // [rsp+70h] [rbp+18h] BYREF
  __int64 v33; // [rsp+78h] [rbp+20h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      result = MI_READ_PTE_LOCK_FREE(a1);
      v33 = result;
      v6 = result;
      if ( (result & 1) != 0 )
      {
        if ( (unsigned __int64)&v33 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v33 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
        {
          p_Flink = &KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink->Flink;
          if ( !p_Flink )
          {
            v6 = v33;
            v7 = 6;
            goto LABEL_22;
          }
          v8 = p_Flink[((unsigned __int64)&v33 >> 3) & 0x1FF];
          if ( (v8 & 0x20) != 0 )
            v6 |= 0x20uLL;
          if ( (v8 & 0x42) != 0 )
            v6 |= 0x42uLL;
        }
        v7 = 6;
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
        if ( qword_140C4DF80 )
        {
          if ( (v6 & 0x10) != 0 )
            v6 &= ~0x10uLL;
          else
            v6 &= ~qword_140C4DF80;
        }
        v7 = 2;
      }
LABEL_22:
      v9 = (v6 >> 12) & 0xFFFFFFFFFLL;
      v10 = 6 * v9;
      result = 0x4000000000000LL;
      if ( (*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
        return result;
      v11 = 48 * v9 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        p_Flink = KeGetCurrentPrcb()->SchedulerAssist;
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
        v10 = (unsigned int)v9 | *((_DWORD *)p_Flink + 5);
        *((_DWORD *)p_Flink + 5) = v10;
      }
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v32, v9, v10, (__int64)p_Flink);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      if ( (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) != a1
        && (!(unsigned int)MI_PFN_IS_PROTO(v11) || a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        goto LABEL_71;
      }
      v13 = *(_BYTE *)(v11 + 34);
      v14 = v13 & 7;
      if ( v7 != 6 )
        break;
      if ( v14 == 6 )
        goto LABEL_51;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v15 = KeGetCurrentIrql();
          if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v19 = (v18 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v18;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v20 = (__int64)(a1 << 25) >> 16;
        if ( v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          result = MiGetSystemRegionType(v20);
          if ( (_DWORD)result == 9 )
            return result;
        }
      }
    }
    if ( (unsigned __int8)(v14 - 2) <= 2u && (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 )
      break;
LABEL_52:
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
          v19 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
LABEL_51:
  v21 = MI_READ_PTE_LOCK_FREE(a1);
  if ( v33 != v21 )
    goto LABEL_52;
  v26 = *(_BYTE *)(v11 + 35);
  if ( (v26 & 8) != 0 )
    v27 = 5;
  else
    v27 = v26 & 7;
  if ( a2 != v27 && a2 >= v27 )
  {
    if ( (v13 & 7) == 2 )
    {
      if ( v27
        || (*(_DWORD *)(v11 + 16) & 0x400LL) != 0
        || !(unsigned int)MiIsPteInStore(
                            *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v11 + 40) >> 39) & 0x3FFLL)),
                            *(_QWORD *)(v11 + 16)) )
      {
        MiRelinkStandbyPage(v11, a2);
      }
    }
    else
    {
      *(_BYTE *)(v11 + 35) = v26 ^ (a2 ^ v26) & 7;
    }
  }
LABEL_71:
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
