/*
 * XREFs of MiGatherPagefilePages @ 0x1402688A4
 * Callers:
 *     MiModifiedPageWriter @ 0x1403BDB20 (MiModifiedPageWriter.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiWriteComplete @ 0x140255170 (MiWriteComplete.c)
 *     MiReleaseWriteInProgressCharges @ 0x140255824 (MiReleaseWriteInProgressCharges.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     MiStoreWriteModifiedPages @ 0x140266950 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x140269DE4 (MiUpdatePfnBackingStore.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14026ABE0 (MiInvalidatePageFileBitmapsCache.c)
 *     MiPageFileLargestBitmapsRun @ 0x14026AE68 (MiPageFileLargestBitmapsRun.c)
 *     MiFillNoReservationCluster @ 0x1402BF8A0 (MiFillNoReservationCluster.c)
 *     MiUpdatePagefilePeakUsage @ 0x1402C3660 (MiUpdatePagefilePeakUsage.c)
 *     MI_PAGEFILE_WRITE @ 0x1402CA5E4 (MI_PAGEFILE_WRITE.c)
 *     IoAsynchronousPageWrite @ 0x1402CB1EC (IoAsynchronousPageWrite.c)
 *     MiMapPageFileHash @ 0x1402CDE38 (MiMapPageFileHash.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x1402D00F4 (MiMakePagefileWriterEntryAvailable.c)
 *     MiSetPageFileAllocationBits @ 0x1402D0BD8 (MiSetPageFileAllocationBits.c)
 *     MiFindPageFileWriteCluster @ 0x1402D1C28 (MiFindPageFileWriteCluster.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiWriteCompletePfn @ 0x140325C80 (MiWriteCompletePfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MiBuildReservationCluster @ 0x140386DF0 (MiBuildReservationCluster.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPageFileNoFreeSpace @ 0x140543C34 (MiPageFileNoFreeSpace.c)
 */

__int64 __fastcall MiGatherPagefilePages(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // r13
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // rax
  __int16 v9; // cx
  unsigned __int16 v10; // dx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r12
  __int16 v13; // dx
  unsigned int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r13d
  unsigned int v18; // eax
  unsigned int v19; // edi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned int v22; // r10d
  unsigned int v23; // esi
  _QWORD *v24; // r15
  unsigned int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // r8
  _QWORD *v28; // r15
  unsigned int v29; // eax
  __int64 v30; // r15
  int v31; // edi
  unsigned int v32; // edi
  int v33; // ecx
  unsigned __int64 v34; // rax
  int v35; // eax
  unsigned __int64 v36; // rcx
  unsigned int v37; // r15d
  __int64 result; // rax
  unsigned __int64 v39; // r15
  __int64 v40; // rax
  _DWORD *v41; // r15
  int v42; // eax
  unsigned __int64 v43; // r13
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  bool v48; // zf
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  unsigned __int64 v53; // rsi
  _QWORD *v54; // r13
  ULONG_PTR v55; // rdi
  unsigned __int8 v56; // al
  unsigned __int8 v57; // di
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  int v61; // eax
  unsigned __int8 v62; // di
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r9
  _DWORD *v65; // r8
  int v66; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v70; // eax
  unsigned int v71; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v72; // [rsp+64h] [rbp-35h] BYREF
  unsigned int v73; // [rsp+68h] [rbp-31h]
  struct _KTHREAD *v74; // [rsp+70h] [rbp-29h]
  unsigned __int64 v75; // [rsp+78h] [rbp-21h]
  _QWORD *v76; // [rsp+80h] [rbp-19h]
  unsigned __int64 v77; // [rsp+88h] [rbp-11h]
  __int64 v78; // [rsp+90h] [rbp-9h]
  __int64 v79; // [rsp+A0h] [rbp+7h]
  KIRQL v81; // [rsp+108h] [rbp+6Fh]
  unsigned int v82; // [rsp+108h] [rbp+6Fh]
  int v83; // [rsp+108h] [rbp+6Fh]
  unsigned __int8 v84; // [rsp+108h] [rbp+6Fh]
  unsigned int v85; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v86; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v72 = 0;
  v5 = 0;
  v79 = v1;
  v6 = 1LL;
  v7 = *(_QWORD *)(v1 + 248);
  v78 = v7;
  v74 = CurrentThread;
  if ( !*(_QWORD *)(v1 + 24) )
    goto LABEL_74;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v8 = a1 + 256;
  v9 = *(_WORD *)(v1 + 204);
  v76 = (_QWORD *)v8;
  v10 = *(_WORD *)(v1 + 204);
  if ( *(_DWORD *)(v7 + 1160) )
    v5 = 4;
  v11 = *(_QWORD *)(v7 + 40LL * (v9 & 0xF) + 2816);
  if ( !_bittest16((const __int16 *)&v10, 4u)
    && (v5 & 4) != 0
    && (v12 = *(_QWORD *)(v7 + 40LL * *(unsigned int *)(v7 + 1156) + 2816)) != 0 )
  {
    v5 |= 2u;
  }
  else
  {
    if ( *(_DWORD *)(v7 + 1152) )
      goto LABEL_66;
    v12 = *(_QWORD *)(v7 + 2752);
  }
  if ( v11 )
  {
    v13 = v10 >> 4;
    goto LABEL_10;
  }
  if ( !v12 || (v13 = v10 >> 4, (v13 & 1) != 0) )
  {
LABEL_66:
    v39 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 232));
    *(_BYTE *)(v1 + 206) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v39 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
          v48 = (v70 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v70;
          if ( v48 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v39);
    *(_QWORD *)v4 = 2575857425LL;
    goto LABEL_52;
  }
