/*
 * XREFs of MiUnlinkBadPages @ 0x14052F338
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x1405306A0 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiIsPageInHugePfn @ 0x1403F391C (MiIsPageInHugePfn.c)
 *     MiMarkHugePfnGood @ 0x1403F3DA8 (MiMarkHugePfnGood.c)
 *     MiSetPfnRemovalRequested @ 0x14054F668 (MiSetPfnRemovalRequested.c)
 *     MiUnlinkPageFromBadList @ 0x14054F780 (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiUnlinkBadPages(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // r14
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  volatile signed __int32 *v7; // rsi
  _QWORD *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v14; // r9
  int v15; // eax
  bool v16; // zf
  int v17; // r10d
  _DWORD *v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // r8
  struct _KPRCB *v22; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v24; // eax
  __int64 v25; // rcx
  char v26; // r8
  signed __int32 v27; // eax
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  _DWORD *v31; // r9
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // edx
  int v37; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR v38; // [rsp+78h] [rbp+10h]
  __int64 v39; // [rsp+88h] [rbp+20h]

  v38 = a2;
  v2 = 0LL;
  v39 = 0LL;
  v3 = BugCheckParameter2;
  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( BugCheckParameter2 < a2 )
  {
    v7 = (volatile signed __int32 *)(v4 + 24);
    v8 = (_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL);
    do
    {
      if ( MiIsPageInHugePfn(v3) )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v12 = KeGetCurrentIrql();
            if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v14 = CurrentPrcb->SchedulerAssist;
              v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v16 = (v15 & v14[5]) == 0;
              v14[5] &= v15;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        v17 = MiMarkHugePfnGood(v3);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v18 = KeGetCurrentPrcb()->SchedulerAssist;
          v18[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        v19 = v39;
        if ( v17 < 0 )
        {
          --v3;
          v8 -= 6;
          v4 -= 48LL;
          v7 -= 12;
          v19 = v39 - 1;
        }
        goto LABEL_63;
      }
      if ( v3 > 0xFFFFFFFFFLL || (*v8 & 0x4000000000000LL) == 0 )
        goto LABEL_62;
      v37 = 0;
      while ( _interlockedbittestandset64(v7, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v37, v9, v10, v11);
        while ( *(__int64 *)v7 < 0 );
      }
      v20 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v4 + 40) >> 39) & 0x3FFLL));
      if ( (*(_BYTE *)(v4 + 35) & 0x40) != 0 )
      {
        MiSetPfnRemovalRequested(v4, 0LL);
        *(_BYTE *)(v4 + 35) &= ~0x80u;
        if ( (*(_QWORD *)(v4 + 40) & 0x2000000000000LL) != 0 )
        {
          if ( (*(_BYTE *)(v4 + 35) & 0x10) != 0 )
            goto LABEL_50;
          goto LABEL_49;
        }
        MiReturnCommit(v20, 1LL);
        v21 = 1LL;
        if ( (ULONG_PTR *)v20 == &MiSystemPartition )
        {
          v22 = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)v22->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
            {
              do
              {
                v24 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v22->CachedResidentAvailable,
                        CachedResidentAvailable + 1,
                        CachedResidentAvailable);
                v16 = (_DWORD)CachedResidentAvailable == v24;
                LODWORD(CachedResidentAvailable) = v24;
                if ( v16 )
                  goto LABEL_49;
              }
              while ( v24 != -1 && (unsigned __int64)(v24 + 1LL) <= 0x100 );
            }
LABEL_44:
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&v22->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v21 = (int)CachedResidentAvailable - 192 + 1LL;
            }
            if ( !v21 )
              goto LABEL_49;
          }
        }
      }
      else
      {
        if ( !MiIsPageOnBadList(v4) )
          goto LABEL_50;
        *(_BYTE *)(v4 + 35) = v26 & 0x7F;
        MiUnlinkPageFromBadList(v25, 0LL);
        *(_QWORD *)v7 |= 0x4000000000000000uLL;
        MiInsertPageInFreeOrZeroedList(v3, 2);
        MiReturnCommit(v20, 1LL);
        v21 = 1LL;
        if ( (ULONG_PTR *)v20 == &MiSystemPartition )
        {
          v22 = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)v22->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
            {
              while ( 1 )
              {
                v27 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v22->CachedResidentAvailable,
                        CachedResidentAvailable + 1,
                        CachedResidentAvailable);
                v16 = (_DWORD)CachedResidentAvailable == v27;
                LODWORD(CachedResidentAvailable) = v27;
                if ( v16 )
                  goto LABEL_49;
                if ( v27 == -1 || (unsigned __int64)(v27 + 1LL) > 0x100 )
                  goto LABEL_44;
              }
            }
            goto LABEL_44;
          }
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 7168), v21);
LABEL_49:
      ++v2;
LABEL_50:
      _InterlockedAnd64((volatile signed __int64 *)v7, 0x7FFFFFFFFFFFFFFFuLL);
      v19 = v39;
      if ( CurrentIrql >= 2u || (v39 & 0xF) != 0 )
        goto LABEL_63;
      if ( KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v16 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v28);
          }
        }
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v31 = KeGetCurrentPrcb()->SchedulerAssist;
          v31[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
      }
LABEL_62:
      v19 = v39;
LABEL_63:
      ++v3;
      v8 += 6;
      v39 = v19 + 1;
      v4 += 48LL;
      v7 += 12;
    }
    while ( v3 < v38 );
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v33);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}
