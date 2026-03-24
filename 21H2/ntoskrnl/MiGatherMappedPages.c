/*
 * XREFs of MiGatherMappedPages @ 0x140255BC8
 * Callers:
 *     MiMappedPageWriter @ 0x1403B7730 (MiMappedPageWriter.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     CcNotifyOfMappedWrite @ 0x14022D68C (CcNotifyOfMappedWrite.c)
 *     FsRtlReleaseFileForModWrite @ 0x140254F94 (FsRtlReleaseFileForModWrite.c)
 *     MiWriteComplete @ 0x140255170 (MiWriteComplete.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1402559CC (FsRtlAcquireFileForModWriteEx.c)
 *     MiBuildMappedCluster @ 0x1402560D0 (MiBuildMappedCluster.c)
 *     MiReferencePageForModifiedWrite @ 0x1402568EC (MiReferencePageForModifiedWrite.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     MiDereferenceControlAreaPfnList @ 0x140263AA0 (MiDereferenceControlAreaPfnList.c)
 *     IoDiskIoAttributionDereference @ 0x14028A7B4 (IoDiskIoAttributionDereference.c)
 *     MiClearPfnImageVerified @ 0x1402A3214 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x1402B8A04 (MiMarkPfnVerified.c)
 *     IoAsynchronousPageWrite @ 0x1402CB1EC (IoAsynchronousPageWrite.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 *     MiStartingOffset @ 0x14031E410 (MiStartingOffset.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiControlAreaUsingExtents @ 0x140332C50 (MiControlAreaUsingExtents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiDereferenceControlAreaFile @ 0x1403571E4 (MiDereferenceControlAreaFile.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushFileOnlyMdl @ 0x140541130 (MiFlushFileOnlyMdl.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
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
  __int64 v18; // rax
  struct _FILE_OBJECT *v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // edx
  signed __int64 v26; // rbx
  __int64 v27; // rax
  struct _ERESOURCE **v28; // rdi
  unsigned int v29; // edx
  int v30; // r12d
  int v31; // eax
  int v32; // eax
  int v33; // ebx
  __int64 v34; // rax
  unsigned int *v35; // rdx
  unsigned __int8 v36; // bl
  __int64 v38; // rdx
  __int64 v39; // rdx
  int v40; // ecx
  unsigned __int64 v41; // rax
  unsigned int *v42; // rdi
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // r8
  volatile LONG *v46; // rbp
  unsigned __int64 v47; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v51; // eax
  unsigned __int64 v52; // rbx
  __int64 v53; // rax
  char v54; // r15
  __int64 v55; // rbx
  __int64 v56; // rdx
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
  signed __int64 v79; // [rsp+60h] [rbp-58h] BYREF
  __int64 v80; // [rsp+68h] [rbp-50h]
  __int64 v81; // [rsp+70h] [rbp-48h] BYREF
  __int64 v82; // [rsp+78h] [rbp-40h]
  unsigned int v83; // [rsp+C8h] [rbp+10h]
  int v84; // [rsp+C8h] [rbp+10h]
  __int64 v85; // [rsp+D0h] [rbp+18h]
  __int64 v86; // [rsp+D8h] [rbp+20h] BYREF

  v85 = a3;
  v86 = 0LL;
  v3 = a3;
  v81 = 0LL;
  v4 = a2;
  v79 = 0LL;
  if ( (unsigned int)a2 >= 0x10 )
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
    v46 = (volatile LONG *)(a1 + 996);
    v47 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 996));
    if ( *(_BYTE *)(a1 + 1005) )
    {
      *(_BYTE *)(a1 + 1005) = 0;
      *(_BYTE *)(a1 + 1003) = 0;
      v7 = 1;
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
          v51 = ~(unsigned __int16)a2;
          v61 = (v51 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v51 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v61 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v47);
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
    v11 = (unsigned __int8)MiLockPageInline(v10, a2, a3);
    if ( v9 != *(_QWORD *)(a1 + 8 * v80 + 3472) )
      goto LABEL_39;
    v12 = *(_QWORD *)(v10 + 16);
    if ( qword_140C4DF40 && (v12 & 0x10) == 0 )
      v12 &= ~qword_140C4DF40;
    v13 = v12 >> 16;
    v14 = *(_QWORD *)v13;
    v15 = *(_DWORD *)(*(_QWORD *)v13 + 56LL);
    if ( (v15 & 0x20) != 0 )
    {
      MiUnlinkPageFromList(v10, 0);
      v86 = MI_READ_PTE_LOCK_FREE(v10 + 16);
      v52 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(&v86) >> 5;
      if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) == 3 )
      {
        MiClearPfnImageVerified(v10);
        if ( (MiFlags & 0x10000) != 0 && (v52 & 2) != 0 && (*(_DWORD *)(v14 + 92) & 0xC0000) != 0 )
          MiMarkPfnVerified(v10);
      }
      v53 = MiSwizzleInvalidPte(32 * (v52 & 0x1F));
      v84 = 0;
      v54 = v53;
      v86 = v53;
      v55 = v53;
      if ( !(unsigned int)MiPteInShadowRange(v10 + 16, v56) )
        goto LABEL_78;
      if ( (unsigned int)MiPteHasShadow(v58, v57, v59, v60) )
      {
        v84 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v61 = (v54 & 1) == 0;
          goto LABEL_76;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v61 = (v54 & 1) == 0;
LABEL_76:
        if ( !v61 )
          v55 |= 0x8000000000000000uLL;
      }
LABEL_78:
      *(_QWORD *)(v10 + 16) = v55;
      if ( v84 )
        MiWritePteShadow(v10 + 16, v55);
      MiDereferenceControlAreaPfnList(v14, 0LL, v59, 3LL);
      v38 = 8LL;
      goto LABEL_38;
    }
    if ( (v15 & 8) == 0 )
      break;
LABEL_37:
    MiUnlinkPageFromList(v10, 0);
    v38 = 16LL;
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
          a2 = -1LL << ((unsigned __int8)v11 + 1);
          v64 = v63->SchedulerAssist;
          v65 = ~(unsigned __int16)a2;
          v61 = (v65 & v64[5]) == 0;
          a3 = (unsigned int)v65 & v64[5];
          v64[5] = a3;
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
  v22 = MiBuildMappedCluster(v10, v3 + 208, v21);
  *(_QWORD *)(v3 + 200) = v22;
  v23 = v22;
  *(_QWORD *)(v3 + 160) = v14;
  v80 = v22;
  v24 = MiStartingOffset(
          v13,
          *(_QWORD *)(48LL * *(_QWORD *)(v22 + 48) - 0x58000000000LL + 8) | 0x8000000000000000uLL,
          0xFFFFFFFFLL);
  v25 = *(_DWORD *)(v3 + 40);
  v26 = v24;
  v79 = v24;
  LODWORD(v24) = *(_DWORD *)(v23 + 40);
  *(_DWORD *)(v3 + 136) = v24;
  v83 = (unsigned int)v24 >> 12;
  *(_DWORD *)(v3 + 140) = ((unsigned int)v24 >> 12) - 1;
  v27 = *(unsigned int *)(v23 + 40);
  v28 = (struct _ERESOURCE **)(v3 + 168);
  *(_QWORD *)(v3 + 168) = 0LL;
  v81 = v26 + v27;
  if ( (v19->DeviceObject->Characteristics & 0x10) != 0 )
    v29 = v25 | 2;
  else
    v29 = v25 & 0xFFFFFFFD;
  *(_DWORD *)(v3 + 40) = v29;
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
  *(_QWORD *)(v85 + 152) = v19;
  if ( (int)FsRtlAcquireFileForModWriteEx(v19, &v81, v28) < 0 )
  {
    v33 = -1073741740;
    MiDereferenceControlAreaFile(v14, v19);
    *v28 = 0LL;
LABEL_49:
    if ( (v33 & 0xC0000000) != 0xC0000000 )
      goto LABEL_34;
LABEL_32:
    v34 = v85;
    *(_QWORD *)(v85 + 24) = 0LL;
    v35 = (unsigned int *)(v85 + 16);
    *(_DWORD *)(v85 + 16) = v33;
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
    FsRtlReleaseFileForModWrite(v19, *v28);
    MiDereferenceControlAreaFile(v14, v19);
    *v28 = 0LL;
    goto LABEL_30;
  }
  if ( v32 == 1 )
    *v28 = (struct _ERESOURCE *)((unsigned __int64)*v28 | 1);
  v39 = 2LL;
  *(_QWORD *)(v85 + 176) = v26;
  v40 = *(_DWORD *)(a1 + 688);
  v41 = *(_QWORD *)(a1 + 7104);
  if ( v40 )
  {
    if ( v41 >= 0x420 )
      v70 = 0;
    else
      v70 = v40 - 1;
    *(_DWORD *)(a1 + 688) = v70;
    v39 = v41 < 0x420 ? 4 : 2;
  }
  else if ( v41 < 0x120 )
  {
    v39 = 4LL;
    *(_DWORD *)(a1 + 688) = v41 < 0xA0 ? 32 : 8;
  }
  __incgsdword(0x2EB4u);
  v42 = (unsigned int *)(v85 + 16);
  __addgsdword(0x2EB0u, v83);
  if ( !(unsigned int)MiControlAreaUsingExtents(v14, v39, v85) )
  {
    v33 = IoAsynchronousPageWrite(
            (_DWORD)v19,
            v80,
            (unsigned int)&v79,
            (unsigned int)MiWriteComplete,
            v45,
            v43,
            0,
            0,
            v17,
            (__int64)v42,
            v45 + 32);
    goto LABEL_49;
  }
  MiFlushFileOnlyMdl(v44, v80, v45, v42);
  v36 = KeGetCurrentIrql();
  __writecr8(1uLL);
  MiWriteComplete(v85, v42, 0);
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