LABEL_10:
  if ( (v5 & 2) == 0
    && v12
    && (v13 & 1) == 0
    && (!v11
     || (*(_BYTE *)(v1 + 207) & 1) != 0
     || (unsigned int)MiPageFileLargestBitmapsRun(v1) >= *(_DWORD *)(v1 + 136) >> 2
     && (v12 >= (unsigned __int64)(unsigned int)dword_140CFB18C >> 2 || v12 >= v11)) )
  {
    v5 |= 2u;
  }
  v14 = dword_140CFB18C;
  v85 = dword_140CFB18C;
  if ( (v5 & 2) != 0 )
  {
    if ( v12 < (unsigned int)dword_140CFB18C )
      v14 = v12;
    v85 = v14;
  }
  if ( *(_BYTE *)(v7 + 1000) )
  {
    v83 = 0;
    v43 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 996));
    if ( *(_BYTE *)(v7 + 1002) )
    {
      *(_BYTE *)(v7 + 1002) = 0;
      *(_BYTE *)(v7 + 1000) = 0;
      v83 = 1;
    }
    else if ( *(_BYTE *)(v7 + 1000) )
    {
      v14 = *(unsigned __int8 *)(v7 + 1000);
      v85 = v14;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 996));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v44 = KeGetCurrentIrql();
        if ( v44 <= 0xFu && (unsigned __int8)v43 <= 0xFu && v44 >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v43 + 1));
          v48 = (v47 & v46[5]) == 0;
          v46[5] &= v47;
          if ( v48 )
            KiRemoveSystemWorkPriorityKick(v45);
          v14 = v85;
        }
      }
    }
    __writecr8(v43);
    if ( v83 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    CurrentThread = v74;
  }
  if ( (*(_DWORD *)(v4 + 40) & 0x1Cu) < 8 )
  {
    if ( v14 > 0x100 )
      v14 = 256;
    v85 = v14;
  }
  v5 |= 1u;
  --CurrentThread->KernelApcDisable;
  if ( (v5 & 2) != 0 )
  {
    v71 = 0;
    MiFindPageFileWriteCluster(v1, &v71, &v85, 0LL);
    v2 = v85;
    if ( v85 )
    {
      v18 = MiFillNoReservationCluster(v7, v76);
      v17 = v71;
      v16 = v18;
      v86 = v18;
      goto LABEL_23;
    }
LABEL_74:
    MiPageFileNoFreeSpace(v1, v4, v2, v6);
    goto LABEL_52;
  }
  v86 = v14;
  v15 = MiBuildReservationCluster(v76, v1, &v86, &v72);
  v16 = v72;
  v17 = v15;
  v71 = v15;
  v18 = v86;
