/*
 * XREFs of MiGatherMappedPages @ 0x140277138
 * Callers:
 *     MiMappedPageWriter @ 0x1403B78A0 (MiMappedPageWriter.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x140207954 (IoDiskIoAttributionDereference.c)
 *     IoAsynchronousPageWrite @ 0x14020CF7C (IoAsynchronousPageWrite.c)
 *     MiClearPfnImageVerified @ 0x140220654 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140236C14 (MiMarkPfnVerified.c)
 *     FsRtlReleaseFileForModWrite @ 0x140276504 (FsRtlReleaseFileForModWrite.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140276F3C (FsRtlAcquireFileForModWriteEx.c)
 *     MiBuildMappedCluster @ 0x140277640 (MiBuildMappedCluster.c)
 *     MiReferencePageForModifiedWrite @ 0x140277E5C (MiReferencePageForModifiedWrite.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     MiDereferenceControlAreaPfnList @ 0x140284F70 (MiDereferenceControlAreaPfnList.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     CcNotifyOfMappedWrite @ 0x1402D1EDC (CcNotifyOfMappedWrite.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiControlAreaUsingExtents @ 0x14033D9A0 (MiControlAreaUsingExtents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushFileOnlyMdl @ 0x140541370 (MiFlushFileOnlyMdl.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD *v6; // rax
  int v7; // edi
  struct _MDL *v8; // rax
  __int64 v9; // rbx
  ULONG_PTR v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // r15
  __int64 v17; // r15
  __int64 v18; // rax
  struct _FILE_OBJECT *v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // eax
  struct _MDL *v22; // rax
  struct _MDL *v23; // rdi
  LARGE_INTEGER v24; // rax
  int v25; // edx
  LARGE_INTEGER v26; // rbx
  __int64 ByteCount; // rax
  struct _ERESOURCE **v28; // rdi
  unsigned int v29; // edx
  int v30; // r12d
  int v31; // eax
  int v32; // eax
  NTSTATUS v33; // ebx
  __int64 v34; // rax
  int *v35; // rdx
  unsigned __int8 v36; // bl
  __int64 v38; // rdx
  int v39; // ecx
  unsigned __int64 v40; // rax
  struct _IO_STATUS_BLOCK *v41; // rdi
  int v42; // edx
  __int64 v43; // rcx
  IRP **v44; // r8
  volatile LONG *v45; // rbp
  unsigned __int64 v46; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v50; // eax
  unsigned __int64 v51; // rbx
  __int64 v52; // rax
  char v53; // r15
  __int64 v54; // rbx
  __int64 v55; // r8
  bool v56; // zf
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // r10
  _DWORD *v63; // r9
  int v64; // eax
  int v65; // ecx
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r9
  _DWORD *v68; // r8
  int v69; // eax
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r9
  _DWORD *v72; // r8
  int v73; // eax
  LARGE_INTEGER v74; // [rsp+60h] [rbp-58h] BYREF
  struct _MDL *v75; // [rsp+68h] [rbp-50h]
  LONGLONG v76; // [rsp+70h] [rbp-48h] BYREF
  __int64 v77; // [rsp+78h] [rbp-40h]
  unsigned int v78; // [rsp+C8h] [rbp+10h]
  int v79; // [rsp+C8h] [rbp+10h]
  __int64 v81; // [rsp+D8h] [rbp+20h] BYREF

  v81 = 0LL;
  v76 = 0LL;
  v4 = a2;
  v74.QuadPart = 0LL;
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
          v56 = (v50 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v50;
          if ( v56 )
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
  v8 = (struct _MDL *)(5LL * v4);
  v9 = *(_QWORD *)(a1 + 40LL * v4 + 3472);
  v75 = v8;
  if ( v9 == 0xFFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v10 = 48 * v9 - 0x58000000000LL;
    v11 = (unsigned __int8)MiLockPageInline(v10);
    if ( v9 != *(_QWORD *)(a1 + 8LL * (_QWORD)v75 + 3472) )
      goto LABEL_39;
    v12 = *(_QWORD *)(v10 + 16);
    if ( qword_140C4DF80 && (v12 & 0x10) == 0 )
      v12 &= ~qword_140C4DF80;
    v13 = v12 >> 16;
    v14 = *(_QWORD *)v13;
    v15 = *(_DWORD *)(*(_QWORD *)v13 + 56LL);
    if ( (v15 & 0x20) != 0 )
    {
      MiUnlinkPageFromList(v10);
      v81 = MI_READ_PTE_LOCK_FREE(v10 + 16);
      v51 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(&v81) >> 5;
      if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) == 3 )
      {
        MiClearPfnImageVerified(v10, 28);
        if ( (MiFlags & 0x10000) != 0 && (v51 & 2) != 0 && (*(_DWORD *)(v14 + 92) & 0xC0000) != 0 )
          MiMarkPfnVerified(v10, 32 * ((((unsigned int)MiFlags >> 17) & 1) == 0) + 6);
      }
      v52 = MiSwizzleInvalidPte(32 * (v51 & 0x1F));
      v79 = 0;
      v53 = v52;
      v81 = v52;
      v54 = v52;
      if ( !(unsigned int)MiPteInShadowRange(v10 + 16) )
        goto LABEL_78;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v79 = 1;
        if ( !HIBYTE(word_140C4E048) )
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
      *(_QWORD *)(v10 + 16) = v54;
      if ( v79 )
        MiWritePteShadow(v10 + 16, v54);
      MiDereferenceControlAreaPfnList(v14, 0LL, v55, 3LL);
      v38 = 8LL;
      goto LABEL_38;
    }
    if ( (v15 & 8) == 0 )
      break;
LABEL_37:
    MiUnlinkPageFromList(v10);
    v38 = 16LL;
LABEL_38:
    MiInsertPageInList(v10, v38);
LABEL_39:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v57 = KeGetCurrentIrql();
        if ( v57 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v57 >= 2u )
        {
          v58 = KeGetCurrentPrcb();
          v59 = v58->SchedulerAssist;
          v60 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v56 = (v60 & v59[5]) == 0;
          v59[5] &= v60;
          if ( v56 )
            KiRemoveSystemWorkPriorityKick(v58);
        }
      }
    }
    __writecr8(v11);
    v9 = *(_QWORD *)(a1 + 8LL * (_QWORD)v75 + 3472);
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
      v61 = KeGetCurrentIrql();
      if ( v61 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v61 >= 2u )
      {
        v62 = KeGetCurrentPrcb();
        v63 = v62->SchedulerAssist;
        v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v56 = (v64 & v63[5]) == 0;
        v63[5] &= v64;
        if ( v56 )
          KiRemoveSystemWorkPriorityKick(v62);
      }
    }
  }
  __writecr8(v11);
  v18 = MiReferenceControlAreaFile(v14);
  v56 = *(_BYTE *)(a1 + 1003) == 0;
  v19 = (struct _FILE_OBJECT *)v18;
  v20 = *(_QWORD *)(v18 + 40);
  v77 = v20;
  if ( v56 )
    v21 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CcNotifyOfMappedWrite)(v20, (LARGE_INTEGER)v74.QuadPart, 0LL);
  else
    v21 = 0;
  v22 = (struct _MDL *)MiBuildMappedCluster(v10, a3 + 208, v21);
  *(_QWORD *)(a3 + 200) = v22;
  v23 = v22;
  *(_QWORD *)(a3 + 160) = v14;
  v75 = v22;
  v24.QuadPart = MiStartingOffset(
                   v13,
                   *(_QWORD *)(48 * (__int64)v22[1].Next - 0x58000000000LL + 8) | 0x8000000000000000uLL,
                   0xFFFFFFFFLL);
  v25 = *(_DWORD *)(a3 + 40);
  v26 = v24;
  v74 = v24;
  v24.LowPart = v23->ByteCount;
  *(_DWORD *)(a3 + 136) = v24.LowPart;
  v78 = v24.LowPart >> 12;
  *(_DWORD *)(a3 + 140) = (v24.LowPart >> 12) - 1;
  ByteCount = v23->ByteCount;
  v28 = (struct _ERESOURCE **)(a3 + 168);
  *(_QWORD *)(a3 + 168) = 0LL;
  v76 = v26.QuadPart + ByteCount;
  if ( (v19->DeviceObject->Characteristics & 0x10) != 0 )
    v29 = v25 | 2;
  else
    v29 = v25 & 0xFFFFFFFD;
  *(_DWORD *)(a3 + 40) = v29;
  v30 = 0;
  v31 = *(_DWORD *)(v14 + 56);
  if ( (v31 & 4) != 0 )
  {
    MiDereferenceControlAreaFile(v14, v19);
LABEL_30:
    v33 = -1073741740;
    goto LABEL_31;
  }
  if ( (v31 & 0x10) != 0 )
  {
    MiDereferenceControlAreaFile(v14, v19);
    v33 = -1073741672;
LABEL_31:
    v30 = 1;
    goto LABEL_32;
  }
  *(_QWORD *)(a3 + 152) = v19;
  if ( (int)FsRtlAcquireFileForModWriteEx(v19, (__int64)&v76, (__int64)v28) < 0 )
  {
    v33 = -1073741740;
    MiDereferenceControlAreaFile(v14, v19);
    *v28 = 0LL;
LABEL_49:
    if ( (v33 & 0xC0000000) != 0xC0000000 )
      goto LABEL_34;
LABEL_32:
    v34 = a3;
    *(_QWORD *)(a3 + 24) = 0LL;
    v35 = (int *)(a3 + 16);
    *(_DWORD *)(a3 + 16) = v33;
    v36 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(v34, v35, v30);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v70 = KeGetCurrentIrql();
        if ( v70 <= 0xFu && v36 <= 0xFu && v70 >= 2u )
        {
          v71 = KeGetCurrentPrcb();
          v72 = v71->SchedulerAssist;
          v73 = ~(unsigned __int16)(-1LL << (v36 + 1));
          v56 = (v73 & v72[5]) == 0;
          v72[5] &= v73;
          if ( v56 )
            KiRemoveSystemWorkPriorityKick(v71);
        }
      }
    }
    goto LABEL_33;
  }
  v32 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CcNotifyOfMappedWrite)(
          v77,
          (LARGE_INTEGER)v26.QuadPart,
          v75->ByteCount);
  if ( !v32 )
  {
    FsRtlReleaseFileForModWrite(v19, *v28);
    MiDereferenceControlAreaFile(v14, v19);
    *v28 = 0LL;
    goto LABEL_30;
  }
  if ( v32 == 1 )
    *v28 = (struct _ERESOURCE *)((unsigned __int64)*v28 | 1);
  *(LARGE_INTEGER *)(a3 + 176) = v26;
  v39 = *(_DWORD *)(a1 + 688);
  v40 = *(_QWORD *)(a1 + 7104);
  if ( v39 )
  {
    if ( v40 >= 0x420 )
      v65 = 0;
    else
      v65 = v39 - 1;
    *(_DWORD *)(a1 + 688) = v65;
  }
  else if ( v40 < 0x120 )
  {
    *(_DWORD *)(a1 + 688) = v40 < 0xA0 ? 32 : 8;
  }
  __incgsdword(0x2EB4u);
  v41 = (struct _IO_STATUS_BLOCK *)(a3 + 16);
  __addgsdword(0x2EB0u, v78);
  if ( !(unsigned int)MiControlAreaUsingExtents(v14) )
  {
    v33 = IoAsynchronousPageWrite(
            v19,
            v75,
            &v74,
            (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
            v44,
            v42,
            0,
            0,
            v17,
            v41,
            v44 + 4);
    goto LABEL_49;
  }
  MiFlushFileOnlyMdl(v43, v75, v44, v41);
  v36 = KeGetCurrentIrql();
  __writecr8(1uLL);
  MiWriteComplete(a3, (int *)&v41->0, 0);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v66 = KeGetCurrentIrql();
      if ( v66 <= 0xFu && v36 <= 0xFu && v66 >= 2u )
      {
        v67 = KeGetCurrentPrcb();
        v68 = v67->SchedulerAssist;
        v69 = ~(unsigned __int16)(-1LL << (v36 + 1));
        v56 = (v69 & v68[5]) == 0;
        v68[5] &= v69;
        if ( v56 )
          KiRemoveSystemWorkPriorityKick(v67);
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
