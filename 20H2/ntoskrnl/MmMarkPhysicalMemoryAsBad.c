/*
 * XREFs of MmMarkPhysicalMemoryAsBad @ 0x14052DE30
 * Callers:
 *     MiScrubNodeLargePageList @ 0x140555368 (MiScrubNodeLargePageList.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14095FE1C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiFreeContiguousPages @ 0x140261B18 (MiFreeContiguousPages.c)
 *     PsDereferencePartition @ 0x140263688 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402636B0 (PsReferencePartitionSafe.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiUnlockDynamicMemoryShared @ 0x1402FFEF0 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x14030A6AC (MiLockDynamicMemoryShared.c)
 *     MiAcquireNonPagedResources @ 0x140336B70 (MiAcquireNonPagedResources.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiIsPageOnBadList @ 0x14034D80C (MiIsPageOnBadList.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiIsPageInHugePfn @ 0x1403F20D4 (MiIsPageInHugePfn.c)
 *     MiMarkHugePfnBad @ 0x1403F21AC (MiMarkHugePfnBad.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053FC08 (MiMarkFileOnlyPfnBad.c)
 *     MiSetPfnRemovalRequested @ 0x14054D928 (MiSetPfnRemovalRequested.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsBad(int *a1, _DWORD *a2)
{
  int v2; // r13d
  int v3; // eax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  unsigned int v14; // ebx
  bool v15; // zf
  unsigned __int8 v16; // al
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  unsigned __int64 v23; // r15
  char v24; // al
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  _DWORD *v35; // r9
  unsigned __int64 v36; // rsi
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  unsigned __int64 v41; // r8
  struct _KPRCB *v42; // r9
  __int64 v43; // rdx
  signed __int32 v44; // eax
  char v45; // al
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  unsigned __int64 v50; // r8
  struct _KPRCB *v51; // r9
  __int64 v52; // rdx
  signed __int32 v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  unsigned __int64 v58; // r8
  struct _KPRCB *v59; // r9
  __int64 v60; // rdx
  signed __int32 v61; // eax
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  int ContiguousPages; // ebp
  __int64 v67; // rdx
  __int64 v68; // r8
  _DWORD *v69; // r9
  unsigned __int64 v70; // rsi
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r10
  _DWORD *v77; // r9
  int v78; // eax
  unsigned __int64 v79; // r8
  struct _KPRCB *v80; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v82; // eax
  __int64 v83; // [rsp+60h] [rbp-68h]
  unsigned __int64 v84; // [rsp+68h] [rbp-60h]
  __int64 v85; // [rsp+70h] [rbp-58h] BYREF
  __int64 v86; // [rsp+78h] [rbp-50h]
  int v87; // [rsp+D0h] [rbp+8h]

  v2 = *a1;
  v3 = *a1;
  v85 = 0LL;
  if ( (v3 & 0xFFFu) > 1 )
    return 3221225711LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225712LL;
  if ( (MiFlags & 0x8000000) == 0 )
    return 3221225474LL;
  v5 = *(_QWORD *)a1 >> 12;
  v86 = *(_QWORD *)a2 >> 12;
  v6 = v5 + v86;
  v84 = v5 + v86;
  if ( v5 >= v5 + v86 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v87 = 0;
  v83 = (__int64)CurrentThread;
  v8 = (((v2 & 1) == 0) << 28) + 739246080;
  v9 = 0;
  MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v10 = 48 * v5 - 0x58000000000LL;
  while ( 1 )
  {
    if ( MiIsPageInHugePfn(v5) )
    {
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      v9 = MiMarkHugePfnBad(v5, v8);
      MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      if ( v9 == -1073740748 )
      {
        --v5;
        v10 -= 48LL;
      }
      goto LABEL_16;
    }
    if ( v5 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v5 - 0x57FFFFFFFD8LL) & v12) == 0 )
    {
      v9 = -1073741584;
      goto LABEL_16;
    }
    if ( (v11 & *(_QWORD *)(v10 + 40)) != 0 )
    {
      v9 = MiMarkFileOnlyPfnBad(v10, v8);
      if ( v9 == -1073740748 )
      {
        --v5;
        v10 -= 48LL;
      }
      goto LABEL_16;
    }
    v16 = MiLockPageInline(v10, v11, v12, v13);
    v17 = *(_QWORD *)(v10 + 40);
    v18 = v16;
    if ( (v17 & 0x2000000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
            v15 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v18);
      --v5;
      v10 -= 48LL;
      goto LABEL_32;
    }
    v23 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((v17 >> 39) & 0x3FF));
    v24 = PsReferencePartitionSafe(*(_QWORD *)(v23 + 176));
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v24 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
            v15 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick((__int64)v26);
          }
        }
      }
      __writecr8(v18);
      v9 = -1073741558;
      goto LABEL_32;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v15 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)v30);
        }
      }
    }
    __writecr8(v18);
    if ( (int)MiAcquireNonPagedResources(v23, 2uLL, 0LL, 0) < 0 )
      break;
    v36 = (unsigned __int8)MiLockPageInline(v10, v33, v34, v35);
    if ( *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL)) == v23 )
    {
      if ( (v8 & 0x10000000) != 0 )
      {
        v45 = *(_BYTE *)(v10 + 35);
        if ( v45 >= 0 )
          *(_BYTE *)(v10 + 35) = v45 | 0x80;
      }
      if ( (*(_BYTE *)(v10 + 35) & 0x40) == 0 )
      {
        if ( (*(_BYTE *)(v10 + 34) & 7) != 5
          || (*(_QWORD *)(v10 + 40) & 0x2000000000000LL) == 0 && !MiIsPageOnBadList(v10) )
        {
          MiSetPfnRemovalRequested(v10, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v62 = KeGetCurrentIrql();
              if ( v62 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v62 >= 2u )
              {
                v63 = KeGetCurrentPrcb();
                v64 = v63->SchedulerAssist;
                v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
                v15 = (v65 & v64[5]) == 0;
                v64[5] &= v65;
                if ( v15 )
                  KiRemoveSystemWorkPriorityKick((__int64)v63);
              }
            }
          }
          __writecr8(v36);
          MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, v83);
          ContiguousPages = MiFindContiguousPages(v23, v5, v5, 0LL, 1uLL, 1u, 0x80000000, 0x80000000, v8, 0LL, &v85);
          v9 = 0;
          MiLockDynamicMemoryShared((__int64)&MiSystemPartition, v83);
          if ( (*(_QWORD *)(48 * v5 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
          {
            v9 = -1073741584;
            goto LABEL_147;
          }
          v70 = (unsigned __int8)MiLockPageInline(v10, v67, v68, v69);
          if ( ContiguousPages >= 0 )
          {
            if ( (*(_BYTE *)(v10 + 35) & 0x40) != 0 )
            {
              *(_WORD *)(v10 + 32) = 0;
              *(_QWORD *)(v10 + 40) &= 0xFFFFFFF000000000uLL;
              MiInsertPageInList(v10, 0x20u);
              goto LABEL_139;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v71 = KeGetCurrentIrql();
                if ( v71 <= 0xFu && (unsigned __int8)v70 <= 0xFu && v71 >= 2u )
                {
                  v72 = KeGetCurrentPrcb();
                  v73 = v72->SchedulerAssist;
                  v74 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v70 + 1));
                  v15 = (v74 & v73[5]) == 0;
                  v73[5] &= v74;
                  if ( v15 )
                    KiRemoveSystemWorkPriorityKick((__int64)v72);
                }
              }
            }
            __writecr8(v70);
            MiFreeContiguousPages(v5, 1uLL);
            goto LABEL_158;
          }
          if ( MiIsPageOnBadList(v10) )
          {
LABEL_138:
            ContiguousPages = 0;
          }
          else if ( (*(_BYTE *)(v10 + 35) & 0x40) != 0 )
          {
            byte_140C4E678 = 1;
            v9 = 259;
            v87 = 1;
            goto LABEL_138;
          }
LABEL_139:
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v75 = KeGetCurrentIrql();
              if ( v75 <= 0xFu && (unsigned __int8)v70 <= 0xFu && v75 >= 2u )
              {
                v76 = KeGetCurrentPrcb();
                v77 = v76->SchedulerAssist;
                v78 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v70 + 1));
                v15 = (v78 & v77[5]) == 0;
                v77[5] &= v78;
                if ( v15 )
                  KiRemoveSystemWorkPriorityKick((__int64)v76);
              }
            }
          }
          __writecr8(v70);
LABEL_147:
          MiReturnCommit(v23, 1LL);
          v79 = 1LL;
          if ( (ULONG_PTR *)v23 != &MiSystemPartition )
            goto LABEL_157;
          v80 = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)v80->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable == -1 )
            goto LABEL_157;
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v82 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v80->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v15 = (_DWORD)CachedResidentAvailable == v82;
              LODWORD(CachedResidentAvailable) = v82;
              if ( v15 )
                goto LABEL_158;
            }
            while ( v82 != -1 && (unsigned __int64)(v82 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v80->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v79 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( v79 )
LABEL_157:
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v79);
LABEL_158:
          PsDereferencePartition(*(_QWORD *)(v23 + 176));
          if ( ContiguousPages == -1073741523 || ContiguousPages == -1073741670 )
          {
            v9 = ContiguousPages;
            v14 = ContiguousPages;
            v6 = v84;
            goto LABEL_18;
          }
          v6 = v84;
          goto LABEL_32;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v54 = KeGetCurrentIrql();
            if ( v54 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v54 >= 2u )
            {
              v55 = KeGetCurrentPrcb();
              v56 = v55->SchedulerAssist;
              v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
              v15 = (v57 & v56[5]) == 0;
              v56[5] &= v57;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick((__int64)v55);
            }
          }
        }
        __writecr8(v36);
        MiReturnCommit(v23, 2LL);
        v58 = 2LL;
        if ( (ULONG_PTR *)v23 != &MiSystemPartition )
          goto LABEL_113;
        v59 = KeGetCurrentPrcb();
        v60 = (int)v59->CachedResidentAvailable;
        if ( (_DWORD)v60 == -1 )
          goto LABEL_113;
        if ( (unsigned __int64)(v60 + 2) <= 0x100 )
        {
          do
          {
            v61 = _InterlockedCompareExchange((volatile signed __int32 *)&v59->CachedResidentAvailable, v60 + 2, v60);
            v15 = (_DWORD)v60 == v61;
            LODWORD(v60) = v61;
            if ( v15 )
              goto LABEL_114;
          }
          while ( v61 != -1 && (unsigned __int64)(v61 + 2LL) <= 0x100 );
        }
        if ( (int)v60 > 192
          && (_DWORD)v60 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v59->CachedResidentAvailable,
                              192,
                              v60) )
        {
          v58 = (int)v60 - 192 + 2LL;
        }
        if ( v58 )
LABEL_113:
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v58);
LABEL_114:
        PsDereferencePartition(*(_QWORD *)(v23 + 176));
        goto LABEL_32;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v46 = KeGetCurrentIrql();
          if ( v46 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v46 >= 2u )
          {
            v47 = KeGetCurrentPrcb();
            v48 = v47->SchedulerAssist;
            v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
            v15 = (v49 & v48[5]) == 0;
            v48[5] &= v49;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick((__int64)v47);
          }
        }
      }
      __writecr8(v36);
      MiReturnCommit(v23, 2LL);
      v50 = 2LL;
      if ( (ULONG_PTR *)v23 != &MiSystemPartition )
        goto LABEL_91;
      v51 = KeGetCurrentPrcb();
      v52 = (int)v51->CachedResidentAvailable;
      if ( (_DWORD)v52 == -1 )
        goto LABEL_91;
      if ( (unsigned __int64)(v52 + 2) <= 0x100 )
      {
        do
        {
          v53 = _InterlockedCompareExchange((volatile signed __int32 *)&v51->CachedResidentAvailable, v52 + 2, v52);
          v15 = (_DWORD)v52 == v53;
          LODWORD(v52) = v53;
          if ( v15 )
            goto LABEL_92;
        }
        while ( v53 != -1 && (unsigned __int64)(v53 + 2LL) <= 0x100 );
      }
      if ( (int)v52 > 192
        && (_DWORD)v52 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v51->CachedResidentAvailable,
                            192,
                            v52) )
      {
        v50 = (int)v52 - 192 + 2LL;
      }
      if ( v50 )
LABEL_91:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v50);
LABEL_92:
      PsDereferencePartition(*(_QWORD *)(v23 + 176));
      v9 = 259;
      goto LABEL_32;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v37 = KeGetCurrentIrql();
        if ( v37 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v37 >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          v39 = v38->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
          v15 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)v38);
        }
      }
    }
    __writecr8(v36);
    MiReturnCommit(v23, 2LL);
    v41 = 2LL;
    if ( (ULONG_PTR *)v23 != &MiSystemPartition )
      goto LABEL_68;
    v42 = KeGetCurrentPrcb();
    v43 = (int)v42->CachedResidentAvailable;
    if ( (_DWORD)v43 == -1 )
      goto LABEL_68;
    if ( (unsigned __int64)(v43 + 2) <= 0x100 )
    {
      do
      {
        v44 = _InterlockedCompareExchange((volatile signed __int32 *)&v42->CachedResidentAvailable, v43 + 2, v43);
        v15 = (_DWORD)v43 == v44;
        LODWORD(v43) = v44;
        if ( v15 )
          goto LABEL_69;
      }
      while ( v44 != -1 && (unsigned __int64)(v44 + 2LL) <= 0x100 );
    }
    if ( (int)v43 > 192
      && (_DWORD)v43 == _InterlockedCompareExchange((volatile signed __int32 *)&v42->CachedResidentAvailable, 192, v43) )
    {
      v41 = (int)v43 - 192 + 2LL;
    }
    if ( v41 )
LABEL_68:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v41);
LABEL_69:
    PsDereferencePartition(*(_QWORD *)(v23 + 176));
    --v5;
    v10 -= 48LL;
LABEL_32:
    CurrentThread = (struct _KTHREAD *)v83;
LABEL_16:
    ++v5;
    v10 += 48LL;
    if ( v5 >= v6 )
    {
      v14 = 0;
      goto LABEL_18;
    }
  }
  v9 = -1073741670;
  v14 = -1073741670;
  PsDereferencePartition(*(_QWORD *)(v23 + 176));
LABEL_18:
  MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, v83);
  if ( v87 == 1 )
    ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_PENDING_REMOVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  v15 = v86 == 1;
  *(_QWORD *)a2 = (v86 + v5 - v6) << 12;
  if ( v15 )
    return v9;
  return v14;
}