LABEL_23:
  if ( v18 )
  {
    v85 = v18;
    v73 = v16 - 1;
    v19 = v18;
    v72 = v16 - 1;
    v81 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 232));
    if ( (v5 & 2) != 0 )
    {
      MiFindPageFileWriteCluster(v1, &v71, &v85, 1LL);
      v17 = v71;
      v19 = v85;
    }
    else
    {
      MiSetPageFileAllocationBits(v1, v17, v86);
      v20 = v86;
      v21 = 0LL;
      v22 = -1;
      v75 = 0LL;
      if ( v76 > &v76[v86] )
        v20 = 0LL;
      v77 = v20;
      if ( v20 )
      {
        v23 = v17;
        v24 = v76;
        do
        {
          v25 = v22;
          if ( *v24 != qword_140C4ED68
            || (v21 = v75, v20 = v77, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 112) + 32LL), v23)) )
          {
            if ( v22 != -1 )
            {
              MiInvalidatePageFileBitmapsCache(v1, v22, v23 - v22, 0LL);
              v21 = v75;
              v20 = v77;
              v22 = -1;
            }
          }
          else
          {
            v22 = v23;
            if ( v25 != -1 )
              v22 = v25;
          }
          ++v21;
          ++v23;
          ++v24;
          v75 = v21;
        }
        while ( v21 < v20 );
        v4 = a1;
      }
    }
    if ( (v5 & 2) == 0 )
      *(_DWORD *)(v1 + 136) = v19 + *(_DWORD *)(v1 + 136) - (*(_DWORD *)(v1 + 136) >> 2);
    MiUpdatePagefilePeakUsage(v1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v49 = KeGetCurrentIrql();
        if ( v49 <= 0xFu && v81 <= 0xFu && v49 >= 2u )
        {
          v50 = KeGetCurrentPrcb();
          v51 = v50->SchedulerAssist;
          v52 = ~(unsigned __int16)(-1LL << (v81 + 1));
          v48 = (v52 & v51[5]) == 0;
          v51[5] &= v52;
          if ( v48 )
            KiRemoveSystemWorkPriorityKick(v50);
          v19 = v85;
          v17 = v71;
          v73 = v72;
        }
      }
    }
    __writecr8(v81);
    KeLeaveCriticalRegionThread((__int64)v74);
    v5 &= ~1u;
    LODWORD(v75) = v5;
    if ( v19 != v86 )
    {
      v53 = (unsigned __int64)&v76[v86];
      v54 = &v76[v19];
      do
      {
        v55 = 48LL * *v54 - 0x58000000000LL;
        v84 = MiLockPageInline(v55, v26, v27);
        MiWriteCompletePfn(v55);
        _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v56 = KeGetCurrentIrql(), v56 <= 0xFu) )
        {
          v57 = v84;
          if ( v84 <= 0xFu && v56 >= 2u )
          {
            v58 = KeGetCurrentPrcb();
            v26 = -1LL << (v84 + 1);
            v59 = v58->SchedulerAssist;
            v60 = ~(unsigned __int16)v26;
            v48 = (v60 & v59[5]) == 0;
            v27 = (unsigned int)v60 & v59[5];
            v59[5] = v27;
            if ( v48 )
              KiRemoveSystemWorkPriorityKick(v58);
          }
        }
        else
        {
          v57 = v84;
        }
        __writecr8(v57);
        ++v54;
      }
      while ( (unsigned __int64)v54 < v53 );
      v19 = v85;
      v73 = v85 - v86 + v72;
      v72 = v73;
      MiReleaseWriteInProgressCharges(v78, v86 - v85, 0);
      v17 = v71;
      v5 = v75;
      v4 = a1;
      v1 = v79;
    }
    v28 = v76;
    *(_DWORD *)(v4 + 248) = v19 << 12;
    *(_DWORD *)(v4 + 136) = v19 << 12;
    *(_DWORD *)(v4 + 140) = v73;
    v29 = 0;
    v86 = v19;
    v82 = 0;
    LODWORD(v75) = v17;
    do
    {
      if ( *v28 != qword_140C4ED68 )
      {
        MiUpdatePfnBackingStore(48LL * *v28 - 0x58000000000LL, v1, v17, 0LL);
        v29 = v82;
      }
      ++v29;
      ++v28;
      ++v17;
      v82 = v29;
      v85 = v29;
    }
    while ( v29 < v19 );
    v30 = v78;
    v71 = v17;
    *(_WORD *)(a1 + 216) = 8 * (dword_140CFB18C + 6);
    *(_DWORD *)(a1 + 40) &= ~2u;
    v31 = *(_DWORD *)(a1 + 40) >> 2;
    *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000014];
    v32 = v31 & 7;
    v33 = *(_DWORD *)(v30 + 860);
    v34 = *(_QWORD *)(v30 + 7104);
    if ( v33 )
    {
      if ( v34 >= 0x420 )
      {
        v61 = 0;
      }
      else
      {
        v32 = 4;
        v61 = v33 - 1;
      }
      *(_DWORD *)(v30 + 860) = v61;
    }
    else
    {
      if ( v34 < 0xA0 )
      {
        *(_DWORD *)(v30 + 860) = 32;
      }
      else
      {
        if ( v34 >= 0x120 )
          goto LABEL_45;
        *(_DWORD *)(v30 + 860) = 8;
      }
      v32 = 4;
    }
