/*
 * XREFs of MiGatherPagefilePages @ 0x14034FAC8
 * Callers:
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWriteCompletePfn @ 0x14028D170 (MiWriteCompletePfn.c)
 *     IoAsynchronousPageWrite @ 0x1402ECB38 (IoAsynchronousPageWrite.c)
 *     MiFillNoReservationCluster @ 0x14030FC38 (MiFillNoReservationCluster.c)
 *     MI_PAGEFILE_WRITE @ 0x14031B094 (MI_PAGEFILE_WRITE.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x14031FDA4 (MiMakePagefileWriterEntryAvailable.c)
 *     MiSetPageFileAllocationBits @ 0x140320618 (MiSetPageFileAllocationBits.c)
 *     MiFindPageFileWriteCluster @ 0x14032145C (MiFindPageFileWriteCluster.c)
 *     MiMapPageFileHash @ 0x140341CD8 (MiMapPageFileHash.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14034D11C (MiInvalidatePageFileBitmapsCache.c)
 *     MiPageFileLargestBitmapsRun @ 0x14034D3A4 (MiPageFileLargestBitmapsRun.c)
 *     MiUpdatePagefilePeakUsage @ 0x14034DA58 (MiUpdatePagefilePeakUsage.c)
 *     MiStoreWriteModifiedPages @ 0x14034DC5C (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x140350A90 (MiUpdatePfnBackingStore.c)
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     MiReleaseWriteInProgressCharges @ 0x140354084 (MiReleaseWriteInProgressCharges.c)
 *     MiBuildReservationCluster @ 0x140383580 (MiBuildReservationCluster.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPageFileNoFreeSpace @ 0x14053E114 (MiPageFileNoFreeSpace.c)
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
  unsigned __int64 v8; // rax
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
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  _QWORD *v32; // r15
  unsigned int v33; // eax
  __int64 v34; // r15
  int v35; // edi
  unsigned int v36; // edi
  int v37; // ecx
  unsigned __int64 v38; // rax
  int v39; // eax
  unsigned __int64 v40; // rcx
  unsigned int v41; // r15d
  __int64 v42; // rdx
  __int64 SchedulerAssist; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 result; // rax
  unsigned __int64 v46; // r15
  __int64 v47; // rax
  NTSTATUS *v48; // r15
  NTSTATUS v49; // eax
  unsigned __int64 v50; // r13
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  bool v55; // zf
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  int v61; // eax
  unsigned __int64 v62; // rsi
  _QWORD *v63; // r13
  __int64 v64; // rdi
  unsigned __int8 v65; // al
  unsigned __int8 v66; // di
  struct _KPRCB *v67; // r10
  int v68; // eax
  int v69; // eax
  unsigned __int8 v70; // di
  unsigned __int8 v71; // al
  int v72; // eax
  unsigned __int8 CurrentIrql; // al
  int v74; // eax
  ULONG v75; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v76; // [rsp+64h] [rbp-35h] BYREF
  unsigned int v77; // [rsp+68h] [rbp-31h]
  struct _KTHREAD *v78; // [rsp+70h] [rbp-29h]
  unsigned __int64 v79; // [rsp+78h] [rbp-21h]
  unsigned __int64 v80; // [rsp+80h] [rbp-19h]
  unsigned __int64 v81; // [rsp+88h] [rbp-11h]
  __int64 v82; // [rsp+90h] [rbp-9h]
  __int64 v83; // [rsp+A0h] [rbp+7h]
  KIRQL v85; // [rsp+108h] [rbp+6Fh]
  unsigned int v86; // [rsp+108h] [rbp+6Fh]
  int v87; // [rsp+108h] [rbp+6Fh]
  unsigned __int8 v88; // [rsp+108h] [rbp+6Fh]
  int v89; // [rsp+110h] [rbp+77h] BYREF
  ULONG v90; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v76 = 0;
  v5 = 0;
  v83 = v1;
  v6 = 1LL;
  v7 = *(_QWORD *)(v1 + 248);
  v82 = v7;
  v78 = CurrentThread;
  if ( !*(_QWORD *)(v1 + 24) )
    goto LABEL_74;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v8 = a1 + 256;
  v9 = *(_WORD *)(v1 + 204);
  v80 = v8;
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
    v46 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 232));
    *(_BYTE *)(v1 + 206) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v46 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
          v74 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
          v55 = (v74 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          v42 = (unsigned int)v74 & *(_DWORD *)(SchedulerAssist + 20);
          *(_DWORD *)(SchedulerAssist + 20) = v42;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v46);
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
  v89 = dword_140CFB18C;
  if ( (v5 & 2) != 0 )
  {
    if ( v12 < (unsigned int)dword_140CFB18C )
      v14 = v12;
    v89 = v14;
  }
  if ( *(_BYTE *)(v7 + 1000) )
  {
    v87 = 0;
    v50 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 996));
    if ( *(_BYTE *)(v7 + 1002) )
    {
      *(_BYTE *)(v7 + 1002) = 0;
      *(_BYTE *)(v7 + 1000) = 0;
      v87 = 1;
    }
    else if ( *(_BYTE *)(v7 + 1000) )
    {
      v14 = *(unsigned __int8 *)(v7 + 1000);
      v89 = v14;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 996));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v51 = KeGetCurrentIrql();
        if ( v51 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v51 >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
          v55 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v52);
          v14 = v89;
        }
      }
    }
    __writecr8(v50);
    if ( v87 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    CurrentThread = v78;
  }
  if ( (*(_DWORD *)(v4 + 40) & 0x1Cu) < 8 )
  {
    if ( v14 > 0x100 )
      v14 = 256;
    v89 = v14;
  }
  v5 |= 1u;
  --CurrentThread->KernelApcDisable;
  if ( (v5 & 2) != 0 )
  {
    v75 = 0;
    MiFindPageFileWriteCluster(v1, &v75, (unsigned int *)&v89, 0);
    v2 = (unsigned int)v89;
    if ( v89 )
    {
      v18 = MiFillNoReservationCluster((_DWORD *)v7, v80, (unsigned int)v89);
      v17 = v75;
      v16 = v18;
      v90 = v18;
      goto LABEL_23;
    }
LABEL_74:
    MiPageFileNoFreeSpace(v1, v4, v2, v6);
    goto LABEL_52;
  }
  v90 = v14;
  v15 = MiBuildReservationCluster(v80, v1, &v90, &v76);
  v16 = v76;
  v17 = v15;
  v75 = v15;
  v18 = v90;
LABEL_23:
  if ( v18 )
  {
    v89 = v18;
    v77 = v16 - 1;
    v19 = v18;
    v76 = v16 - 1;
    v85 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 232));
    if ( (v5 & 2) != 0 )
    {
      MiFindPageFileWriteCluster(v1, &v75, (unsigned int *)&v89, 1);
      v17 = v75;
      v19 = v89;
    }
    else
    {
      MiSetPageFileAllocationBits(v1, v17, v90);
      v20 = v90;
      v21 = 0LL;
      v22 = -1;
      v79 = 0LL;
      if ( v80 > v80 + 8LL * v90 )
        v20 = 0LL;
      v81 = v20;
      if ( v20 )
      {
        v23 = v17;
        v24 = (_QWORD *)v80;
        do
        {
          v25 = v22;
          if ( *v24 != qword_140C4ECA8
            || (v21 = v79, v20 = v81, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 112) + 32LL), v23)) )
          {
            if ( v22 != -1 )
            {
              MiInvalidatePageFileBitmapsCache(v1, v22, v23 - v22, 0LL);
              v21 = v79;
              v20 = v81;
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
          v79 = v21;
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
      v26 = 1LL;
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v59 = KeGetCurrentIrql();
        if ( v59 <= 0xFu && v85 <= 0xFu && v59 >= 2u )
        {
          v60 = KeGetCurrentPrcb();
          v26 = -1LL << (v85 + 1);
          v28 = (__int64)v60->SchedulerAssist;
          v61 = ~(unsigned __int16)v26;
          v55 = (v61 & *(_DWORD *)(v28 + 20)) == 0;
          v27 = (unsigned int)v61 & *(_DWORD *)(v28 + 20);
          *(_DWORD *)(v28 + 20) = v27;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v60);
          v19 = v89;
          v17 = v75;
          v77 = v76;
        }
      }
    }
    __writecr8(v85);
    KeLeaveCriticalRegionThread((__int64)v78, v26, v27, v28);
    v5 &= ~1u;
    LODWORD(v79) = v5;
    if ( v19 != v90 )
    {
      v62 = v80 + 8LL * v90;
      v63 = (_QWORD *)(v80 + 8LL * v19);
      do
      {
        v64 = 48LL * *v63 - 0x58000000000LL;
        v88 = MiLockPageInline(v64, v29, v30, v31);
        MiWriteCompletePfn(v64, 1);
        _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v65 = KeGetCurrentIrql(), v65 <= 0xFu) )
        {
          v66 = v88;
          if ( v88 <= 0xFu && v65 >= 2u )
          {
            v67 = KeGetCurrentPrcb();
            v29 = -1LL << (v88 + 1);
            v31 = v67->SchedulerAssist;
            v68 = ~(unsigned __int16)v29;
            v55 = (v68 & v31[5]) == 0;
            v30 = (unsigned int)v68 & v31[5];
            v31[5] = v30;
            if ( v55 )
              KiRemoveSystemWorkPriorityKick(v67);
          }
        }
        else
        {
          v66 = v88;
        }
        __writecr8(v66);
        ++v63;
      }
      while ( (unsigned __int64)v63 < v62 );
      v19 = v89;
      v77 = v89 - v90 + v76;
      v76 = v77;
      MiReleaseWriteInProgressCharges(v82, v90 - v89, 0LL);
      v17 = v75;
      v5 = v79;
      v4 = a1;
      v1 = v83;
    }
    v32 = (_QWORD *)v80;
    *(_DWORD *)(v4 + 248) = v19 << 12;
    *(_DWORD *)(v4 + 136) = v19 << 12;
    *(_DWORD *)(v4 + 140) = v77;
    v33 = 0;
    v90 = v19;
    v86 = 0;
    LODWORD(v79) = v17;
    do
    {
      if ( *v32 != qword_140C4ECA8 )
      {
        MiUpdatePfnBackingStore(48LL * *v32 - 0x58000000000LL, v1, v17, 0LL);
        v33 = v86;
      }
      ++v33;
      ++v32;
      ++v17;
      v86 = v33;
      v89 = v33;
    }
    while ( v33 < v19 );
    v34 = v82;
    v75 = v17;
    *(_WORD *)(a1 + 216) = 8 * (dword_140CFB18C + 6);
    *(_DWORD *)(a1 + 40) &= ~2u;
    v35 = *(_DWORD *)(a1 + 40) >> 2;
    *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000014];
    v36 = v35 & 7;
    v37 = *(_DWORD *)(v34 + 860);
    v38 = *(_QWORD *)(v34 + 7104);
    if ( v37 )
    {
      if ( v38 >= 0x420 )
      {
        v69 = 0;
      }
      else
      {
        v36 = 4;
        v69 = v37 - 1;
      }
      *(_DWORD *)(v34 + 860) = v69;
    }
    else
    {
      if ( v38 < 0xA0 )
      {
        *(_DWORD *)(v34 + 860) = 32;
      }
      else
      {
        if ( v38 >= 0x120 )
          goto LABEL_45;
        *(_DWORD *)(v34 + 860) = 8;
      }
      v36 = 4;
    }
LABEL_45:
    *(_DWORD *)(a1 + 40) = (4 * v36) | *(_DWORD *)(a1 + 40) & 0xFFFFFFE3;
    if ( v36 < 2 )
    {
      v47 = (__int64)v78;
      --v78->SpecialApcDisable;
      ++*(_DWORD *)(v34 + 692);
      KiLeaveGuardedRegionUnsafe(v47, 0LL, 1LL, (__int64)v31);
    }
    MI_PAGEFILE_WRITE(a1, (_QWORD *)(a1 + 184), v36, ((v5 >> 1) & 1) == 0, -1);
    v39 = *(_DWORD *)(v34 + 848);
    v40 = *(_QWORD *)(v34 + 840);
    if ( v39 == 512 )
      v40 -= v40 >> 9;
    else
      *(_DWORD *)(v34 + 848) = v39 + 1;
    *(_QWORD *)(v34 + 840) = v40 + v90;
    v41 = v79;
    *(_DWORD *)(a1 + 40) &= ~0x20u;
    *(_QWORD *)(a1 + 176) = (unsigned __int64)v41 << 12;
    if ( v5 >= 4 && (int)MiStoreWriteModifiedPages(a1) >= 0 )
      goto LABEL_51;
    __incgsdword(0x2EACu);
    __addgsdword(0x2EA8u, v90);
    MiMapPageFileHash(v1, a1 + 208, 0LL, v41, v90);
    v48 = (NTSTATUS *)(a1 + 16);
    if ( (*(_WORD *)(v1 + 204) & 0x800) != 0 )
    {
      *v48 = 0;
      *(_QWORD *)(a1 + 24) = *(unsigned int *)(a1 + 248);
    }
    else
    {
      v49 = IoAsynchronousPageWrite(
              *(struct _FILE_OBJECT **)(v1 + 56),
              (struct _MDL *)(a1 + 208),
              (LARGE_INTEGER *)(a1 + 176),
              (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
              (void *)a1,
              v36,
              *(_DWORD *)(v1 + 200),
              0,
              0LL,
              (struct _IO_STATUS_BLOCK *)(a1 + 16),
              (IRP **)(a1 + 32));
      v42 = 3221225472LL;
      if ( (v49 & 0xC0000000) != 0xC0000000 )
      {
LABEL_51:
        CurrentThread = v78;
        goto LABEL_52;
      }
      *v48 = v49;
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    v70 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(a1, a1 + 16, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v71 = KeGetCurrentIrql();
        if ( v71 <= 0xFu && v70 <= 0xFu && v71 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
          v72 = ~(unsigned __int16)(-1LL << (v70 + 1));
          v55 = (v72 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          v42 = (unsigned int)v72 & *(_DWORD *)(SchedulerAssist + 20);
          *(_DWORD *)(SchedulerAssist + 20) = v42;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v70);
    goto LABEL_51;
  }
  CurrentThread = v78;
  --v78->SpecialApcDisable;
  MiMakePagefileWriterEntryAvailable((_QWORD *)v4);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v56, v57, v58);
LABEL_52:
  result = 1LL;
  if ( (v5 & 1) != 0 )
    return (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread, v42, SchedulerAssist, (__int64)CurrentPrcb);
  return result;
}
