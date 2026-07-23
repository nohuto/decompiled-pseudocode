/*
 * XREFs of MiDeleteVa @ 0x1403427D0
 * Callers:
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiCountWslesInPageTable @ 0x140202320 (MiCountWslesInPageTable.c)
 *     MiFlushTbListEarly @ 0x1402063F8 (MiFlushTbListEarly.c)
 *     MiLockSetPfnPriority @ 0x14020900C (MiLockSetPfnPriority.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiUnmapFrameBuffer @ 0x14021958C (MiUnmapFrameBuffer.c)
 *     MiCompressTbFlushList @ 0x140220720 (MiCompressTbFlushList.c)
 *     MiCreateDecayPfn @ 0x14022D038 (MiCreateDecayPfn.c)
 *     MiRotatedToFrameBuffer @ 0x14022E898 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiUnlockWsle @ 0x14025DBBC (MiUnlockWsle.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiIsPageTableDeletable @ 0x1403100A0 (MiIsPageTableDeletable.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiEvictPageTableLock @ 0x140317370 (MiEvictPageTableLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiRemoveWsle @ 0x140343D30 (MiRemoveWsle.c)
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
 *     MiTerminateWsleCluster @ 0x140345A70 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDecrementCombinedPte @ 0x140367074 (MiDecrementCombinedPte.c)
 *     MiDeletePhysmemPte @ 0x14037E38C (MiDeletePhysmemPte.c)
 *     MiWriteTopLevelPxe @ 0x14039E05C (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiDeleteVadAwePtes @ 0x14054BD74 (MiDeleteVadAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x14054FB9C (MiDeleteLargeUserPde.c)
 *     MiDecrementCloneBlockReference @ 0x14055A0C8 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v3; // rbx
  __int64 v5; // r9
  unsigned __int64 v7; // r11
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r10
  char v12; // r9
  unsigned __int64 i; // rsi
  __int64 v14; // rcx
  struct _LIST_ENTRY *v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r13
  __int64 v19; // r8
  __int64 v20; // r14
  int v21; // r12d
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  struct _LIST_ENTRY *v26; // rax
  __int64 v27; // rax
  char v28; // r8^7
  unsigned __int64 v29; // rdi
  struct _LIST_ENTRY *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r13
  unsigned __int64 v36; // rbx
  int v37; // r10d
  unsigned __int64 v38; // r9
  __int64 *v39; // r8
  __int64 v40; // rdx
  unsigned __int64 v41; // r11
  unsigned __int64 v42; // r8
  struct _LIST_ENTRY *v43; // rax
  __int64 v44; // rax
  char v45; // r8^7
  __int64 v46; // r12
  unsigned __int64 *v47; // r8
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r8
  struct _LIST_ENTRY *v50; // rax
  __int64 v51; // rax
  __int64 v52; // r8
  char v53; // r9
  unsigned __int64 v54; // rdx
  struct _LIST_ENTRY *v55; // r8
  __int64 v56; // rax
  __int64 v57; // r8
  struct _LIST_ENTRY *v58; // r8
  __int64 v59; // rax
  __int64 v60; // r8
  bool v61; // zf
  char v62; // r9
  unsigned __int64 v63; // r11
  __int64 v64; // rax
  int v65; // r13d
  __int64 v66; // rdi
  unsigned int v67; // eax
  __int64 v68; // rdi
  unsigned __int64 v69; // r12
  unsigned __int64 v70; // rdx
  struct _LIST_ENTRY *v71; // r8
  __int64 v72; // rax
  __int64 v73; // r8
  _BYTE *v74; // r9
  unsigned __int8 WsleContents; // r13
  unsigned __int64 v76; // rdx
  struct _LIST_ENTRY *v77; // r8
  __int64 v78; // rax
  __int64 v79; // r8
  int v80; // eax
  __int64 v81; // r9
  int v82; // r10d
  int v83; // ecx
  __int64 v84; // rcx
  __int64 v85; // rdx
  unsigned __int64 v86; // r8
  unsigned __int64 v87; // r10
  unsigned __int64 v88; // r9
  char v89; // r11
  int v90; // r9d
  unsigned __int64 *v91; // r8
  unsigned __int64 v92; // r10
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // r9
  unsigned __int64 v95; // r8
  struct _LIST_ENTRY *v96; // rax
  __int64 v97; // rax
  __int64 v98; // r8
  __int64 Process; // rcx
  __int64 v100; // r8
  __int64 v101; // rax
  __int64 v102; // r8
  unsigned __int64 *v103; // r12
  char v104; // cl
  int v105; // edx
  char v106; // cl
  unsigned int v107; // r10d
  char v108; // r8
  __int64 v109; // r11
  __int64 v110; // rax
  unsigned __int64 v111; // r9
  __int64 v112; // r8
  __int64 v113; // rax
  unsigned __int64 v114; // rcx
  __int64 v115; // rdx
  unsigned __int64 v116; // rax
  unsigned int v117; // ecx
  __int64 v118; // rax
  unsigned __int64 v119; // rdx
  __int64 v121; // rdx
  __int64 v122; // rdx
  unsigned __int64 v123; // rax
  int v124; // eax
  unsigned __int64 v125; // rdx
  __int64 v126; // r8
  _QWORD *CloneAddress; // rax
  ULONG_PTR v128; // rdx
  __int64 v129; // rdx
  unsigned __int64 v130; // r9
  unsigned __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rdi
  unsigned __int64 v134; // rax
  __int64 *v135; // r15
  unsigned __int64 PteShadow; // rax
  __int64 v137; // r8
  unsigned __int64 *v138; // rdx
  ULONG_PTR v139; // rbx
  ULONG_PTR v140; // r9
  __int64 v141; // [rsp+30h] [rbp-69h]
  int v142; // [rsp+38h] [rbp-61h]
  char v144; // [rsp+40h] [rbp-59h]
  int v145; // [rsp+40h] [rbp-59h]
  __int64 v146; // [rsp+48h] [rbp-51h]
  int v147; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v148; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v149; // [rsp+60h] [rbp-39h] BYREF
  __int64 v150; // [rsp+68h] [rbp-31h]
  ULONG_PTR v151; // [rsp+70h] [rbp-29h] BYREF
  ULONG_PTR v152; // [rsp+78h] [rbp-21h] BYREF
  unsigned __int64 v153; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int64 v154; // [rsp+88h] [rbp-11h] BYREF
  _OWORD v155[2]; // [rsp+90h] [rbp-9h] BYREF

  v3 = *(_QWORD *)a2;
  v5 = a3;
  v7 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v9 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v10 = v3 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = v3;
      v3 = v10;
      if ( (v9 & 0x42) != 0 )
        v3 = v10 | 0x42;
    }
  }
  v151 = v3;
  if ( !v3 )
  {
    if ( !a3 )
    {
      v11 = *(_QWORD *)(a1 + 88);
      v12 = 1;
      if ( v11 > (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
        v11 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      for ( i = a2 + 8; i <= v11; i += 8LL )
      {
        v14 = *(_QWORD *)i;
        if ( i >= 0xFFFFF6FB7DBED000uLL
          && i <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v14 & 1) != 0
          && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
        {
          v15 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v15 )
          {
            v16 = *((_QWORD *)&v15->Flink + ((i >> 3) & 0x1FF));
            v17 = v14 | 0x20;
            if ( (v16 & 0x20) == 0 )
              v17 = *(_QWORD *)i;
            v14 = v17;
            if ( (v16 & 0x42) != 0 )
              v14 = v17 | 0x42;
          }
        }
        if ( v14 )
          break;
        if ( !++v12 )
          break;
      }
      *(_BYTE *)(a1 + 3) = v12 - 1;
    }
    return 0LL;
  }
  v18 = *(_QWORD *)(a1 + 168);
  v19 = *(_QWORD *)(a1 + 24);
  v20 = *(_QWORD *)(a1 + 16);
  v146 = v18;
  v21 = *(_DWORD *)(v18 + 104);
  v141 = v19;
  v22 = (__int64)(a2 << 25) >> 16;
  if ( (v3 & 1) != 0 )
  {
    if ( (int)v5 >= 1 )
    {
      if ( (v3 & 0x80u) != 0LL )
      {
LABEL_37:
        MiDeleteLargeUserPde(a1, a2, (unsigned int)v5);
        return 0LL;
      }
      if ( !(unsigned int)MiIsPageTableDeletable(a1, a2) )
        return 0LL;
      v19 = v141;
      v5 = a3;
    }
    if ( (*(_BYTE *)(v19 + 184) & 7) != 0 )
    {
      MiInsertTbFlushEntry(v20, (__int64)(a2 << 25) >> 16, 1LL, 0);
      if ( (v21 & 0x100) == 0 && v22 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( !(unsigned int)MiEvictPageTableLock(v141, a2, v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400, (int)a3 > 1) )
          return 0LL;
        goto LABEL_279;
      }
      goto LABEL_97;
    }
    if ( (_DWORD)v5 )
      goto LABEL_95;
    if ( (v21 & 0x800) != 0 )
    {
      MiDeleteLargeUserPde(a1, a2, 0LL);
      MiFlushTbListEarly(v20, 0);
      return 0LL;
    }
    if ( (v21 & 0x10) != 0 )
    {
      v23 = MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 32LL), a2, v18 + 112, v5);
      MiInsertTbFlushEntry(v20, (__int64)(a2 << 25) >> 16, v23, 0);
      goto LABEL_279;
    }
    if ( (v21 & 0x60) != 0 )
    {
      MiDeletePhysmemPte(a1, a2);
      goto LABEL_279;
    }
    if ( (v21 & 8) != 0 )
    {
      if ( MiRotatedToFrameBuffer(a2) )
      {
        v154 = 0LL;
        MiUnmapFrameBuffer((unsigned __int64 *)a2, 3, 0, &v154);
        MiInsertTbFlushEntry(v20, (__int64)(a2 << 25) >> 16, 1LL, 0);
        goto LABEL_279;
      }
      v19 = v141;
    }
    if ( (v21 & 0x90) != 0x80 )
    {
LABEL_95:
      if ( (v21 & 0x100) != 0 )
      {
        MiInsertTbFlushEntry(v20, (__int64)(a2 << 25) >> 16, 1LL, 0);
LABEL_97:
        v35 = v141;
LABEL_98:
        v36 = v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v151 = v36;
        if ( a3 == 3 && (*(_BYTE *)(v35 + 184) & 7) != 0 )
        {
          MiWriteTopLevelPxe(a2, v36);
        }
        else if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
        {
          *(_QWORD *)a2 = v36;
          MiWritePteShadow(a2, v36);
        }
        else
        {
          *(_QWORD *)a2 = v36;
        }
        goto LABEL_279;
      }
      v37 = 0;
      v150 = 0LL;
      if ( a3 )
        goto LABEL_155;
      v38 = 0xFFFFF68000000000uLL;
      v39 = (__int64 *)(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v40 = *v39;
      v41 = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)v39 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v39 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v40 & 1) != 0
        && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
      {
        v43 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v43 )
        {
          v44 = *((_QWORD *)&v43->Flink + ((v42 >> 3) & 0x1FF));
          v45 = HIBYTE(v40);
          if ( (v44 & 0x20) == 0 )
            v45 = HIBYTE(v40);
          HIBYTE(v40) = v45;
          if ( (v44 & 0x42) != 0 )
            HIBYTE(v40) = v45;
        }
      }
      if ( (HIBYTE(v40) & 0xF) == 8 )
      {
LABEL_155:
        v63 = 0xFFFFFA8000000000uLL;
      }
      else
      {
        v46 = v18 + 120;
        v47 = (unsigned __int64 *)(v38 + ((v22 >> 9) & 0x7FFFFFFFF8LL));
        v48 = *v47;
        if ( (unsigned __int64)v47 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v47 <= v41
          && (unsigned int)MiPteHasShadow()
          && (v48 & 1) != 0
          && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
        {
          v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v50 )
          {
            v51 = *((_QWORD *)&v50->Flink + ((v49 >> 3) & 0x1FF));
            v52 = v48 | 0x20;
            if ( (v51 & 0x20) == 0 )
              v52 = v48;
            v48 = v52;
            if ( (v51 & 0x42) != 0 )
              v48 = v52 | 0x42;
          }
        }
        v53 = HIBYTE(v48) & 0xF | (16 * ((v48 >> 60) & 7));
        v54 = *(_QWORD *)a2;
        v144 = v53;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL
          && a2 <= v41
          && (unsigned int)MiPteHasShadow()
          && (v54 & 1) != 0
          && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
        {
          v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v55 )
          {
            v56 = *((_QWORD *)&v55->Flink + ((a2 >> 3) & 0x1FF));
            v57 = v54 | 0x20;
            if ( (v56 & 0x20) == 0 )
              v57 = v54;
            v54 = v57;
            if ( (v56 & 0x42) != 0 )
              v54 = v57 | 0x42;
          }
        }
        v148 = v54;
        if ( (unsigned __int64)&v148 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v148 <= v41
          && (unsigned int)MiPteHasShadow()
          && (v54 & 1) != 0
          && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
        {
          v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v58 )
          {
            v59 = *((_QWORD *)&v58->Flink + (((unsigned __int64)&v148 >> 3) & 0x1FF));
            v60 = v54 | 0x20;
            if ( (v59 & 0x20) == 0 )
              v60 = v54;
            v54 = v60;
            if ( (v59 & 0x42) != 0 )
              v54 = v60 | 0x42;
          }
        }
        v61 = (unsigned int)MI_PFN_IS_PROTO(48 * ((v54 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) == 0;
        v65 = v37;
        v64 = *(_QWORD *)(v46 + 8);
        LOBYTE(v65) = v61;
        if ( !v64 )
          goto LABEL_154;
        v66 = *(_QWORD *)(v46 + 16);
        if ( a2 == v64 + 8 * v66 && v62 == *(_BYTE *)(v46 + 28) && v65 == (*(_DWORD *)(v46 + 24) & 1) )
        {
          *(_QWORD *)(v46 + 16) = v66 + 1;
          v154 = *(_QWORD *)a2;
          goto LABEL_279;
        }
        if ( (*(_DWORD *)(v46 + 24) & 2) == 0 )
        {
          MiTerminateWsleCluster(v46);
          v62 = v144;
LABEL_154:
          *(_QWORD *)v46 = v141;
          v67 = *(_DWORD *)(v46 + 24) & 0xFFFFFFFE;
          *(_QWORD *)(v46 + 8) = a2;
          *(_BYTE *)(v46 + 28) = v62;
          *(_DWORD *)(v46 + 24) = v65 | v67;
          *(_QWORD *)(v46 + 16) = 1LL;
          v154 = *(_QWORD *)a2;
LABEL_279:
          v119 = qword_140C4DFD0;
          if ( (*(_BYTE *)(v20 + 4) & 2) == 0
            && *(_DWORD *)v20 == 1
            && KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5] )
          {
            v119 = -1LL;
          }
          if ( (*(_DWORD *)(v20 + 12) >= *(_DWORD *)(v20 + 8) || *(_BYTE *)(v20 + 5) || *(_QWORD *)(v20 + 16) > v119)
            && v119 >= 0x400
            && !*(_BYTE *)(v20 + 5) )
          {
            MiFlushTbList(v20);
          }
          v18 = v146;
LABEL_290:
          if ( !*(_QWORD *)v18 )
            *(_QWORD *)v18 = a2;
          *(_QWORD *)(v18 + 8) = a2;
          return 0LL;
        }
      }
      v68 = 1LL;
      v142 = 1;
      v69 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v70 = *(_QWORD *)v69;
      if ( v69 >= 0xFFFFF6FB7DBED000uLL
        && v69 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v70 & 1) != 0
        && ((v70 & 0x20) == 0 || (v70 & 0x42) == 0) )
      {
        v71 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v71 )
        {
          v72 = *((_QWORD *)&v71->Flink + ((v69 >> 3) & 0x1FF));
          v73 = v70 | 0x20;
          if ( (v72 & 0x20) == 0 )
            v73 = v70;
          v70 = v73;
          if ( (v72 & 0x42) != 0 )
            v70 = v73 | 0x42;
        }
      }
      v74 = (_BYTE *)(v63 + 48 * ((v70 >> 12) & 0xFFFFFFFFFLL));
      if ( v22 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        WsleContents = (*v74 >> 1) & 7;
        v145 = v37;
        if ( !(unsigned int)MiEvictPageTableLock(v141, ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, ZeroPte, 0) )
          return 0LL;
        goto LABEL_209;
      }
      v76 = *(_QWORD *)v69;
      v145 = 1;
      if ( v69 >= 0xFFFFF6FB7DBED000uLL
        && v69 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v76 & 1) != 0
        && ((v76 & 0x20) == 0 || (v76 & 0x42) == 0) )
      {
        v77 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v77 )
        {
          v78 = *((_QWORD *)&v77->Flink + ((v69 >> 3) & 0x1FF));
          v79 = v76 | 0x20;
          if ( (v78 & 0x20) == 0 )
            v79 = v76;
          v76 = v79;
          if ( (v78 & 0x42) != 0 )
            v76 = v79 | 0x42;
        }
      }
      WsleContents = HIBYTE(v76) & 0xF | (16 * ((v76 >> 60) & 7));
      v80 = MI_PFN_IS_PROTO(v74);
      v83 = v82;
      LOBYTE(v83) = v80 == 0;
      v142 = v83;
      if ( (WsleContents & 0xF) == 8 )
      {
        MiUnlockWsle(v141, (__int64)(a2 << 25) >> 16, v81);
        WsleContents = MiGetWsleContents(v84, (__int64)(a2 << 25) >> 16);
      }
      v85 = ZeroPte;
      v86 = *(_QWORD *)v69;
      v87 = 0xFFFFF6FB7DBED000uLL;
      v88 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v69 >= 0xFFFFF6FB7DBED000uLL && v69 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
        LOBYTE(v86) = v86 | 0x20;
      if ( (MiFlags & 0x800) != 0 )
      {
        LOBYTE(v86) = 32;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v86 & 0x20) != 0 )
      {
        if ( v69 >= v87 && v69 <= v88 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) && (v85 & 1) != 0 )
              v85 |= 0x8000000000000000uLL;
            *(_QWORD *)v69 = v85;
            MiWritePteShadow(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v85);
            goto LABEL_209;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v85 & 1) != 0 )
          {
            v85 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v69 = v85;
      }
      else
      {
        v89 = _InterlockedExchange64((volatile __int64 *)v69, v85);
        if ( v69 >= v87 && v69 <= v88 )
          MiWritePteShadow(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v85);
        if ( (v89 & 0x20) == 0 )
        {
LABEL_210:
          v90 = WsleContents;
          v35 = v141;
          MiRemoveWsle(v141, (__int64)(a2 << 25) >> 16, 1, v90, 10, v142);
          if ( v145 )
          {
            v91 = (unsigned __int64 *)(((v22 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
            v92 = 0xFFFFF6FB7DBED000uLL;
            v93 = *v91;
            v94 = 0xFFFFF6FB7DBED7F8uLL;
            if ( (unsigned __int64)v91 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v91 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow()
              && (v93 & 1) != 0
              && ((v93 & 0x20) == 0 || (v93 & 0x42) == 0) )
            {
              v96 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v96 )
              {
                v97 = *((_QWORD *)&v96->Flink + ((v95 >> 3) & 0x1FF));
                v98 = v93 | 0x20;
                if ( (v97 & 0x20) == 0 )
                  v98 = v93;
                v93 = v98;
                if ( (v97 & 0x42) != 0 )
                  v93 = v98 | 0x42;
              }
            }
            v149 = v93;
            Process = (__int64)&v149;
            if ( (unsigned __int64)&v149 >= v92 )
            {
              Process = (__int64)&v149;
              if ( (unsigned __int64)&v149 <= v94
                && (unsigned int)MiPteHasShadow()
                && (v93 & 1) != 0
                && ((v93 & 0x20) == 0 || (v93 & 0x42) == 0) )
              {
                Process = (__int64)KeGetCurrentThread()->ApcState.Process;
                v100 = *(_QWORD *)(Process + 1928);
                if ( v100 )
                {
                  v101 = *(_QWORD *)(v100 + 8 * (((unsigned __int64)&v149 >> 3) & 0x1FF));
                  v102 = v93 | 0x20;
                  Process = (unsigned __int8)v101;
                  LOBYTE(Process) = v101 & 0x20;
                  if ( (v101 & 0x20) == 0 )
                    v102 = v93;
                  v93 = v102;
                  if ( (v101 & 0x42) != 0 )
                    v93 = v102 | 0x42;
                }
              }
            }
            v103 = (unsigned __int64 *)(48 * ((v93 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
            if ( ((*(_DWORD *)v103 >> 4) & 0x3FF) == 0 )
            {
              MiCountWslesInPageTable(Process, (__int64)(a2 << 25) >> 16, v155);
              v104 = 8;
              while ( 1 )
              {
                v105 = *((_DWORD *)v155 + (unsigned __int8)--v104);
                if ( v105 )
                  break;
                if ( !v104 )
                  goto LABEL_239;
              }
              *v103 = *v103 & 0xFFFFFFFFFFFE000FuLL | (16 * (v105 & 0x3FF | ((unsigned __int64)(v104 & 7) << 10)));
            }
          }
LABEL_239:
          if ( (_DWORD)v150 != 1 )
            goto LABEL_98;
          if ( *(_DWORD *)v20 != 1 )
          {
            v106 = *(_BYTE *)(v20 + 4);
            if ( (v106 & 8) == 0 && v22 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL )
              *(_BYTE *)(v20 + 4) = v106 | 8;
          }
          v107 = *(_DWORD *)(v20 + 12);
          v108 = *(_BYTE *)(v20 + 4);
          if ( v107 )
          {
            if ( (v108 & 4) == 0 )
            {
              v109 = v20 + 8LL * (v107 - 1);
              v110 = *(_QWORD *)(v109 + 24);
              if ( (v110 & 0xC00) == 0 )
              {
                v111 = *(_QWORD *)(v109 + 24) & 0x3FFLL;
                if ( (v110 & 0xFFFFFFFFFFFFF000uLL) + ((v111 + 1) << 12) == v22 && v111 + 1 >= v111 && v111 + 1 <= 0x3FF )
                {
                  ++*(_QWORD *)(v20 + 16);
                  *(_QWORD *)(v109 + 24) = v110 ^ ((unsigned __int16)v110 ^ (unsigned __int16)(v110 + 1)) & 0x3FF;
                  goto LABEL_98;
                }
              }
            }
            if ( (v108 & 4) == 0 )
            {
              v112 = v20 + 8LL * (v107 - 1);
              v113 = *(_QWORD *)(v112 + 24);
              if ( (v113 & 0xC00) == 0 && (v113 & 0xFFFFFFFFFFFFF000uLL) == v22 + 4096 )
              {
                v114 = *(_QWORD *)(v112 + 24) & 0x3FFLL;
                if ( v114 + 1 >= v114 && v114 + 1 <= 0x3FF )
                {
                  ++*(_QWORD *)(v20 + 16);
                  *(_QWORD *)(v112 + 24) = (v113 - 4096) ^ ((unsigned __int16)(v113 - 4096) ^ (unsigned __int16)(v113 - 4096 + 1)) & 0x3FF;
                  goto LABEL_98;
                }
              }
            }
          }
          if ( v107 < *(_DWORD *)(v20 + 8) )
          {
            while ( 1 )
            {
              v115 = 1024LL;
              if ( (unsigned __int64)(v68 - 1) <= 0x3FF )
                v115 = v68;
              v68 -= v115;
              v116 = v22 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v115 - 1) & 0x3FF;
              v22 += v115 << 12;
              *(_QWORD *)(v20 + 8LL * (unsigned int)(*(_DWORD *)(v20 + 12))++ + 24) = v116;
              v117 = *(_DWORD *)(v20 + 12);
              *(_QWORD *)(v20 + 16) += v115;
              if ( v117 == *(_DWORD *)(v20 + 8) && (*(_BYTE *)(v20 + 4) & 4) == 0 )
              {
                qsort((void *)(v20 + 24), v117, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
                MiCompressTbFlushList(v20);
                v118 = *(unsigned int *)(v20 + 12);
                if ( (_DWORD)v118 == *(_DWORD *)(v20 + 8) )
                  break;
              }
              if ( !v68 )
                goto LABEL_98;
            }
            if ( v68 )
            {
              *(_BYTE *)(v20 + 5) = 1;
              *(_QWORD *)(v20 + 16) = v118;
            }
          }
          else
          {
            *(_BYTE *)(v20 + 5) = 1;
          }
          goto LABEL_98;
        }
      }
LABEL_209:
      LODWORD(v150) = 1;
      goto LABEL_210;
    }
    if ( (v21 & 2) != 0 && (*(_BYTE *)(v19 + 187) & 1) == 0 && dword_140C4E868 )
    {
      if ( v22 < 0xFFFFF68000000000uLL || v22 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v24 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v25 = *(_QWORD *)v24;
        if ( v24 >= 0xFFFFF6FB7DBED000uLL
          && v24 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v25 & 1) != 0
          && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
        {
          v26 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v26 )
          {
            v27 = *((_QWORD *)&v26->Flink + ((v24 >> 3) & 0x1FF));
            v28 = HIBYTE(*(_QWORD *)v24);
            if ( (v27 & 0x20) == 0 )
              v28 = HIBYTE(v25);
            HIBYTE(v25) = v28;
            if ( (v27 & 0x42) != 0 )
              HIBYTE(v25) = v28;
          }
        }
        if ( (HIBYTE(v25) & 0xF) == 7 )
          goto LABEL_74;
        v19 = v141;
      }
      if ( (*(_BYTE *)a2 & 0x20) != 0 )
        MiLogPageAccess(v19, a2);
    }
LABEL_74:
    v29 = v3;
    if ( (unsigned int)MiPteInShadowRange(&v151)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      v30 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v30 )
      {
        v29 = v3 | 0x20;
        v31 = *((_QWORD *)&v30->Flink + (((unsigned __int64)&v151 >> 3) & 0x1FF));
        if ( (v31 & 0x20) == 0 )
          v29 = v3;
        if ( (v31 & 0x42) != 0 )
          v29 |= 0x42uLL;
      }
    }
    v32 = 48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
      if ( (v21 & 1) != 0 && (unsigned int)MiGetPfnPriority(v32) - 3 <= 2 )
        MiLockSetPfnPriority(v33, 2);
      if ( (v21 & 4) != 0
        && !*(_QWORD *)(v18 + 88)
        && (v3 & 0x42) == 0
        && (unsigned int)MI_PFN_IS_PROTO(v32)
        && (*(_BYTE *)(v32 + 34) & 0x10) == 0
        && (unsigned int)MiGetPfnPriority(v34) < 5 )
      {
        *(_QWORD *)(v18 + 88) = MiCreateDecayPfn();
      }
    }
    goto LABEL_95;
  }
  if ( (v3 & 0x400) == 0 )
  {
    if ( (v3 & 0x800) != 0 )
    {
      if ( (v21 & 0x800) != 0 )
        goto LABEL_37;
      if ( (v21 & 0x10) != 0 && (v3 & 0x3E0) == 0x300 )
        MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 32LL), a2, v18 + 112, v5);
      goto LABEL_290;
    }
    if ( (v3 & 0x3E0) == 0 )
      KeBugCheckEx(0x1Au, 0x41792uLL, a2, v3, 0LL);
    v132 = *(unsigned __int16 *)(v19 + 174);
    v152 = v3;
    v133 = *(_QWORD *)(qword_140C4E688 + 8 * v132);
    if ( (v3 & 4) != 0 || (v3 & 2) != 0 )
      v134 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v152);
    else
      v134 = 0LL;
    v152 = v134;
    if ( v134 )
      MiReleasePageFileInfo(v133, v134, 0);
    if ( (*(_BYTE *)(v141 + 184) & 7) != 0 )
      goto LABEL_331;
    if ( (v21 & 0x80u) != 0 )
    {
      if ( qword_140C4DF80 && (v3 & 0x10) == 0 )
        LOWORD(v3) = ~(_WORD)qword_140C4DF80 & v3;
      if ( (v3 & 0x400) != 0 || (v3 & 0x800) != 0 || (v3 & 4) != 0 )
LABEL_331:
        ++*(_QWORD *)(*(_QWORD *)(v18 + 16) + 24LL);
    }
    v129 = ZeroPte;
    v130 = 0xFFFFF6FB7DBED000uLL;
    if ( a2 < 0xFFFFF6FB7DBED000uLL )
      goto LABEL_343;
    v131 = 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_334;
  }
  v121 = v3;
  if ( qword_140C4DF80 && (v3 & 0x10) == 0 )
    v121 = v3 & ~qword_140C4DF80;
  v122 = v121 >> 16;
  v123 = v3;
  if ( qword_140C4DF80 && (v3 & 0x10) == 0 )
    v123 = v3 & ~qword_140C4DF80;
  if ( HIDWORD(v123) != 0xFFFFFFFF && (v3 & 0x800) != 0 )
  {
    v124 = MiDecrementCombinedPte(v19, v122);
LABEL_308:
    if ( v124 == 3 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v18 + 16) + 8LL);
    }
    else if ( v124 == 5 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL);
    }
    v7 = 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_313;
  }
  if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12] )
  {
    if ( !MiIsPrototypePteVadLookup(v3) )
    {
      CloneAddress = MiLocateCloneAddress(v126, v125);
      if ( CloneAddress )
      {
        v124 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v128);
        goto LABEL_308;
      }
    }
  }
LABEL_313:
  v129 = ZeroPte;
  v130 = 0xFFFFF6FB7DBED000uLL;
  if ( a2 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_343;
  v131 = v7;
LABEL_334:
  if ( a2 <= v131 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C4E048) && (v129 & 1) != 0 )
        v129 |= 0x8000000000000000uLL;
      *(_QWORD *)a2 = v129;
      MiWritePteShadow(a2, v129);
      v130 = 0xFFFFF6FB7DBED000uLL;
      goto LABEL_344;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v129 & 1) != 0 )
      v129 |= 0x8000000000000000uLL;
  }
LABEL_343:
  *(_QWORD *)a2 = v129;
LABEL_344:
  if ( (v21 & 0x80u) != 0 && (a2 < v130 || a2 > 0xFFFFF6FB7DBEDFFFuLL) )
  {
    v135 = (__int64 *)(((v22 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    PteShadow = *v135;
    v137 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v135 >= v130 && (unsigned __int64)v135 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow((unsigned __int64)v135, *v135);
      v137 = 0xFFFFF6FB7DBED7F8uLL;
    }
    v153 = PteShadow;
    v138 = &v153;
    if ( (unsigned __int64)&v153 >= v130 )
    {
      v138 = &v153;
      if ( (unsigned __int64)&v153 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)&v153, PteShadow);
    }
    v139 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v140 = HIWORD(*(_DWORD *)(v139 + 16)) & 0x3FF;
    if ( (*(_DWORD *)(v139 + 16) & 0x3FF0000) == 0 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v139, v140, 1uLL);
    v147 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v139 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v147, (__int64)v138, v137, v140);
      while ( *(__int64 *)(v139 + 24) < 0 );
    }
    *(_QWORD *)(v139 + 16) ^= ((unsigned int)*(_QWORD *)(v139 + 16) ^ (((unsigned int)(*(_QWORD *)(v139 + 16) >> 16) - 1) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v139 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