LABEL_45:
    *(_DWORD *)(a1 + 40) = (4 * v32) | *(_DWORD *)(a1 + 40) & 0xFFFFFFE3;
    if ( v32 < 2 )
    {
      v40 = (__int64)v74;
      --v74->SpecialApcDisable;
      ++*(_DWORD *)(v30 + 692);
      KiLeaveGuardedRegionUnsafe(v40);
    }
    MI_PAGEFILE_WRITE(a1, a1 + 184, v32, ((v5 >> 1) & 1) == 0, -1);
    v35 = *(_DWORD *)(v30 + 848);
    v36 = *(_QWORD *)(v30 + 840);
    if ( v35 == 512 )
      v36 -= v36 >> 9;
    else
      *(_DWORD *)(v30 + 848) = v35 + 1;
    *(_QWORD *)(v30 + 840) = v36 + v86;
    v37 = v75;
    *(_DWORD *)(a1 + 40) &= ~0x20u;
    *(_QWORD *)(a1 + 176) = (unsigned __int64)v37 << 12;
    if ( v5 >= 4 && (int)MiStoreWriteModifiedPages(a1) >= 0 )
      goto LABEL_51;
    __incgsdword(0x2EACu);
    __addgsdword(0x2EA8u, v86);
    MiMapPageFileHash(v1, a1 + 208, 0LL, v37, v86);
    v41 = (_DWORD *)(a1 + 16);
    if ( (*(_WORD *)(v1 + 204) & 0x800) != 0 )
    {
      *v41 = 0;
      *(_QWORD *)(a1 + 24) = *(unsigned int *)(a1 + 248);
    }
    else
    {
      v42 = IoAsynchronousPageWrite(
              *(_QWORD *)(v1 + 56),
              (int)a1 + 208,
              (int)a1 + 176,
              (unsigned int)MiWriteComplete,
              a1,
              v32,
              *(_DWORD *)(v1 + 200),
              0,
              0LL,
              a1 + 16,
              a1 + 32);
      if ( (v42 & 0xC0000000) != 0xC0000000 )
      {
LABEL_51:
        CurrentThread = v74;
        goto LABEL_52;
      }
      *v41 = v42;
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    v62 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(a1, (unsigned int *)(a1 + 16), 0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v63 = KeGetCurrentIrql();
        if ( v63 <= 0xFu && v62 <= 0xFu && v63 >= 2u )
        {
          v64 = KeGetCurrentPrcb();
          v65 = v64->SchedulerAssist;
          v66 = ~(unsigned __int16)(-1LL << (v62 + 1));
          v48 = (v66 & v65[5]) == 0;
          v65[5] &= v66;
          if ( v48 )
            KiRemoveSystemWorkPriorityKick(v64);
        }
      }
    }
    __writecr8(v62);
    goto LABEL_51;
  }
  CurrentThread = v74;
  --v74->SpecialApcDisable;
  MiMakePagefileWriterEntryAvailable(v4);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
LABEL_52:
  result = 1LL;
  if ( (v5 & 1) != 0 )
    return (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return result;
}
