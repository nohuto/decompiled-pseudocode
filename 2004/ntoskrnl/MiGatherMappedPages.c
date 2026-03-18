/*
 * XREFs of MiGatherMappedPages @ 0x1402F5340
 * Callers:
 *     MiMappedPageWriter @ 0x1403B4730 (MiMappedPageWriter.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiControlAreaUsingExtents @ 0x1402241C0 (MiControlAreaUsingExtents.c)
 *     MiDereferenceControlAreaFile @ 0x1402293FC (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiStartingOffset @ 0x140245D90 (MiStartingOffset.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x14027A2C4 (IoDiskIoAttributionDereference.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     CcNotifyOfMappedWrite @ 0x1402BF88C (CcNotifyOfMappedWrite.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiBuildMappedCluster @ 0x1402F5CD0 (MiBuildMappedCluster.c)
 *     MiClearPfnImageVerified @ 0x1402F7658 (MiClearPfnImageVerified.c)
 *     MiReferencePageForModifiedWrite @ 0x1402F771C (MiReferencePageForModifiedWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1402F77F4 (FsRtlAcquireFileForModWriteEx.c)
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     FsRtlReleaseFileForModWrite @ 0x1402F824C (FsRtlReleaseFileForModWrite.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     IoAsynchronousPageWrite @ 0x140326468 (IoAsynchronousPageWrite.c)
 *     MiDereferenceControlAreaPfnList @ 0x14032D0C0 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x14034461C (MiMarkPfnVerified.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushFileOnlyMdl @ 0x14053BC60 (MiFlushFileOnlyMdl.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD *v6; // rax
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  ULONG_PTR v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // r15
  __int64 v17; // r15
  ULONG_PTR v18; // rax
  struct _FILE_OBJECT *v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  int v25; // edx
  signed __int64 v26; // rbx
  __int64 v27; // rax
  _QWORD *v28; // rdi
  unsigned int v29; // edx
  unsigned int v30; // r12d
  int v31; // eax
  int v32; // eax
  int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int8 v36; // bl
  unsigned int v38; // edx
  int v39; // ecx
  unsigned __int64 v40; // rax
  __int64 v41; // rdi
  int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // r8
  volatile LONG *v45; // rbp
  unsigned __int64 v46; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v50; // eax
  unsigned __int64 v51; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  char v55; // r15
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  bool v61; // zf
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // eax
  int v70; // ecx
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r9
  _DWORD *v73; // r8
  int v74; // eax
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r9
  _DWORD *v77; // r8
  int v78; // eax
  unsigned __int64 v79; // [rsp+60h] [rbp-58h] BYREF
  __int64 v80; // [rsp+68h] [rbp-50h]
  __int64 v81; // [rsp+70h] [rbp-48h]
  __int64 v82; // [rsp+78h] [rbp-40h]
  unsigned int v83; // [rsp+C8h] [rbp+10h]
  int v84; // [rsp+C8h] [rbp+10h]
  __int64 v86; // [rsp+D8h] [rbp+20h] BYREF

  v86 = 0LL;
  v81 = 0LL;
  v4 = a2;
  v79 = 0LL;
  if ( a2 >= 0x10 )
  {
    v4 = 0;
    v6 = (_QWORD *)(a1 + 3472);
    do
    {
      if ( *v6 != 0xFFFFFFFFFLL )
        break;
      ++v4;
      v6 += 5;
    }
    while ( v4 < 0x10 );
    if ( v4 == 16 )
      return 0LL;
  }
  v7 = 0;
  if ( *(_BYTE *)(a1 + 1003) )
  {
    v45 = (volatile LONG *)(a1 + 996);
    v46 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 996));
    if ( *(_BYTE *)(a1 + 1005) )
    {
      *(_BYTE *)(a1 + 1005) = 0;
      *(_BYTE *)(a1 + 1003) = 0;
      v7 = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v45);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v46 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
          v61 = (v50 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v50;
          if ( v61 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v46);
  }
  if ( *(_BYTE *)(a1 + 1032) == 1 )
    v7 = 1;
  if ( v7 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  v8 = 5LL * v4;
  v9 = *(_QWORD *)(a1 + 40LL * v4 + 3472);
  v80 = v8;
  if ( v9 == 0xFFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v10 = 48 * v9 - 0x58000000000LL;
    v11 = (unsigned __int8)MiLockPageInline(v10);
    if ( v9 != *(_QWORD *)(a1 + 8 * v80 + 3472) )
      goto LABEL_39;
    v12 = *(_QWORD *)(v10 + 16);
    if ( qword_140C4DD40 && (v12 & 0x10) == 0 )
      v12 &= ~qword_140C4DD40;
    v13 = v12 >> 16;
    v14 = *(_QWORD *)v13;
    v15 = *(_DWORD *)(*(_QWORD *)v13 + 56LL);
    if ( (v15 & 0x20) != 0 )
    {
      MiUnlinkPageFromList(v10, 0);
      v86 = MI_READ_PTE_LOCK_FREE(v10 + 16);
      v51 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v86) >> 5;
      if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) == 3 )
      {
        MiClearPfnImageVerified(v10, 28LL);
        if ( (MiFlags & 0x10000) != 0 && (v51 & 2) != 0 && (*(_DWORD *)(v14 + 92) & 0xC0000) != 0 )
          MiMarkPfnVerified(v10, 32 * (unsigned int)((((unsigned int)MiFlags >> 17) & 1) == 0) + 6, v52, v53);
      }
      v54 = MiSwizzleInvalidPte(32 * (v51 & 0x1F));
      v84 = 0;
      v55 = v54;
      v86 = v54;
      v56 = v54;
      if ( !MiPteInShadowRange(v10 + 16) )
        goto LABEL_78;
      if ( (unsigned int)MiPteHasShadow(v58, v57, v59, v60) )
      {
        v84 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v61 = (v55 & 1) == 0;
          goto LABEL_76;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v61 = (v55 & 1) == 0;
LABEL_76:
        if ( !v61 )
          v56 |= 0x8000000000000000uLL;
      }
LABEL_78:
      *(_QWORD *)(v10 + 16) = v56;
      if ( v84 )
        MiWritePteShadow(v10 + 16, v56);
      MiDereferenceControlAreaPfnList(v14, 0LL, v59, 3LL);
      v38 = 8;
      goto LABEL_38;
    }
    if ( (v15 & 8) == 0 )
      break;
LABEL_37:
    MiUnlinkPageFromList(v10, 0);
    v38 = 16;
LABEL_38:
    MiInsertPageInList(v10, v38);
LABEL_39:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v62 = KeGetCurrentIrql();
        if ( v62 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v62 >= 2u )
        {
          v63 = KeGetCurrentPrcb();
          v64 = v63->SchedulerAssist;
          v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v61 = (v65 & v64[5]) == 0;
          v64[5] &= v65;
          if ( v61 )
            KiRemoveSystemWorkPriorityKick(v63);
        }
      }
    }
    __writecr8(v11);
    v9 = *(_QWORD *)(a1 + 8 * v80 + 3472);
    if ( v9 == 0xFFFFFFFFFLL )
      return 0LL;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  if ( (*(_DWORD *)(v14 + 56) & 8) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
    goto LABEL_37;
  }
  v16 = *(_QWORD *)(v14 + 120);
  ++*(_DWORD *)(v14 + 76);
  v17 = 8 * v16;
  if ( v17 && _InterlockedIncrement64((volatile signed __int64 *)(v17 + 32)) <= 1 )
    __fastfail(0xEu);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  MiReferencePageForModifiedWrite(v10);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v66 = KeGetCurrentIrql();
      if ( v66 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v66 >= 2u )
      {
        v67 = KeGetCurrentPrcb();
        v68 = v67->SchedulerAssist;
        v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v61 = (v69 & v68[5]) == 0;
        v68[5] &= v69;
        if ( v61 )
          KiRemoveSystemWorkPriorityKick(v67);
      }
    }
  }
  __writecr8(v11);
  v18 = MiReferenceControlAreaFile(v14);
  v61 = *(_BYTE *)(a1 + 1003) == 0;
  v19 = (struct _FILE_OBJECT *)v18;
  v20 = *(_QWORD *)(v18 + 40);
  v82 = v20;
  if ( v61 )
    v21 = CcNotifyOfMappedWrite(v20, v79, 0);
  else
    v21 = 0;
  v22 = MiBuildMappedCluster(v10, a3 + 208, v21);
  *(_QWORD *)(a3 + 200) = v22;
  v23 = v22;
  *(_QWORD *)(a3 + 160) = v14;
  v80 = v22;
  v24 = MiStartingOffset(
          (__int64 *)v13,
          *(_QWORD *)(48LL * *(_QWORD *)(v22 + 48) - 0x58000000000LL + 8) | 0x8000000000000000uLL,
          0xFFFFFFFF);
  v25 = *(_DWORD *)(a3 + 40);
  v26 = v24;
  v79 = v24;
  LODWORD(v24) = *(_DWORD *)(v23 + 40);
  *(_DWORD *)(a3 + 136) = v24;
  v83 = (unsigned int)v24 >> 12;
  *(_DWORD *)(a3 + 140) = ((unsigned int)v24 >> 12) - 1;
  v27 = *(unsigned int *)(v23 + 40);
  v28 = (_QWORD *)(a3 + 168);
  *(_QWORD *)(a3 + 168) = 0LL;
  v81 = v26 + v27;
  if ( (v19->DeviceObject->Characteristics & 0x10) != 0 )
    v29 = v25 | 2;
  else
    v29 = v25 & 0xFFFFFFFD;
  *(_DWORD *)(a3 + 40) = v29;
  v30 = 0;
  v31 = *(_DWORD *)(v14 + 56);
  if ( (v31 & 4) != 0 )
  {
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v19);
LABEL_30:
    v33 = -1073741740;
    goto LABEL_31;
  }
  if ( (v31 & 0x10) != 0 )
  {
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v19);
    v33 = -1073741672;
LABEL_31:
    v30 = 1;
    goto LABEL_32;
  }
  *(_QWORD *)(a3 + 152) = v19;
  if ( (int)FsRtlAcquireFileForModWriteEx(v19) < 0 )
  {
    v33 = -1073741740;
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v19);
    *v28 = 0LL;
LABEL_49:
    if ( (v33 & 0xC0000000) != 0xC0000000 )
      goto LABEL_34;
LABEL_32:
    v34 = a3;
    *(_QWORD *)(a3 + 24) = 0LL;
    v35 = a3 + 16;
    *(_DWORD *)(a3 + 16) = v33;
    v36 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(v34, v35, v30);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v75 = KeGetCurrentIrql();
        if ( v75 <= 0xFu && v36 <= 0xFu && v75 >= 2u )
        {
          v76 = KeGetCurrentPrcb();
          v77 = v76->SchedulerAssist;
          v78 = ~(unsigned __int16)(-1LL << (v36 + 1));
          v61 = (v78 & v77[5]) == 0;
          v77[5] &= v78;
          if ( v61 )
            KiRemoveSystemWorkPriorityKick(v76);
        }
      }
    }
    goto LABEL_33;
  }
  v32 = CcNotifyOfMappedWrite(v82, v26, *(_DWORD *)(v80 + 40));
  if ( !v32 )
  {
    FsRtlReleaseFileForModWrite(v19);
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v19);
    *v28 = 0LL;
    goto LABEL_30;
  }
  if ( v32 == 1 )
    *v28 |= 1uLL;
  *(_QWORD *)(a3 + 176) = v26;
  v39 = *(_DWORD *)(a1 + 688);
  v40 = *(_QWORD *)(a1 + 7104);
  if ( v39 )
  {
    if ( v40 >= 0x420 )
      v70 = 0;
    else
      v70 = v39 - 1;
    *(_DWORD *)(a1 + 688) = v70;
  }
  else if ( v40 < 0x120 )
  {
    *(_DWORD *)(a1 + 688) = v40 < 0xA0 ? 32 : 8;
  }
  __incgsdword(0x2EB4u);
  v41 = a3 + 16;
  __addgsdword(0x2EB0u, v83);
  if ( !MiControlAreaUsingExtents(v14) )
  {
    v33 = IoAsynchronousPageWrite(
            (_DWORD)v19,
            v80,
            (unsigned int)&v79,
            (unsigned int)MiWriteComplete,
            v44,
            v42,
            0,
            0,
            v17,
            v41,
            v44 + 32);
    goto LABEL_49;
  }
  MiFlushFileOnlyMdl(v43, v80, v44, v41);
  v36 = KeGetCurrentIrql();
  __writecr8(1uLL);
  MiWriteComplete(a3, v41, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v71 = KeGetCurrentIrql();
      if ( v71 <= 0xFu && v36 <= 0xFu && v71 >= 2u )
      {
        v72 = KeGetCurrentPrcb();
        v73 = v72->SchedulerAssist;
        v74 = ~(unsigned __int16)(-1LL << (v36 + 1));
        v61 = (v74 & v73[5]) == 0;
        v73[5] &= v74;
        if ( v61 )
          KiRemoveSystemWorkPriorityKick(v72);
      }
    }
  }
LABEL_33:
  __writecr8(v36);
LABEL_34:
  if ( v17 )
    IoDiskIoAttributionDereference(v17);
  return 1LL;
}
