/*
 * XREFs of MiGatherMappedPages @ 0x14035131C
 * Callers:
 *     MiMappedPageWriter @ 0x1403B2930 (MiMappedPageWriter.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     CcNotifyOfMappedWrite @ 0x14022CA64 (CcNotifyOfMappedWrite.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiControlAreaUsingExtents @ 0x14027D210 (MiControlAreaUsingExtents.c)
 *     MiDereferenceControlAreaFile @ 0x14028244C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiStartingOffset @ 0x14029EDC0 (MiStartingOffset.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x1402DB1B4 (IoDiskIoAttributionDereference.c)
 *     IoAsynchronousPageWrite @ 0x1402ECB38 (IoAsynchronousPageWrite.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F1320 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140306818 (MiMarkPfnVerified.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiBuildMappedCluster @ 0x140351CB0 (MiBuildMappedCluster.c)
 *     MiClearPfnImageVerified @ 0x140353638 (MiClearPfnImageVerified.c)
 *     MiReferencePageForModifiedWrite @ 0x1403536FC (MiReferencePageForModifiedWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1403537D4 (FsRtlAcquireFileForModWriteEx.c)
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     FsRtlReleaseFileForModWrite @ 0x14035422C (FsRtlReleaseFileForModWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushFileOnlyMdl @ 0x14053B610 (MiFlushFileOnlyMdl.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // r12
  unsigned int v5; // ebx
  _QWORD *v7; // rax
  int v8; // edi
  struct _MDL *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // r15
  __int64 v18; // r15
  ULONG_PTR v19; // rax
  struct _FILE_OBJECT *v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // eax
  struct _MDL *v23; // rax
  struct _MDL *v24; // rdi
  unsigned __int64 v25; // rax
  int v26; // edx
  signed __int64 v27; // rbx
  __int64 ByteCount; // rax
  _QWORD *v29; // rdi
  unsigned int v30; // edx
  unsigned int v31; // r12d
  int v32; // eax
  int v33; // eax
  NTSTATUS v34; // ebx
  struct _IO_STATUS_BLOCK *v35; // rax
  struct _IO_STATUS_BLOCK *v36; // rdx
  unsigned __int8 v37; // bl
  unsigned int v39; // edx
  int v40; // ecx
  unsigned __int64 v41; // rax
  struct _IO_STATUS_BLOCK *v42; // rdi
  int v43; // edx
  __int64 v44; // rcx
  IRP **v45; // r8
  volatile LONG *v46; // rbp
  unsigned __int64 v47; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v50; // eax
  unsigned __int64 v51; // rbx
  __int64 v52; // rax
  char v53; // r15
  __int64 v54; // rbx
  __int64 v55; // r8
  bool v56; // zf
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  int v59; // eax
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // eax
  int v64; // ecx
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r9
  _DWORD *v67; // r8
  int v68; // eax
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r9
  _DWORD *v71; // r8
  int v72; // eax
  LARGE_INTEGER v73; // [rsp+60h] [rbp-58h] BYREF
  struct _MDL *v74; // [rsp+68h] [rbp-50h]
  __int64 v75; // [rsp+70h] [rbp-48h]
  __int64 v76; // [rsp+78h] [rbp-40h]
  unsigned int v77; // [rsp+C8h] [rbp+10h]
  int v78; // [rsp+C8h] [rbp+10h]
  struct _IO_STATUS_BLOCK *v79; // [rsp+D0h] [rbp+18h]
  __int64 v80; // [rsp+D8h] [rbp+20h] BYREF

  v79 = (struct _IO_STATUS_BLOCK *)a3;
  v80 = 0LL;
  v4 = a3;
  v75 = 0LL;
  v5 = a2;
  v73.QuadPart = 0LL;
  if ( (unsigned int)a2 >= 0x10 )
  {
    v5 = 0;
    v7 = (_QWORD *)(a1 + 3472);
    do
    {
      if ( *v7 != 0xFFFFFFFFFLL )
        break;
      ++v5;
      v7 += 5;
    }
    while ( v5 < 0x10 );
    if ( v5 == 16 )
      return 0LL;
  }
  v8 = 0;
  if ( *(_BYTE *)(a1 + 1003) )
  {
    v46 = (volatile LONG *)(a1 + 996);
    v47 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 996));
    if ( *(_BYTE *)(a1 + 1005) )
    {
      *(_BYTE *)(a1 + 1005) = 0;
      *(_BYTE *)(a1 + 1003) = 0;
      v8 = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v46);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v47 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a2 = -1LL << ((unsigned __int8)v47 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v50 = ~(unsigned __int16)a2;
          v56 = (v50 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v50 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v56 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v47);
  }
  if ( *(_BYTE *)(a1 + 1032) == 1 )
    v8 = 1;
  if ( v8 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  v9 = (struct _MDL *)(5LL * v5);
  v10 = *(_QWORD *)(a1 + 40LL * v5 + 3472);
  v74 = v9;
  if ( v10 == 0xFFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v11 = 48 * v10 - 0x58000000000LL;
    v12 = (unsigned __int8)MiLockPageInline(v11, a2, a3, SchedulerAssist);
    if ( v10 != *(_QWORD *)(a1 + 8LL * (_QWORD)v74 + 3472) )
      goto LABEL_39;
    v13 = *(_QWORD *)(v11 + 16);
    if ( qword_140C4DE80 && (v13 & 0x10) == 0 )
      v13 &= ~qword_140C4DE80;
    v14 = v13 >> 16;
    v15 = *(_QWORD *)v14;
    v16 = *(_DWORD *)(*(_QWORD *)v14 + 56LL);
    if ( (v16 & 0x20) != 0 )
    {
      MiUnlinkPageFromList(v11, 0);
      v80 = MI_READ_PTE_LOCK_FREE(v11 + 16);
      v51 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v80) >> 5;
      if ( ((*(_QWORD *)(v11 + 40) >> 60) & 7) == 3 )
      {
        MiClearPfnImageVerified(v11, 28LL);
        if ( (MiFlags & 0x10000) != 0 && (v51 & 2) != 0 && (*(_DWORD *)(v15 + 92) & 0xC0000) != 0 )
          MiMarkPfnVerified(v11, 32 * ((((unsigned int)MiFlags >> 17) & 1) == 0) + 6);
      }
      v52 = MiSwizzleInvalidPte(32 * (v51 & 0x1F));
      v78 = 0;
      v53 = v52;
      v80 = v52;
      v54 = v52;
      if ( !MiPteInShadowRange(v11 + 16) )
        goto LABEL_78;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v78 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v56 = (v53 & 1) == 0;
          goto LABEL_76;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v56 = (v53 & 1) == 0;
LABEL_76:
        if ( !v56 )
          v54 |= 0x8000000000000000uLL;
      }
LABEL_78:
      *(_QWORD *)(v11 + 16) = v54;
      if ( v78 )
        MiWritePteShadow(v11 + 16, v54);
      MiDereferenceControlAreaPfnList(v15, 0LL, v55, (_DWORD *)3);
      v39 = 8;
      goto LABEL_38;
    }
    if ( (v16 & 8) == 0 )
      break;
LABEL_37:
    MiUnlinkPageFromList(v11, 0);
    v39 = 16;
LABEL_38:
    MiInsertPageInList(v11, v39);
LABEL_39:
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v57 = KeGetCurrentIrql();
        if ( v57 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v57 >= 2u )
        {
          v58 = KeGetCurrentPrcb();
          a2 = -1LL << ((unsigned __int8)v12 + 1);
          SchedulerAssist = v58->SchedulerAssist;
          v59 = ~(unsigned __int16)a2;
          v56 = (v59 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v59 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v56 )
            KiRemoveSystemWorkPriorityKick(v58);
        }
      }
    }
    __writecr8(v12);
    v10 = *(_QWORD *)(a1 + 8LL * (_QWORD)v74 + 3472);
    if ( v10 == 0xFFFFFFFFFLL )
      return 0LL;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
  if ( (*(_DWORD *)(v15 + 56) & 8) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
    goto LABEL_37;
  }
  v17 = *(_QWORD *)(v15 + 120);
  ++*(_DWORD *)(v15 + 76);
  v18 = 8 * v17;
  if ( v18 && _InterlockedIncrement64((volatile signed __int64 *)(v18 + 32)) <= 1 )
    __fastfail(0xEu);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
  MiReferencePageForModifiedWrite(v11);
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v60 = KeGetCurrentIrql();
      if ( v60 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v60 >= 2u )
      {
        v61 = KeGetCurrentPrcb();
        v62 = v61->SchedulerAssist;
        v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v56 = (v63 & v62[5]) == 0;
        v62[5] &= v63;
        if ( v56 )
          KiRemoveSystemWorkPriorityKick(v61);
      }
    }
  }
  __writecr8(v12);
  v19 = MiReferenceControlAreaFile(v15);
  v56 = *(_BYTE *)(a1 + 1003) == 0;
  v20 = (struct _FILE_OBJECT *)v19;
  v21 = *(_QWORD *)(v19 + 40);
  v76 = v21;
  if ( v56 )
    v22 = CcNotifyOfMappedWrite(v21, v73.QuadPart, 0);
  else
    v22 = 0;
  v23 = (struct _MDL *)MiBuildMappedCluster(v11, v4 + 208, v22);
  *(_QWORD *)(v4 + 200) = v23;
  v24 = v23;
  *(_QWORD *)(v4 + 160) = v15;
  v74 = v23;
  v25 = MiStartingOffset(
          (__int64 *)v14,
          *(_QWORD *)(48 * (__int64)v23[1].Next - 0x58000000000LL + 8) | 0x8000000000000000uLL,
          0xFFFFFFFFLL);
  v26 = *(_DWORD *)(v4 + 40);
  v27 = v25;
  v73.QuadPart = v25;
  LODWORD(v25) = v24->ByteCount;
  *(_DWORD *)(v4 + 136) = v25;
  v77 = (unsigned int)v25 >> 12;
  *(_DWORD *)(v4 + 140) = ((unsigned int)v25 >> 12) - 1;
  ByteCount = v24->ByteCount;
  v29 = (_QWORD *)(v4 + 168);
  *(_QWORD *)(v4 + 168) = 0LL;
  v75 = v27 + ByteCount;
  if ( (v20->DeviceObject->Characteristics & 0x10) != 0 )
    v30 = v26 | 2;
  else
    v30 = v26 & 0xFFFFFFFD;
  *(_DWORD *)(v4 + 40) = v30;
  v31 = 0;
  v32 = *(_DWORD *)(v15 + 56);
  if ( (v32 & 4) != 0 )
  {
    MiDereferenceControlAreaFile(v15, (unsigned __int64)v20);
LABEL_30:
    v34 = -1073741740;
    goto LABEL_31;
  }
  if ( (v32 & 0x10) != 0 )
  {
    MiDereferenceControlAreaFile(v15, (unsigned __int64)v20);
    v34 = -1073741672;
LABEL_31:
    v31 = 1;
    goto LABEL_32;
  }
  v79[9].Information = (ULONG_PTR)v20;
  if ( (int)FsRtlAcquireFileForModWriteEx(v20) < 0 )
  {
    v34 = -1073741740;
    MiDereferenceControlAreaFile(v15, (unsigned __int64)v20);
    *v29 = 0LL;
LABEL_49:
    if ( (v34 & 0xC0000000) != 0xC0000000 )
      goto LABEL_34;
LABEL_32:
    v35 = v79;
    v79[1].Information = 0LL;
    v36 = v79 + 1;
    v79[1].Status = v34;
    v37 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(v35, v36, v31);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v69 = KeGetCurrentIrql();
        if ( v69 <= 0xFu && v37 <= 0xFu && v69 >= 2u )
        {
          v70 = KeGetCurrentPrcb();
          v71 = v70->SchedulerAssist;
          v72 = ~(unsigned __int16)(-1LL << (v37 + 1));
          v56 = (v72 & v71[5]) == 0;
          v71[5] &= v72;
          if ( v56 )
            KiRemoveSystemWorkPriorityKick(v70);
        }
      }
    }
    goto LABEL_33;
  }
  v33 = CcNotifyOfMappedWrite(v76, v27, v74->ByteCount);
  if ( !v33 )
  {
    FsRtlReleaseFileForModWrite(v20);
    MiDereferenceControlAreaFile(v15, (unsigned __int64)v20);
    *v29 = 0LL;
    goto LABEL_30;
  }
  if ( v33 == 1 )
    *v29 |= 1uLL;
  v79[11].Pointer = (PVOID)v27;
  v40 = *(_DWORD *)(a1 + 688);
  v41 = *(_QWORD *)(a1 + 7104);
  if ( v40 )
  {
    if ( v41 >= 0x420 )
      v64 = 0;
    else
      v64 = v40 - 1;
    *(_DWORD *)(a1 + 688) = v64;
  }
  else if ( v41 < 0x120 )
  {
    *(_DWORD *)(a1 + 688) = v41 < 0xA0 ? 32 : 8;
  }
  __incgsdword(0x2EB4u);
  v42 = v79 + 1;
  __addgsdword(0x2EB0u, v77);
  if ( !MiControlAreaUsingExtents(v15) )
  {
    v34 = IoAsynchronousPageWrite(
            v20,
            v74,
            &v73,
            (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
            v45,
            v43,
            0,
            0,
            v18,
            v42,
            v45 + 4);
    goto LABEL_49;
  }
  MiFlushFileOnlyMdl(v44, v74, v45, v42);
  v37 = KeGetCurrentIrql();
  __writecr8(1uLL);
  MiWriteComplete(v79, v42, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v65 = KeGetCurrentIrql();
      if ( v65 <= 0xFu && v37 <= 0xFu && v65 >= 2u )
      {
        v66 = KeGetCurrentPrcb();
        v67 = v66->SchedulerAssist;
        v68 = ~(unsigned __int16)(-1LL << (v37 + 1));
        v56 = (v68 & v67[5]) == 0;
        v67[5] &= v68;
        if ( v56 )
          KiRemoveSystemWorkPriorityKick(v66);
      }
    }
  }
LABEL_33:
  __writecr8(v37);
LABEL_34:
  if ( v18 )
    IoDiskIoAttributionDereference(v18);
  return 1LL;
}
