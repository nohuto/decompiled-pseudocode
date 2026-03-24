/*
 * XREFs of MiDeleteVa @ 0x140337A80
 * Callers:
 *     MiDeletePagablePteRange @ 0x140337360 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     MiLocateCloneAddress @ 0x14023EF08 (MiLocateCloneAddress.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiUnlockWsle @ 0x14026FC1C (MiUnlockWsle.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiCountWslesInPageTable @ 0x140285180 (MiCountWslesInPageTable.c)
 *     MiFlushTbListEarly @ 0x140289258 (MiFlushTbListEarly.c)
 *     MiLockSetPfnPriority @ 0x14028BE6C (MiLockSetPfnPriority.c)
 *     MiIsPrototypePteVadLookup @ 0x14028D4D0 (MiIsPrototypePteVadLookup.c)
 *     MiUnmapFrameBuffer @ 0x140299C2C (MiUnmapFrameBuffer.c)
 *     MiCompressTbFlushList @ 0x1402A32E0 (MiCompressTbFlushList.c)
 *     MiCreateDecayPfn @ 0x1402AECD8 (MiCreateDecayPfn.c)
 *     MiRotatedToFrameBuffer @ 0x1402B0538 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiIsPageTableDeletable @ 0x140305350 (MiIsPageTableDeletable.c)
 *     MiReadPteShadow @ 0x140305A30 (MiReadPteShadow.c)
 *     MiEvictPageTableLock @ 0x14030C620 (MiEvictPageTableLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiRemoveWsle @ 0x140338FE0 (MiRemoveWsle.c)
 *     MiLogPageAccess @ 0x14033A650 (MiLogPageAccess.c)
 *     MiTerminateWsleCluster @ 0x14033AD20 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiDecrementCombinedPte @ 0x140366EC4 (MiDecrementCombinedPte.c)
 *     MiDeletePhysmemPte @ 0x14037E83C (MiDeletePhysmemPte.c)
 *     MiWriteTopLevelPxe @ 0x14039DF0C (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     qsort @ 0x1403D2AC0 (qsort.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiDeleteVadAwePtes @ 0x14054BB34 (MiDeleteVadAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x14054F95C (MiDeleteLargeUserPde.c)
 *     MiDecrementCloneBlockReference @ 0x140559E88 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v3; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v8; // r11
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r10
  char v13; // r9
  unsigned __int64 i; // rsi
  __int64 v15; // rcx
  struct _LIST_ENTRY *v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r13
  __int64 v20; // r8
  __int64 v21; // r14
  int v22; // r12d
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  char v29; // r8^7
  unsigned __int64 v30; // rdi
  struct _LIST_ENTRY *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r13
  unsigned __int64 v39; // rbx
  int v40; // r10d
  unsigned __int64 v41; // r9
  __int64 *v42; // r8
  __int64 v43; // rdx
  unsigned __int64 v44; // r11
  unsigned __int64 v45; // r8
  struct _LIST_ENTRY *v46; // rax
  __int64 v47; // rax
  char v48; // r8^7
  __int64 v49; // r12
  unsigned __int64 *v50; // r8
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r8
  struct _LIST_ENTRY *v53; // rax
  __int64 v54; // rax
  __int64 v55; // r8
  char v56; // r9
  unsigned __int64 v57; // rdx
  struct _LIST_ENTRY *v58; // r8
  __int64 v59; // rax
  __int64 v60; // r8
  struct _LIST_ENTRY *v61; // r8
  __int64 v62; // rax
  __int64 v63; // r8
  bool v64; // zf
  char v65; // r9
  unsigned __int64 v66; // r11
  __int64 v67; // rax
  int v68; // r13d
  __int64 v69; // rdi
  unsigned int v70; // eax
  __int64 v71; // rdi
  unsigned __int64 v72; // r12
  unsigned __int64 v73; // rdx
  struct _LIST_ENTRY *v74; // r8
  __int64 v75; // rax
  __int64 v76; // r8
  _BYTE *v77; // r9
  unsigned __int8 WsleContents; // r13
  unsigned __int64 v79; // rdx
  struct _LIST_ENTRY *v80; // r8
  __int64 v81; // rax
  __int64 v82; // r8
  int v83; // eax
  __int64 v84; // r9
  int v85; // r10d
  int v86; // ecx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // r8
  unsigned __int64 v90; // r10
  unsigned __int64 v91; // r9
  char v92; // r11
  __int64 v93; // r8
  int v94; // r9d
  unsigned __int64 *v95; // r8
  unsigned __int64 v96; // r10
  unsigned __int64 v97; // rdx
  unsigned __int64 v98; // r9
  unsigned __int64 v99; // r8
  struct _LIST_ENTRY *v100; // rax
  __int64 v101; // rax
  __int64 v102; // r8
  __int64 Process; // rcx
  __int64 v104; // r8
  __int64 v105; // rax
  __int64 v106; // r8
  unsigned __int64 *v107; // r12
  char v108; // cl
  int v109; // edx
  char v110; // cl
  unsigned int v111; // r10d
  char v112; // r8
  __int64 v113; // r11
  __int64 v114; // rax
  unsigned __int64 v115; // r9
  __int64 v116; // r8
  __int64 v117; // rax
  unsigned __int64 v118; // rcx
  __int64 v119; // rdx
  unsigned __int64 v120; // rax
  unsigned int v121; // ecx
  __int64 v122; // rax
  __int64 v123; // r8
  unsigned __int64 v124; // rdx
  __int64 v126; // rdx
  __int64 v127; // rdx
  unsigned __int64 v128; // rax
  int v129; // eax
  unsigned __int64 v130; // rdx
  __int64 v131; // r8
  _QWORD *CloneAddress; // rax
  ULONG_PTR v133; // rdx
  __int64 v134; // rdx
  unsigned __int64 v135; // r9
  unsigned __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rdi
  unsigned __int64 v139; // rax
  __int64 v140; // r8
  __int64 *v141; // r15
  unsigned __int64 PteShadow; // rax
  __int64 v143; // r8
  unsigned __int64 *v144; // rdx
  ULONG_PTR v145; // rbx
  ULONG_PTR v146; // r9
  __int64 v147; // [rsp+30h] [rbp-69h]
  int v148; // [rsp+38h] [rbp-61h]
  char v150; // [rsp+40h] [rbp-59h]
  int v151; // [rsp+40h] [rbp-59h]
  __int64 v152; // [rsp+48h] [rbp-51h]
  int v153; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v154; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v155; // [rsp+60h] [rbp-39h] BYREF
  __int64 v156; // [rsp+68h] [rbp-31h]
  ULONG_PTR v157; // [rsp+70h] [rbp-29h] BYREF
  ULONG_PTR v158; // [rsp+78h] [rbp-21h] BYREF
  unsigned __int64 v159; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int64 v160; // [rsp+88h] [rbp-11h] BYREF
  _OWORD v161[2]; // [rsp+90h] [rbp-9h] BYREF

  v3 = *(_QWORD *)a2;
  v5 = 0xFFFFF6FB7DBED000uLL;
  v6 = a3;
  v8 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v3 & 1) != 0
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v10 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
        v11 = v3 | 0x20;
        if ( (v10 & 0x20) == 0 )
          v11 = v3;
        v3 = v11;
        if ( (v10 & 0x42) != 0 )
          v3 = v11 | 0x42;
      }
    }
    v5 = 0xFFFFF6FB7DBED000uLL;
  }
  v157 = v3;
  if ( !v3 )
  {
    if ( !a3 )
    {
      v12 = *(_QWORD *)(a1 + 88);
      v13 = 1;
      if ( v12 > (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
        v12 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      for ( i = a2 + 8; i <= v12; i += 8LL )
      {
        v15 = *(_QWORD *)i;
        if ( i >= 0xFFFFF6FB7DBED000uLL
          && i <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v15 & 1) != 0
          && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          v16 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v16 )
          {
            v17 = *((_QWORD *)&v16->Flink + ((i >> 3) & 0x1FF));
            v18 = v15 | 0x20;
            if ( (v17 & 0x20) == 0 )
              v18 = *(_QWORD *)i;
            v15 = v18;
            if ( (v17 & 0x42) != 0 )
              v15 = v18 | 0x42;
          }
        }
        if ( v15 )
          break;
        if ( !++v13 )
          break;
      }
      *(_BYTE *)(a1 + 3) = v13 - 1;
    }
    return 0LL;
  }
  v19 = *(_QWORD *)(a1 + 168);
  v20 = *(_QWORD *)(a1 + 24);
  v21 = *(_QWORD *)(a1 + 16);
  v152 = v19;
  v22 = *(_DWORD *)(v19 + 104);
  v147 = v20;
  v23 = (__int64)(a2 << 25) >> 16;
  if ( (v3 & 1) != 0 )
  {
    if ( (int)v6 >= 1 )
    {
      if ( (v3 & 0x80u) != 0LL )
      {
LABEL_38:
        MiDeleteLargeUserPde(a1, a2, (unsigned int)v6);
        return 0LL;
      }
      if ( !(unsigned int)MiIsPageTableDeletable(a1, a2, v20) )
        return 0LL;
      v20 = v147;
      v6 = a3;
    }
    if ( (*(_BYTE *)(v20 + 184) & 7) != 0 )
    {
      MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, 1LL, 0);
      if ( (v22 & 0x100) == 0 && v23 >= 0xFFFFF68000000000uLL && v23 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( !(unsigned int)MiEvictPageTableLock(v147, a2, v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400, (int)a3 > 1) )
          return 0LL;
        goto LABEL_280;
      }
      goto LABEL_98;
    }
    if ( (_DWORD)v6 )
      goto LABEL_96;
    if ( (v22 & 0x800) != 0 )
    {
      MiDeleteLargeUserPde(a1, a2, 0LL);
      MiFlushTbListEarly(v21, 0);
      return 0LL;
    }
    if ( (v22 & 0x10) != 0 )
    {
      v24 = MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 32LL), a2, v19 + 112, v6);
      MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, v24, 0);
      goto LABEL_280;
    }
    if ( (v22 & 0x60) != 0 )
    {
      MiDeletePhysmemPte(a1, a2);
      goto LABEL_280;
    }
    if ( (v22 & 8) != 0 )
    {
      if ( MiRotatedToFrameBuffer(a2) )
      {
        v160 = 0LL;
        MiUnmapFrameBuffer((unsigned __int64 *)a2, 3, 0, &v160);
        MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, 1LL, 0);
        goto LABEL_280;
      }
      v20 = v147;
    }
    if ( (v22 & 0x90) != 0x80 )
    {
LABEL_96:
      if ( (v22 & 0x100) != 0 )
      {
        MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, 1LL, 0);
LABEL_98:
        v38 = v147;
LABEL_99:
        v39 = v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v157 = v39;
        if ( a3 == 3 && (*(_BYTE *)(v38 + 184) & 7) != 0 )
        {
          MiWriteTopLevelPxe(a2, v39);
        }
        else if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
        {
          *(_QWORD *)a2 = v39;
          MiWritePteShadow(a2, v39, v123);
        }
        else
        {
          *(_QWORD *)a2 = v39;
        }
        goto LABEL_280;
      }
      v40 = 0;
      v156 = 0LL;
      if ( a3 )
        goto LABEL_156;
      v41 = 0xFFFFF68000000000uLL;
      v42 = (__int64 *)(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v43 = *v42;
      v44 = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)v42 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v42 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v43 & 1) != 0
        && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
      {
        v46 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v46 )
        {
          v47 = *((_QWORD *)&v46->Flink + ((v45 >> 3) & 0x1FF));
          v48 = HIBYTE(v43);
          if ( (v47 & 0x20) == 0 )
            v48 = HIBYTE(v43);
          HIBYTE(v43) = v48;
          if ( (v47 & 0x42) != 0 )
            HIBYTE(v43) = v48;
        }
      }
      if ( (HIBYTE(v43) & 0xF) == 8 )
      {
LABEL_156:
        v66 = 0xFFFFFA8000000000uLL;
      }
      else
      {
        v49 = v19 + 120;
        v50 = (unsigned __int64 *)(v41 + ((v23 >> 9) & 0x7FFFFFFFF8LL));
        v51 = *v50;
        if ( (unsigned __int64)v50 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v50 <= v44
          && (unsigned int)MiPteHasShadow()
          && (v51 & 1) != 0
          && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
        {
          v53 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v53 )
          {
            v54 = *((_QWORD *)&v53->Flink + ((v52 >> 3) & 0x1FF));
            v55 = v51 | 0x20;
            if ( (v54 & 0x20) == 0 )
              v55 = v51;
            v51 = v55;
            if ( (v54 & 0x42) != 0 )
              v51 = v55 | 0x42;
          }
        }
        v56 = HIBYTE(v51) & 0xF | (16 * ((v51 >> 60) & 7));
        v57 = *(_QWORD *)a2;
        v150 = v56;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL
          && a2 <= v44
          && (unsigned int)MiPteHasShadow()
          && (v57 & 1) != 0
          && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
        {
          v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v58 )
          {
            v59 = *((_QWORD *)&v58->Flink + ((a2 >> 3) & 0x1FF));
            v60 = v57 | 0x20;
            if ( (v59 & 0x20) == 0 )
              v60 = v57;
            v57 = v60;
            if ( (v59 & 0x42) != 0 )
              v57 = v60 | 0x42;
          }
        }
        v154 = v57;
        if ( (unsigned __int64)&v154 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v154 <= v44
          && (unsigned int)MiPteHasShadow()
          && (v57 & 1) != 0
          && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
        {
          v61 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v61 )
          {
            v62 = *((_QWORD *)&v61->Flink + (((unsigned __int64)&v154 >> 3) & 0x1FF));
            v63 = v57 | 0x20;
            if ( (v62 & 0x20) == 0 )
              v63 = v57;
            v57 = v63;
            if ( (v62 & 0x42) != 0 )
              v57 = v63 | 0x42;
          }
        }
        v64 = (unsigned int)MI_PFN_IS_PROTO(48 * ((v57 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) == 0;
        v68 = v40;
        v67 = *(_QWORD *)(v49 + 8);
        LOBYTE(v68) = v64;
        if ( !v67 )
          goto LABEL_155;
        v69 = *(_QWORD *)(v49 + 16);
        if ( a2 == v67 + 8 * v69 && v65 == *(_BYTE *)(v49 + 28) && v68 == (*(_DWORD *)(v49 + 24) & 1) )
        {
          *(_QWORD *)(v49 + 16) = v69 + 1;
          v160 = *(_QWORD *)a2;
          goto LABEL_280;
        }
        if ( (*(_DWORD *)(v49 + 24) & 2) == 0 )
        {
          MiTerminateWsleCluster(v49);
          v65 = v150;
LABEL_155:
          *(_QWORD *)v49 = v147;
          v70 = *(_DWORD *)(v49 + 24) & 0xFFFFFFFE;
          *(_QWORD *)(v49 + 8) = a2;
          *(_BYTE *)(v49 + 28) = v65;
          *(_DWORD *)(v49 + 24) = v68 | v70;
          *(_QWORD *)(v49 + 16) = 1LL;
          v160 = *(_QWORD *)a2;
LABEL_280:
          v124 = qword_140C4DF90;
          if ( (*(_BYTE *)(v21 + 4) & 2) == 0
            && *(_DWORD *)v21 == 1
            && KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5] )
          {
            v124 = -1LL;
          }
          if ( (*(_DWORD *)(v21 + 12) >= *(_DWORD *)(v21 + 8) || *(_BYTE *)(v21 + 5) || *(_QWORD *)(v21 + 16) > v124)
            && v124 >= 0x400
            && !*(_BYTE *)(v21 + 5) )
          {
            MiFlushTbList(v21);
          }
          v19 = v152;
LABEL_291:
          if ( !*(_QWORD *)v19 )
            *(_QWORD *)v19 = a2;
          *(_QWORD *)(v19 + 8) = a2;
          return 0LL;
        }
      }
      v71 = 1LL;
      v148 = 1;
      v72 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v73 = *(_QWORD *)v72;
      if ( v72 >= 0xFFFFF6FB7DBED000uLL
        && v72 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v73 & 1) != 0
        && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
      {
        v74 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v74 )
        {
          v75 = *((_QWORD *)&v74->Flink + ((v72 >> 3) & 0x1FF));
          v76 = v73 | 0x20;
          if ( (v75 & 0x20) == 0 )
            v76 = v73;
          v73 = v76;
          if ( (v75 & 0x42) != 0 )
            v73 = v76 | 0x42;
        }
      }
      v77 = (_BYTE *)(v66 + 48 * ((v73 >> 12) & 0xFFFFFFFFFLL));
      if ( v23 >= 0xFFFFF68000000000uLL && v23 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        WsleContents = (*v77 >> 1) & 7;
        v151 = v40;
        if ( !(unsigned int)MiEvictPageTableLock(v147, ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, ZeroPte, 0) )
          return 0LL;
        goto LABEL_210;
      }
      v79 = *(_QWORD *)v72;
      v151 = 1;
      if ( v72 >= 0xFFFFF6FB7DBED000uLL
        && v72 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v79 & 1) != 0
        && ((v79 & 0x20) == 0 || (v79 & 0x42) == 0) )
      {
        v80 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v80 )
        {
          v81 = *((_QWORD *)&v80->Flink + ((v72 >> 3) & 0x1FF));
          v82 = v79 | 0x20;
          if ( (v81 & 0x20) == 0 )
            v82 = v79;
          v79 = v82;
          if ( (v81 & 0x42) != 0 )
            v79 = v82 | 0x42;
        }
      }
      WsleContents = HIBYTE(v79) & 0xF | (16 * ((v79 >> 60) & 7));
      v83 = MI_PFN_IS_PROTO(v77);
      v86 = v85;
      LOBYTE(v86) = v83 == 0;
      v148 = v86;
      if ( (WsleContents & 0xF) == 8 )
      {
        MiUnlockWsle(v147, (__int64)(a2 << 25) >> 16, v84);
        WsleContents = MiGetWsleContents(v87, (__int64)(a2 << 25) >> 16);
      }
      v88 = ZeroPte;
      v89 = *(_QWORD *)v72;
      v90 = 0xFFFFF6FB7DBED000uLL;
      v91 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v72 >= 0xFFFFF6FB7DBED000uLL && v72 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
        v89 |= 0x20uLL;
      if ( (MiFlags & 0x800) != 0 )
      {
        v89 = 32LL;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v89 & 0x20) != 0 )
      {
        if ( v72 >= v90 && v72 <= v91 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E008) && (v88 & 1) != 0 )
              v88 |= 0x8000000000000000uLL;
            *(_QWORD *)v72 = v88;
            MiWritePteShadow(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v88, v93);
            goto LABEL_210;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v88 & 1) != 0 )
          {
            v88 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v72 = v88;
      }
      else
      {
        v92 = _InterlockedExchange64((volatile __int64 *)v72, v88);
        if ( v72 >= v90 && v72 <= v91 )
          MiWritePteShadow(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v88, v89);
        if ( (v92 & 0x20) == 0 )
        {
LABEL_211:
          v94 = WsleContents;
          v38 = v147;
          MiRemoveWsle(v147, (__int64)(a2 << 25) >> 16, 1, v94, 10, v148);
          if ( v151 )
          {
            v95 = (unsigned __int64 *)(((v23 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
            v96 = 0xFFFFF6FB7DBED000uLL;
            v97 = *v95;
            v98 = 0xFFFFF6FB7DBED7F8uLL;
            if ( (unsigned __int64)v95 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v95 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow()
              && (v97 & 1) != 0
              && ((v97 & 0x20) == 0 || (v97 & 0x42) == 0) )
            {
              v100 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v100 )
              {
                v101 = *((_QWORD *)&v100->Flink + ((v99 >> 3) & 0x1FF));
                v102 = v97 | 0x20;
                if ( (v101 & 0x20) == 0 )
                  v102 = v97;
                v97 = v102;
                if ( (v101 & 0x42) != 0 )
                  v97 = v102 | 0x42;
              }
            }
            v155 = v97;
            Process = (__int64)&v155;
            if ( (unsigned __int64)&v155 >= v96 )
            {
              Process = (__int64)&v155;
              if ( (unsigned __int64)&v155 <= v98
                && (unsigned int)MiPteHasShadow()
                && (v97 & 1) != 0
                && ((v97 & 0x20) == 0 || (v97 & 0x42) == 0) )
              {
                Process = (__int64)KeGetCurrentThread()->ApcState.Process;
                v104 = *(_QWORD *)(Process + 1928);
                if ( v104 )
                {
                  v105 = *(_QWORD *)(v104 + 8 * (((unsigned __int64)&v155 >> 3) & 0x1FF));
                  v106 = v97 | 0x20;
                  Process = (unsigned __int8)v105;
                  LOBYTE(Process) = v105 & 0x20;
                  if ( (v105 & 0x20) == 0 )
                    v106 = v97;
                  v97 = v106;
                  if ( (v105 & 0x42) != 0 )
                    v97 = v106 | 0x42;
                }
              }
            }
            v107 = (unsigned __int64 *)(48 * ((v97 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
            if ( ((*(_DWORD *)v107 >> 4) & 0x3FF) == 0 )
            {
              MiCountWslesInPageTable(Process, (__int64)(a2 << 25) >> 16, v161);
              v108 = 8;
              while ( 1 )
              {
                v109 = *((_DWORD *)v161 + (unsigned __int8)--v108);
                if ( v109 )
                  break;
                if ( !v108 )
                  goto LABEL_240;
              }
              *v107 = *v107 & 0xFFFFFFFFFFFE000FuLL | (16 * (v109 & 0x3FF | ((unsigned __int64)(v108 & 7) << 10)));
            }
          }
LABEL_240:
          if ( (_DWORD)v156 != 1 )
            goto LABEL_99;
          if ( *(_DWORD *)v21 != 1 )
          {
            v110 = *(_BYTE *)(v21 + 4);
            if ( (v110 & 8) == 0 && v23 >= 0xFFFFF68000000000uLL && v23 <= 0xFFFFF6FFFFFFFFFFuLL )
              *(_BYTE *)(v21 + 4) = v110 | 8;
          }
          v111 = *(_DWORD *)(v21 + 12);
          v112 = *(_BYTE *)(v21 + 4);
          if ( v111 )
          {
            if ( (v112 & 4) == 0 )
            {
              v113 = v21 + 8LL * (v111 - 1);
              v114 = *(_QWORD *)(v113 + 24);
              if ( (v114 & 0xC00) == 0 )
              {
                v115 = *(_QWORD *)(v113 + 24) & 0x3FFLL;
                if ( (v114 & 0xFFFFFFFFFFFFF000uLL) + ((v115 + 1) << 12) == v23 && v115 + 1 >= v115 && v115 + 1 <= 0x3FF )
                {
                  ++*(_QWORD *)(v21 + 16);
                  *(_QWORD *)(v113 + 24) = v114 ^ ((unsigned __int16)v114 ^ (unsigned __int16)(v114 + 1)) & 0x3FF;
                  goto LABEL_99;
                }
              }
            }
            if ( (v112 & 4) == 0 )
            {
              v116 = v21 + 8LL * (v111 - 1);
              v117 = *(_QWORD *)(v116 + 24);
              if ( (v117 & 0xC00) == 0 && (v117 & 0xFFFFFFFFFFFFF000uLL) == v23 + 4096 )
              {
                v118 = *(_QWORD *)(v116 + 24) & 0x3FFLL;
                if ( v118 + 1 >= v118 && v118 + 1 <= 0x3FF )
                {
                  ++*(_QWORD *)(v21 + 16);
                  *(_QWORD *)(v116 + 24) = (v117 - 4096) ^ ((unsigned __int16)(v117 - 4096) ^ (unsigned __int16)(v117 - 4096 + 1)) & 0x3FF;
                  goto LABEL_99;
                }
              }
            }
          }
          if ( v111 < *(_DWORD *)(v21 + 8) )
          {
            while ( 1 )
            {
              v119 = 1024LL;
              if ( (unsigned __int64)(v71 - 1) <= 0x3FF )
                v119 = v71;
              v71 -= v119;
              v120 = v23 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v119 - 1) & 0x3FF;
              v23 += v119 << 12;
              *(_QWORD *)(v21 + 8LL * (unsigned int)(*(_DWORD *)(v21 + 12))++ + 24) = v120;
              v121 = *(_DWORD *)(v21 + 12);
              *(_QWORD *)(v21 + 16) += v119;
              if ( v121 == *(_DWORD *)(v21 + 8) && (*(_BYTE *)(v21 + 4) & 4) == 0 )
              {
                qsort((void *)(v21 + 24), v121, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
                MiCompressTbFlushList(v21);
                v122 = *(unsigned int *)(v21 + 12);
                if ( (_DWORD)v122 == *(_DWORD *)(v21 + 8) )
                  break;
              }
              if ( !v71 )
                goto LABEL_99;
            }
            if ( v71 )
            {
              *(_BYTE *)(v21 + 5) = 1;
              *(_QWORD *)(v21 + 16) = v122;
            }
          }
          else
          {
            *(_BYTE *)(v21 + 5) = 1;
          }
          goto LABEL_99;
        }
      }
LABEL_210:
      LODWORD(v156) = 1;
      goto LABEL_211;
    }
    if ( (v22 & 2) != 0 && (*(_BYTE *)(v20 + 187) & 1) == 0 && dword_140C4E828 )
    {
      v5 = 0xFFFFF68000000000uLL;
      if ( v23 < 0xFFFFF68000000000uLL || v23 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v25 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v26 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL && v25 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          v5 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(v5 + 912) != 1 && (v26 & 1) != 0 && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
          {
            v5 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v27 = *(_QWORD *)(v5 + 1928);
            if ( v27 )
            {
              v28 = *(_QWORD *)(v27 + 8 * ((v25 >> 3) & 0x1FF));
              v29 = HIBYTE(*(_QWORD *)v25);
              v5 = (unsigned __int8)v28;
              LOBYTE(v5) = v28 & 0x20;
              if ( (v28 & 0x20) == 0 )
                v29 = HIBYTE(v26);
              HIBYTE(v26) = v29;
              if ( (v28 & 0x42) != 0 )
                HIBYTE(v26) = v29;
            }
          }
        }
        if ( (HIBYTE(v26) & 0xF) == 7 )
          goto LABEL_75;
        v20 = v147;
      }
      if ( (*(_BYTE *)a2 & 0x20) != 0 )
        MiLogPageAccess(v20, a2);
    }
LABEL_75:
    v30 = v3;
    if ( (unsigned int)MiPteInShadowRange(&v157, v5)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      v31 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v31 )
      {
        v30 = v3 | 0x20;
        v32 = *((_QWORD *)&v31->Flink + (((unsigned __int64)&v157 >> 3) & 0x1FF));
        if ( (v32 & 0x20) == 0 )
          v30 = v3;
        if ( (v32 & 0x42) != 0 )
          v30 |= 0x42uLL;
      }
    }
    v33 = 48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v33 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
      if ( (v22 & 1) != 0 && (unsigned int)MiGetPfnPriority(v33) - 3 <= 2 )
        MiLockSetPfnPriority(v34, 2LL, v35, v36);
      if ( (v22 & 4) != 0
        && !*(_QWORD *)(v19 + 88)
        && (v3 & 0x42) == 0
        && (unsigned int)MI_PFN_IS_PROTO(v33)
        && (*(_BYTE *)(v33 + 34) & 0x10) == 0
        && (unsigned int)MiGetPfnPriority(v37) < 5 )
      {
        *(_QWORD *)(v19 + 88) = MiCreateDecayPfn();
      }
    }
    goto LABEL_96;
  }
  if ( (v3 & 0x400) == 0 )
  {
    if ( (v3 & 0x800) != 0 )
    {
      if ( (v22 & 0x800) != 0 )
        goto LABEL_38;
      if ( (v22 & 0x10) != 0 && (v3 & 0x3E0) == 0x300 )
        MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 32LL), a2, v19 + 112, v6);
      goto LABEL_291;
    }
    if ( (v3 & 0x3E0) == 0 )
      KeBugCheckEx(0x1Au, 0x41792uLL, a2, v3, 0LL);
    v137 = *(unsigned __int16 *)(v20 + 174);
    v158 = v3;
    v138 = *(_QWORD *)(qword_140C4E648 + 8 * v137);
    if ( (v3 & 4) != 0 || (v3 & 2) != 0 )
      v139 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v158);
    else
      v139 = 0LL;
    v158 = v139;
    if ( v139 )
      MiReleasePageFileInfo(v138, v139, 0);
    if ( (*(_BYTE *)(v147 + 184) & 7) != 0 )
      goto LABEL_332;
    if ( (v22 & 0x80u) != 0 )
    {
      if ( qword_140C4DF40 && (v3 & 0x10) == 0 )
        LOWORD(v3) = ~(_WORD)qword_140C4DF40 & v3;
      if ( (v3 & 0x400) != 0 || (v3 & 0x800) != 0 || (v3 & 4) != 0 )
LABEL_332:
        ++*(_QWORD *)(*(_QWORD *)(v19 + 16) + 24LL);
    }
    v134 = ZeroPte;
    v135 = 0xFFFFF6FB7DBED000uLL;
    if ( a2 < 0xFFFFF6FB7DBED000uLL )
      goto LABEL_344;
    v136 = 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_335;
  }
  v126 = v3;
  if ( qword_140C4DF40 && (v3 & 0x10) == 0 )
    v126 = v3 & ~qword_140C4DF40;
  v127 = v126 >> 16;
  v128 = v3;
  if ( qword_140C4DF40 && (v3 & 0x10) == 0 )
    v128 = v3 & ~qword_140C4DF40;
  if ( HIDWORD(v128) != 0xFFFFFFFF && (v3 & 0x800) != 0 )
  {
    v129 = MiDecrementCombinedPte(v20, v127);
LABEL_309:
    if ( v129 == 3 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v19 + 16) + 8LL);
    }
    else if ( v129 == 5 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
    }
    v8 = 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_314;
  }
  if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12] )
  {
    if ( !MiIsPrototypePteVadLookup(v3) )
    {
      CloneAddress = MiLocateCloneAddress(v131, v130);
      if ( CloneAddress )
      {
        v129 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v133);
        goto LABEL_309;
      }
    }
  }
LABEL_314:
  v134 = ZeroPte;
  v135 = 0xFFFFF6FB7DBED000uLL;
  if ( a2 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_344;
  v136 = v8;
LABEL_335:
  if ( a2 <= v136 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C4E008) && (v134 & 1) != 0 )
        v134 |= 0x8000000000000000uLL;
      *(_QWORD *)a2 = v134;
      MiWritePteShadow(a2, v134, v140);
      v135 = 0xFFFFF6FB7DBED000uLL;
      goto LABEL_345;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v134 & 1) != 0 )
      v134 |= 0x8000000000000000uLL;
  }
LABEL_344:
  *(_QWORD *)a2 = v134;
LABEL_345:
  if ( (v22 & 0x80u) != 0 && (a2 < v135 || a2 > 0xFFFFF6FB7DBEDFFFuLL) )
  {
    v141 = (__int64 *)(((v23 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    PteShadow = *v141;
    v143 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v141 >= v135 && (unsigned __int64)v141 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow((unsigned __int64)v141, *v141);
      v143 = 0xFFFFF6FB7DBED7F8uLL;
    }
    v159 = PteShadow;
    v144 = &v159;
    if ( (unsigned __int64)&v159 >= v135 )
    {
      v144 = &v159;
      if ( (unsigned __int64)&v159 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)&v159, PteShadow);
    }
    v145 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v146 = HIWORD(*(_DWORD *)(v145 + 16)) & 0x3FF;
    if ( (*(_DWORD *)(v145 + 16) & 0x3FF0000) == 0 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v145, v146, 1uLL);
    v153 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v145 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v153, (__int64)v144, v143, v146);
      while ( *(__int64 *)(v145 + 24) < 0 );
    }
    *(_QWORD *)(v145 + 16) ^= ((unsigned int)*(_QWORD *)(v145 + 16) ^ (((unsigned int)(*(_QWORD *)(v145 + 16) >> 16) - 1) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v145 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
