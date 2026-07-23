/*
 * XREFs of MiGatherPagefilePages @ 0x140256844
 * Callers:
 *     MiModifiedPageWriter @ 0x1403BF240 (MiModifiedPageWriter.c)
 * Callees:
 *     IoAsynchronousPageWrite @ 0x14020CF7C (IoAsynchronousPageWrite.c)
 *     MiFillNoReservationCluster @ 0x14023DCF0 (MiFillNoReservationCluster.c)
 *     MiUpdatePagefilePeakUsage @ 0x140241BE0 (MiUpdatePagefilePeakUsage.c)
 *     MI_PAGEFILE_WRITE @ 0x140248ED4 (MI_PAGEFILE_WRITE.c)
 *     MiMapPageFileHash @ 0x14024C338 (MiMapPageFileHash.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x14024E474 (MiMakePagefileWriterEntryAvailable.c)
 *     MiSetPageFileAllocationBits @ 0x14024F068 (MiSetPageFileAllocationBits.c)
 *     MiFindPageFileWriteCluster @ 0x140250048 (MiFindPageFileWriteCluster.c)
 *     MiStoreWriteModifiedPages @ 0x1402548F0 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x140257D84 (MiUpdatePfnBackingStore.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140258B80 (MiInvalidatePageFileBitmapsCache.c)
 *     MiPageFileLargestBitmapsRun @ 0x140258E08 (MiPageFileLargestBitmapsRun.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MiReleaseWriteInProgressCharges @ 0x140276D94 (MiReleaseWriteInProgressCharges.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiWriteCompletePfn @ 0x1403309D0 (MiWriteCompletePfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiBuildReservationCluster @ 0x140386F40 (MiBuildReservationCluster.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPageFileNoFreeSpace @ 0x140543E74 (MiPageFileNoFreeSpace.c)
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
  _QWORD *v8; // rax
  __int16 v9; // cx
  unsigned __int16 v10; // dx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r12
  __int16 v13; // dx
  unsigned int v14; // edi
  ULONG v15; // eax
  unsigned int v16; // ecx
  ULONG v17; // r13d
  unsigned int v18; // eax
  ULONG v19; // edi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned int v22; // r10d
  ULONG v23; // esi
  _QWORD *v24; // r15
  unsigned int v25; // r8d
  _QWORD *v26; // r15
  unsigned int v27; // eax
  __int64 v28; // r15
  int v29; // edi
  unsigned int v30; // edi
  int v31; // ecx
  unsigned __int64 v32; // rax
  int v33; // eax
  unsigned __int64 v34; // rcx
  unsigned int v35; // r15d
  __int64 result; // rax
  unsigned __int64 v37; // r15
  struct _KTHREAD *v38; // rax
  NTSTATUS *v39; // r15
  NTSTATUS v40; // eax
  unsigned __int64 v41; // r13
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  bool v46; // zf
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  _QWORD *v51; // rsi
  _QWORD *v52; // r13
  __int64 v53; // rdi
  unsigned __int8 v54; // al
  unsigned __int8 v55; // di
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  int v59; // eax
  unsigned __int8 v60; // di
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // r9
  _DWORD *v63; // r8
  int v64; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v68; // eax
  ULONG v69; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v70; // [rsp+64h] [rbp-35h] BYREF
  unsigned int v71; // [rsp+68h] [rbp-31h]
  struct _KTHREAD *v72; // [rsp+70h] [rbp-29h]
  unsigned __int64 v73; // [rsp+78h] [rbp-21h]
  _QWORD *v74; // [rsp+80h] [rbp-19h]
  unsigned __int64 v75; // [rsp+88h] [rbp-11h]
  __int64 v76; // [rsp+90h] [rbp-9h]
  __int64 v77; // [rsp+A0h] [rbp+7h]
  KIRQL v79; // [rsp+108h] [rbp+6Fh]
  unsigned int v80; // [rsp+108h] [rbp+6Fh]
  int v81; // [rsp+108h] [rbp+6Fh]
  unsigned __int8 v82; // [rsp+108h] [rbp+6Fh]
  int v83; // [rsp+110h] [rbp+77h] BYREF
  ULONG v84; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v70 = 0;
  v5 = 0;
  v77 = v1;
  v6 = 1LL;
  v7 = *(_QWORD *)(v1 + 248);
  v76 = v7;
  v72 = CurrentThread;
  if ( !*(_QWORD *)(v1 + 24) )
    goto LABEL_74;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v8 = (_QWORD *)(a1 + 256);
  v9 = *(_WORD *)(v1 + 204);
  v74 = v8;
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
    v37 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 232));
    *(_BYTE *)(v1 + 206) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v37 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
          v46 = (v68 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v68;
          if ( v46 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v37);
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
  v83 = dword_140CFB18C;
  if ( (v5 & 2) != 0 )
  {
    if ( v12 < (unsigned int)dword_140CFB18C )
      v14 = v12;
    v83 = v14;
  }
  if ( *(_BYTE *)(v7 + 1000) )
  {
    v81 = 0;
    v41 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 996));
    if ( *(_BYTE *)(v7 + 1002) )
    {
      *(_BYTE *)(v7 + 1002) = 0;
      *(_BYTE *)(v7 + 1000) = 0;
      v81 = 1;
    }
    else if ( *(_BYTE *)(v7 + 1000) )
    {
      v14 = *(unsigned __int8 *)(v7 + 1000);
      v83 = v14;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 996));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v42 = KeGetCurrentIrql();
        if ( v42 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v42 >= 2u )
        {
          v43 = KeGetCurrentPrcb();
          v44 = v43->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
          v46 = (v45 & v44[5]) == 0;
          v44[5] &= v45;
          if ( v46 )
            KiRemoveSystemWorkPriorityKick(v43);
          v14 = v83;
        }
      }
    }
    __writecr8(v41);
    if ( v81 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    CurrentThread = v72;
  }
  if ( (*(_DWORD *)(v4 + 40) & 0x1Cu) < 8 )
  {
    if ( v14 > 0x100 )
      v14 = 256;
    v83 = v14;
  }
  v5 |= 1u;
  --CurrentThread->KernelApcDisable;
  if ( (v5 & 2) != 0 )
  {
    v69 = 0;
    MiFindPageFileWriteCluster(v1, &v69, (unsigned int *)&v83, 0);
    v2 = (unsigned int)v83;
    if ( v83 )
    {
      v18 = MiFillNoReservationCluster((_DWORD *)v7, v74, v83);
      v17 = v69;
      v16 = v18;
      v84 = v18;
      goto LABEL_23;
    }
LABEL_74:
    MiPageFileNoFreeSpace(v1, v4, v2, v6);
    goto LABEL_52;
  }
  v84 = v14;
  v15 = MiBuildReservationCluster(v74, v1, &v84, &v70);
  v16 = v70;
  v17 = v15;
  v69 = v15;
  v18 = v84;
LABEL_23:
  if ( v18 )
  {
    v83 = v18;
    v71 = v16 - 1;
    v19 = v18;
    v70 = v16 - 1;
    v79 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 232));
    if ( (v5 & 2) != 0 )
    {
      MiFindPageFileWriteCluster(v1, &v69, (unsigned int *)&v83, 1);
      v17 = v69;
      v19 = v83;
    }
    else
    {
      MiSetPageFileAllocationBits(v1, v17, v84);
      v20 = v84;
      v21 = 0LL;
      v22 = -1;
      v73 = 0LL;
      if ( v74 > &v74[v84] )
        v20 = 0LL;
      v75 = v20;
      if ( v20 )
      {
        v23 = v17;
        v24 = v74;
        do
        {
          v25 = v22;
          if ( *v24 != qword_140C4EDA8
            || (v21 = v73, v20 = v75, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 112) + 32LL), v23)) )
          {
            if ( v22 != -1 )
            {
              MiInvalidatePageFileBitmapsCache(v1, v22, v23 - v22, 0LL);
              v21 = v73;
              v20 = v75;
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
          v73 = v21;
        }
        while ( v21 < v20 );
        v4 = a1;
      }
    }
    if ( (v5 & 2) == 0 )
      *(_DWORD *)(v1 + 136) = v19 + *(_DWORD *)(v1 + 136) - (*(_DWORD *)(v1 + 136) >> 2);
    MiUpdatePagefilePeakUsage((_QWORD *)v1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v47 = KeGetCurrentIrql();
        if ( v47 <= 0xFu && v79 <= 0xFu && v47 >= 2u )
        {
          v48 = KeGetCurrentPrcb();
          v49 = v48->SchedulerAssist;
          v50 = ~(unsigned __int16)(-1LL << (v79 + 1));
          v46 = (v50 & v49[5]) == 0;
          v49[5] &= v50;
          if ( v46 )
            KiRemoveSystemWorkPriorityKick(v48);
          v19 = v83;
          v17 = v69;
          v71 = v70;
        }
      }
    }
    __writecr8(v79);
    KeLeaveCriticalRegionThread(v72);
    v5 &= ~1u;
    LODWORD(v73) = v5;
    if ( v19 != v84 )
    {
      v51 = &v74[v84];
      v52 = &v74[v19];
      do
      {
        v53 = 48LL * *v52 - 0x58000000000LL;
        v82 = MiLockPageInline(v53);
        MiWriteCompletePfn(v53, 1LL);
        _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v54 = KeGetCurrentIrql(), v54 <= 0xFu) )
        {
          v55 = v82;
          if ( v82 <= 0xFu && v54 >= 2u )
          {
            v56 = KeGetCurrentPrcb();
            v57 = v56->SchedulerAssist;
            v58 = ~(unsigned __int16)(-1LL << (v82 + 1));
            v46 = (v58 & v57[5]) == 0;
            v57[5] &= v58;
            if ( v46 )
              KiRemoveSystemWorkPriorityKick(v56);
          }
        }
        else
        {
          v55 = v82;
        }
        __writecr8(v55);
        ++v52;
      }
      while ( v52 < v51 );
      v19 = v83;
      v71 = v83 - v84 + v70;
      v70 = v71;
      MiReleaseWriteInProgressCharges(v76, v84 - v83, 0LL);
      v17 = v69;
      v5 = v73;
      v4 = a1;
      v1 = v77;
    }
    v26 = v74;
    *(_DWORD *)(v4 + 248) = v19 << 12;
    *(_DWORD *)(v4 + 136) = v19 << 12;
    *(_DWORD *)(v4 + 140) = v71;
    v27 = 0;
    v84 = v19;
    v80 = 0;
    LODWORD(v73) = v17;
    do
    {
      if ( *v26 != qword_140C4EDA8 )
      {
        MiUpdatePfnBackingStore(48LL * *v26 - 0x58000000000LL, v1, v17, 0LL);
        v27 = v80;
      }
      ++v27;
      ++v26;
      ++v17;
      v80 = v27;
      v83 = v27;
    }
    while ( v27 < v19 );
    v28 = v76;
    v69 = v17;
    *(_WORD *)(a1 + 216) = 8 * (dword_140CFB18C + 6);
    *(_DWORD *)(a1 + 40) &= ~2u;
    v29 = *(_DWORD *)(a1 + 40) >> 2;
    *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000014];
    v30 = v29 & 7;
    v31 = *(_DWORD *)(v28 + 860);
    v32 = *(_QWORD *)(v28 + 7104);
    if ( v31 )
    {
      if ( v32 >= 0x420 )
      {
        v59 = 0;
      }
      else
      {
        v30 = 4;
        v59 = v31 - 1;
      }
      *(_DWORD *)(v28 + 860) = v59;
    }
    else
    {
      if ( v32 < 0xA0 )
      {
        *(_DWORD *)(v28 + 860) = 32;
      }
      else
      {
        if ( v32 >= 0x120 )
          goto LABEL_45;
        *(_DWORD *)(v28 + 860) = 8;
      }
      v30 = 4;
    }
LABEL_45:
    *(_DWORD *)(a1 + 40) = (4 * v30) | *(_DWORD *)(a1 + 40) & 0xFFFFFFE3;
    if ( v30 < 2 )
    {
      v38 = v72;
      --v72->SpecialApcDisable;
      ++*(_DWORD *)(v28 + 692);
      KiLeaveGuardedRegionUnsafe(v38);
    }
    MI_PAGEFILE_WRITE(a1, (_QWORD *)(a1 + 184), v30, ((v5 >> 1) & 1) == 0, -1);
    v33 = *(_DWORD *)(v28 + 848);
    v34 = *(_QWORD *)(v28 + 840);
    if ( v33 == 512 )
      v34 -= v34 >> 9;
    else
      *(_DWORD *)(v28 + 848) = v33 + 1;
    *(_QWORD *)(v28 + 840) = v34 + v84;
    v35 = v73;
    *(_DWORD *)(a1 + 40) &= ~0x20u;
    *(_QWORD *)(a1 + 176) = (unsigned __int64)v35 << 12;
    if ( v5 >= 4 && (int)MiStoreWriteModifiedPages(a1) >= 0 )
      goto LABEL_51;
    __incgsdword(0x2EACu);
    __addgsdword(0x2EA8u, v84);
    MiMapPageFileHash(v1, a1 + 208, 0LL, v35, v84);
    v39 = (NTSTATUS *)(a1 + 16);
    if ( (*(_WORD *)(v1 + 204) & 0x800) != 0 )
    {
      *v39 = 0;
      *(_QWORD *)(a1 + 24) = *(unsigned int *)(a1 + 248);
    }
    else
    {
      v40 = IoAsynchronousPageWrite(
              *(struct _FILE_OBJECT **)(v1 + 56),
              (struct _MDL *)(a1 + 208),
              (LARGE_INTEGER *)(a1 + 176),
              (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
              (void *)a1,
              v30,
              *(_DWORD *)(v1 + 200),
              0,
              0LL,
              (struct _IO_STATUS_BLOCK *)(a1 + 16),
              (IRP **)(a1 + 32));
      if ( (v40 & 0xC0000000) != 0xC0000000 )
      {
LABEL_51:
        CurrentThread = v72;
        goto LABEL_52;
      }
      *v39 = v40;
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    v60 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(a1, a1 + 16, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v61 = KeGetCurrentIrql();
        if ( v61 <= 0xFu && v60 <= 0xFu && v61 >= 2u )
        {
          v62 = KeGetCurrentPrcb();
          v63 = v62->SchedulerAssist;
          v64 = ~(unsigned __int16)(-1LL << (v60 + 1));
          v46 = (v64 & v63[5]) == 0;
          v63[5] &= v64;
          if ( v46 )
            KiRemoveSystemWorkPriorityKick(v62);
        }
      }
    }
    __writecr8(v60);
    goto LABEL_51;
  }
  CurrentThread = v72;
  --v72->SpecialApcDisable;
  MiMakePagefileWriterEntryAvailable((_QWORD *)v4);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
LABEL_52:
  result = 1LL;
  if ( (v5 & 1) != 0 )
    return KeLeaveCriticalRegionThread(CurrentThread);
  return result;
}
