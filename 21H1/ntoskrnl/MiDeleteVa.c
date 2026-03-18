/*
 * XREFs of MiDeleteVa @ 0x14029BBC0
 * Callers:
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiFlushTbListEarly @ 0x140203350 (MiFlushTbListEarly.c)
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiTerminateWsleCluster @ 0x14029AE10 (MiTerminateWsleCluster.c)
 *     MiRemoveWsle @ 0x14029D120 (MiRemoveWsle.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     MiIsPageTableDeletable @ 0x14029EFC0 (MiIsPageTableDeletable.c)
 *     MiReadPteShadow @ 0x1402AD460 (MiReadPteShadow.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiUnlockWsle @ 0x1402B6FC0 (MiUnlockWsle.c)
 *     MiCountWslesInPageTable @ 0x1402DE480 (MiCountWslesInPageTable.c)
 *     MiEvictPageTableLock @ 0x1402F2ABC (MiEvictPageTableLock.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCompressTbFlushList @ 0x1402F66E0 (MiCompressTbFlushList.c)
 *     MiUnmapFrameBuffer @ 0x1402F8088 (MiUnmapFrameBuffer.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MiCreateDecayPfn @ 0x1402FF368 (MiCreateDecayPfn.c)
 *     MiRotatedToFrameBuffer @ 0x140300408 (MiRotatedToFrameBuffer.c)
 *     MiLockSetPfnPriority @ 0x1403441E0 (MiLockSetPfnPriority.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiDecrementCombinedPte @ 0x140364274 (MiDecrementCombinedPte.c)
 *     MiDeletePhysmemPte @ 0x14037BA88 (MiDeletePhysmemPte.c)
 *     MiWriteTopLevelPxe @ 0x14039A9EC (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     qsort @ 0x1403CE680 (qsort.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiDeleteVadAwePtes @ 0x140546014 (MiDeleteVadAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x140549E6C (MiDeleteLargeUserPde.c)
 *     MiDecrementCloneBlockReference @ 0x140554398 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, ULONG_PTR a2, unsigned int a3)
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
  __int64 Process; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  struct _LIST_ENTRY *v28; // rax
  __int64 v29; // rax
  char v30; // r8^7
  unsigned __int64 v31; // rdi
  struct _LIST_ENTRY *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r13
  unsigned __int64 v39; // rbx
  int v40; // r10d
  unsigned __int64 v41; // r9
  __int64 *v42; // r8
  __int64 v43; // rdx
  unsigned __int64 v44; // r11
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  char v48; // r8^7
  __int64 v49; // r12
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  char v54; // r9
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  bool v58; // zf
  char v59; // r9
  unsigned __int64 v60; // r11
  __int64 v61; // rax
  int v62; // r13d
  __int64 v63; // rdi
  unsigned int v64; // eax
  __int64 v65; // rdi
  unsigned __int64 v66; // r12
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rdx
  struct _LIST_ENTRY *v69; // r8
  __int64 v70; // rax
  __int64 v71; // r8
  _BYTE *v72; // r9
  unsigned __int8 WsleContents; // r13
  unsigned __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // r13
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // r9
  int v80; // r10d
  int v81; // ecx
  __int64 v82; // rcx
  __int64 v83; // rdx
  unsigned __int64 v84; // r8
  unsigned __int64 v85; // r10
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // r9
  char v88; // r11
  int v89; // r9d
  unsigned __int64 *v90; // r8
  unsigned __int64 v91; // r10
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // r9
  unsigned __int64 v94; // r8
  struct _LIST_ENTRY *v95; // rax
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // r8
  __int64 v99; // rax
  __int64 v100; // r8
  unsigned __int64 *v101; // r12
  unsigned int v102; // r10d
  char v103; // r8
  __int64 v104; // r11
  __int64 v105; // rax
  unsigned __int64 v106; // r9
  __int64 v107; // r8
  __int64 v108; // rax
  unsigned __int64 v109; // rax
  __int64 v110; // rax
  unsigned __int64 v111; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  unsigned __int64 v115; // rax
  __int64 v116; // rcx
  int v117; // eax
  __int64 v118; // rdx
  __int64 v119; // r8
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v121; // rdx
  __int64 v122; // rdx
  ULONG_PTR v123; // r9
  unsigned __int64 v124; // rax
  __int64 v125; // rdi
  __int64 v126; // rax
  unsigned __int64 *v127; // r15
  unsigned __int64 PteShadow; // rax
  __int64 v129; // r8
  unsigned __int64 *v130; // rdx
  ULONG_PTR v131; // rbx
  ULONG_PTR v132; // r9
  __int64 v133; // [rsp+30h] [rbp-69h]
  int v134; // [rsp+38h] [rbp-61h]
  char v136; // [rsp+40h] [rbp-59h]
  int v137; // [rsp+40h] [rbp-59h]
  __int64 v138; // [rsp+48h] [rbp-51h]
  int v139; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v140; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v141; // [rsp+60h] [rbp-39h] BYREF
  __int64 v142; // [rsp+68h] [rbp-31h]
  ULONG_PTR v143; // [rsp+70h] [rbp-29h] BYREF
  ULONG_PTR v144; // [rsp+78h] [rbp-21h] BYREF
  unsigned __int64 v145; // [rsp+80h] [rbp-19h] BYREF
  ULONG_PTR v146; // [rsp+88h] [rbp-11h]
  _DWORD v147[8]; // [rsp+90h] [rbp-9h] BYREF

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
  v143 = v3;
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
  v138 = v19;
  v22 = *(_DWORD *)(v19 + 104);
  v133 = v20;
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
      if ( !(unsigned int)MiIsPageTableDeletable(a1, a2) )
        return 0LL;
      v20 = v133;
      v6 = a3;
    }
    if ( (*(_BYTE *)(v20 + 184) & 7) != 0 )
    {
      MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, 1LL, 0);
      if ( (v22 & 0x100) == 0 && v23 >= 0xFFFFF68000000000uLL && v23 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( !(unsigned int)MiEvictPageTableLock(v133, a2, v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400, (int)a3 > 1) )
          return 0LL;
        goto LABEL_281;
      }
      goto LABEL_98;
    }
    Process = 0xFFFFF6FFFFFFFFFFuLL;
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
      v25 = MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 32LL), a2, v19 + 112, v6);
      MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, v25, 0);
      goto LABEL_281;
    }
    if ( (v22 & 0x60) != 0 )
    {
      MiDeletePhysmemPte(a1, a2);
      goto LABEL_281;
    }
    if ( (v22 & 8) != 0 )
    {
      if ( (unsigned int)MiRotatedToFrameBuffer(a2, v5, v20, v6) == 1 )
      {
        v146 = 0LL;
        MiUnmapFrameBuffer(a2);
        MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, 1LL, 0);
        goto LABEL_281;
      }
      v20 = v133;
      Process = 0xFFFFF6FFFFFFFFFFuLL;
    }
    if ( (v22 & 0x90) != 0x80 )
    {
LABEL_96:
      if ( (v22 & 0x100) != 0 )
      {
        MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, 1LL, 0);
LABEL_98:
        v38 = v133;
LABEL_99:
        v39 = v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v143 = v39;
        if ( a3 == 3 && (*(_BYTE *)(v38 + 184) & 7) != 0 )
        {
          MiWriteTopLevelPxe(a2, v39);
        }
        else if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow(v37, v36) )
        {
          *(_QWORD *)a2 = v39;
          MiWritePteShadow(a2, v39);
        }
        else
        {
          *(_QWORD *)a2 = v39;
        }
        goto LABEL_281;
      }
      v40 = 0;
      v142 = 0LL;
      if ( a3 )
        goto LABEL_156;
      v41 = 0xFFFFF68000000000uLL;
      v42 = (__int64 *)(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v43 = *v42;
      v44 = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)v42 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v42 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, v43)
        && (v43 & 1) != 0
        && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v46 = *(_QWORD *)(Process + 1928);
        if ( v46 )
        {
          v47 = *(_QWORD *)(v46 + 8 * ((v45 >> 3) & 0x1FF));
          v48 = HIBYTE(v43);
          Process = (unsigned __int8)v47;
          LOBYTE(Process) = v47 & 0x20;
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
        v60 = 0xFFFFFA8000000000uLL;
      }
      else
      {
        v49 = v19 + 120;
        v50 = v41 + ((v23 >> 9) & 0x7FFFFFFFF8LL);
        v51 = *(_QWORD *)v50;
        if ( v50 >= 0xFFFFF6FB7DBED000uLL
          && v50 <= v44
          && (unsigned int)MiPteHasShadow(Process, v51)
          && (v51 & 1) != 0
          && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          v52 = *(_QWORD *)(Process + 1928);
          if ( v52 )
          {
            v53 = *(_QWORD *)(v52 + 8 * ((v50 >> 3) & 0x1FF));
            v50 = v51 | 0x20;
            Process = (unsigned __int8)v53;
            LOBYTE(Process) = v53 & 0x20;
            if ( (v53 & 0x20) == 0 )
              v50 = v51;
            v51 = v50;
            if ( (v53 & 0x42) != 0 )
              v51 = v50 | 0x42;
          }
        }
        v54 = HIBYTE(v51) & 0xF | (16 * ((v51 >> 60) & 7));
        v55 = *(_QWORD *)a2;
        v136 = v54;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL
          && a2 <= v44
          && (unsigned int)MiPteHasShadow(Process, v55)
          && (v55 & 1) != 0
          && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
        {
          v50 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v50 )
          {
            v56 = *(_QWORD *)(v50 + 8 * ((a2 >> 3) & 0x1FF));
            v50 = v55 | 0x20;
            if ( (v56 & 0x20) == 0 )
              v50 = v55;
            v55 = v50;
            if ( (v56 & 0x42) != 0 )
              v55 = v50 | 0x42;
          }
        }
        v140 = v55;
        if ( (unsigned __int64)&v140 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v140 <= v44
          && (unsigned int)MiPteHasShadow(&v140, v55)
          && (v55 & 1) != 0
          && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
        {
          v50 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v50 )
          {
            v57 = *(_QWORD *)(v50 + 8 * (((unsigned __int64)&v140 >> 3) & 0x1FF));
            v50 = v55 | 0x20;
            if ( (v57 & 0x20) == 0 )
              v50 = v55;
            v55 = v50;
            if ( (v57 & 0x42) != 0 )
              v55 = v50 | 0x42;
          }
        }
        v58 = (unsigned int)MI_PFN_IS_PROTO(
                              48 * ((v55 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL,
                              (v55 >> 12) & 0xFFFFFFFFFLL,
                              v50) == 0;
        v62 = v40;
        v61 = *(_QWORD *)(v49 + 8);
        LOBYTE(v62) = v58;
        if ( !v61 )
          goto LABEL_155;
        v63 = *(_QWORD *)(v49 + 16);
        if ( a2 == v61 + 8 * v63 && v59 == *(_BYTE *)(v49 + 28) && v62 == (*(_DWORD *)(v49 + 24) & 1) )
        {
          *(_QWORD *)(v49 + 16) = v63 + 1;
          v146 = *(_QWORD *)a2;
          goto LABEL_281;
        }
        if ( (*(_DWORD *)(v49 + 24) & 2) == 0 )
        {
          MiTerminateWsleCluster(v49);
          v59 = v136;
LABEL_155:
          *(_QWORD *)v49 = v133;
          v64 = *(_DWORD *)(v49 + 24) & 0xFFFFFFFE;
          *(_QWORD *)(v49 + 8) = a2;
          *(_BYTE *)(v49 + 28) = v59;
          *(_DWORD *)(v49 + 24) = v62 | v64;
          *(_QWORD *)(v49 + 16) = 1LL;
          v146 = *(_QWORD *)a2;
LABEL_281:
          v111 = qword_140C4DED0;
          if ( (*(_BYTE *)(v21 + 4) & 2) == 0
            && *(_DWORD *)v21 == 1
            && KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5] )
          {
            v111 = -1LL;
          }
          if ( (*(_DWORD *)(v21 + 12) >= *(_DWORD *)(v21 + 8) || *(_BYTE *)(v21 + 5) || *(_QWORD *)(v21 + 16) > v111)
            && v111 >= 0x400
            && !*(_BYTE *)(v21 + 5) )
          {
            MiFlushTbList(v21, (_KPROCESS *)v111);
          }
          v19 = v138;
LABEL_292:
          if ( !*(_QWORD *)v19 )
            *(_QWORD *)v19 = a2;
          *(_QWORD *)(v19 + 8) = a2;
          return 0LL;
        }
      }
      v65 = 1LL;
      v134 = 1;
      v66 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v67 = 0xFFFFF6FB7DBED000uLL;
      v68 = *(_QWORD *)v66;
      if ( v66 >= 0xFFFFF6FB7DBED000uLL && v66 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v68)
          && (v68 & 1) != 0
          && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
        {
          v69 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v69 )
          {
            v70 = *((_QWORD *)&v69->Flink + ((v66 >> 3) & 0x1FF));
            v71 = v68 | 0x20;
            if ( (v70 & 0x20) == 0 )
              v71 = v68;
            v68 = v71;
            if ( (v70 & 0x42) != 0 )
              v68 = v71 | 0x42;
          }
        }
        v67 = 0xFFFFF6FB7DBED000uLL;
      }
      v72 = (_BYTE *)(v60 + 48 * ((v68 >> 12) & 0xFFFFFFFFFLL));
      if ( v23 >= 0xFFFFF68000000000uLL && v23 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        WsleContents = (*v72 >> 1) & 7;
        v137 = v40;
        if ( !(unsigned int)MiEvictPageTableLock(v133, ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, ZeroPte, 0LL) )
          return 0LL;
        goto LABEL_211;
      }
      v74 = *(_QWORD *)v66;
      v137 = 1;
      if ( v66 >= 0xFFFFF6FB7DBED000uLL
        && v66 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v74)
        && (v74 & 1) != 0
        && ((v74 & 0x20) == 0 || (v74 & 0x42) == 0) )
      {
        v67 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v67 )
        {
          v75 = *(_QWORD *)(v67 + 8 * ((v66 >> 3) & 0x1FF));
          v67 = v74 | 0x20;
          if ( (v75 & 0x20) == 0 )
            v67 = v74;
          v74 = v67;
          if ( (v75 & 0x42) != 0 )
            v74 = v67 | 0x42;
        }
      }
      v76 = (v74 >> 60) & 7;
      v77 = HIBYTE(v74) & 0xF;
      WsleContents = v77 | (16 * v76);
      v78 = MI_PFN_IS_PROTO(v72, v77, v67);
      v81 = v80;
      LOBYTE(v81) = v78 == 0;
      v134 = v81;
      if ( (WsleContents & 0xF) == 8 )
      {
        MiUnlockWsle(v133, (__int64)(a2 << 25) >> 16, v79);
        WsleContents = MiGetWsleContents(v82, (__int64)(a2 << 25) >> 16);
      }
      v83 = ZeroPte;
      v84 = *(_QWORD *)v66;
      v85 = 0xFFFFF6FB7DBED000uLL;
      v86 = 0xFFFFF6FB7DBED000uLL;
      v87 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v66 >= 0xFFFFF6FB7DBED000uLL )
      {
        v86 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v66 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, ZeroPte) )
            LOBYTE(v84) = v84 | 0x20;
        }
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        LOBYTE(v84) = 32;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v84 & 0x20) != 0 )
      {
        if ( v66 >= v85 && v66 <= v87 )
        {
          if ( (unsigned int)MiPteHasShadow(v86, v83) )
          {
            if ( !HIBYTE(word_140C4DF48) && (v83 & 1) != 0 )
              v83 |= 0x8000000000000000uLL;
            *(_QWORD *)v66 = v83;
            MiWritePteShadow(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v83);
            goto LABEL_211;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v83 & 1) != 0 )
          {
            v83 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v66 = v83;
      }
      else
      {
        v88 = _InterlockedExchange64((volatile __int64 *)v66, v83);
        if ( v66 >= v85 && v66 <= v87 )
          MiWritePteShadow(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v83);
        if ( (v88 & 0x20) == 0 )
        {
LABEL_212:
          v89 = WsleContents;
          v38 = v133;
          MiRemoveWsle(v133, (__int64)(a2 << 25) >> 16, 1, v89, 10, v134);
          if ( v137 )
          {
            v90 = (unsigned __int64 *)(((v23 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
            v91 = 0xFFFFF6FB7DBED000uLL;
            v92 = *v90;
            v93 = 0xFFFFF6FB7DBED7F8uLL;
            if ( (unsigned __int64)v90 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v90 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(v37, v92)
              && (v92 & 1) != 0
              && ((v92 & 0x20) == 0 || (v92 & 0x42) == 0) )
            {
              v95 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v95 )
              {
                v96 = *((_QWORD *)&v95->Flink + ((v94 >> 3) & 0x1FF));
                v97 = v92 | 0x20;
                if ( (v96 & 0x20) == 0 )
                  v97 = v92;
                v92 = v97;
                if ( (v96 & 0x42) != 0 )
                  v92 = v97 | 0x42;
              }
            }
            v141 = v92;
            v37 = (unsigned __int64)&v141;
            if ( (unsigned __int64)&v141 >= v91 )
            {
              v37 = (unsigned __int64)&v141;
              if ( (unsigned __int64)&v141 <= v93
                && (unsigned int)MiPteHasShadow(&v141, v92)
                && (v92 & 1) != 0
                && ((v92 & 0x20) == 0 || (v92 & 0x42) == 0) )
              {
                v37 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
                v98 = *(_QWORD *)(v37 + 1928);
                if ( v98 )
                {
                  v99 = *(_QWORD *)(v98 + 8 * (((unsigned __int64)&v141 >> 3) & 0x1FF));
                  v100 = v92 | 0x20;
                  v37 = (unsigned __int8)v99;
                  LOBYTE(v37) = v99 & 0x20;
                  if ( (v99 & 0x20) == 0 )
                    v100 = v92;
                  v92 = v100;
                  if ( (v99 & 0x42) != 0 )
                    v92 = v100 | 0x42;
                }
              }
            }
            v36 = (v92 >> 12) & 0xFFFFFFFFFLL;
            v101 = (unsigned __int64 *)(48 * v36 - 0x58000000000LL);
            if ( ((*(_DWORD *)v101 >> 4) & 0x3FF) == 0 )
            {
              MiCountWslesInPageTable(v37, (__int64)(a2 << 25) >> 16, v147);
              LOBYTE(v37) = 8;
              while ( 1 )
              {
                LOBYTE(v37) = v37 - 1;
                v36 = (unsigned int)v147[(unsigned __int8)v37];
                if ( (_DWORD)v36 )
                  break;
                if ( !(_BYTE)v37 )
                  goto LABEL_241;
              }
              v36 &= 0x3FFu;
              v37 = *v101 & 0xFFFFFFFFFFFE000FuLL | (16 * (v36 | ((v37 & 7) << 10)));
              *v101 = v37;
            }
          }
LABEL_241:
          if ( (_DWORD)v142 != 1 )
            goto LABEL_99;
          if ( *(_DWORD *)v21 != 1 )
          {
            v37 = *(unsigned __int8 *)(v21 + 4);
            if ( (v37 & 8) == 0 && v23 >= 0xFFFFF68000000000uLL && v23 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
              LOBYTE(v37) = v37 | 8;
              *(_BYTE *)(v21 + 4) = v37;
            }
          }
          v102 = *(_DWORD *)(v21 + 12);
          v103 = *(_BYTE *)(v21 + 4);
          if ( v102 )
          {
            if ( (v103 & 4) == 0 )
            {
              v104 = v21 + 8LL * (v102 - 1);
              v105 = *(_QWORD *)(v104 + 24);
              if ( (v105 & 0xC00) == 0 )
              {
                v106 = *(_QWORD *)(v104 + 24) & 0x3FFLL;
                v37 = v105 & 0xFFFFFFFFFFFFF000uLL;
                v36 = (v105 & 0xFFFFFFFFFFFFF000uLL) + ((v106 + 1) << 12);
                if ( v36 == v23 )
                {
                  v37 = v106 + 1;
                  if ( v106 + 1 >= v106 && v37 <= 0x3FF )
                  {
                    ++*(_QWORD *)(v21 + 16);
                    v37 = v105 ^ ((unsigned __int16)v105 ^ (unsigned __int16)(v105 + 1)) & 0x3FF;
                    *(_QWORD *)(v104 + 24) = v37;
                    goto LABEL_99;
                  }
                }
              }
            }
            if ( (v103 & 4) == 0 )
            {
              v107 = v21 + 8LL * (v102 - 1);
              v108 = *(_QWORD *)(v107 + 24);
              if ( (v108 & 0xC00) == 0 )
              {
                v37 = v23 + 4096;
                v36 = v108 & 0xFFFFFFFFFFFFF000uLL;
                if ( (v108 & 0xFFFFFFFFFFFFF000uLL) == v23 + 4096 )
                {
                  v37 = *(_QWORD *)(v107 + 24) & 0x3FFLL;
                  v36 = v37 + 1;
                  if ( v37 + 1 >= v37 && v36 <= 0x3FF )
                  {
                    ++*(_QWORD *)(v21 + 16);
                    v37 = (v108 - 4096) ^ ((unsigned __int16)(v108 - 4096) ^ (unsigned __int16)(v108 - 4096 + 1)) & 0x3FF;
                    *(_QWORD *)(v107 + 24) = v37;
                    goto LABEL_99;
                  }
                }
              }
            }
          }
          if ( v102 < *(_DWORD *)(v21 + 8) )
          {
            while ( 1 )
            {
              v36 = 1024LL;
              if ( (unsigned __int64)(v65 - 1) <= 0x3FF )
                v36 = v65;
              v65 -= v36;
              v109 = v23 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v36 - 1) & 0x3FF;
              v23 += v36 << 12;
              *(_QWORD *)(v21 + 8LL * (unsigned int)(*(_DWORD *)(v21 + 12))++ + 24) = v109;
              v37 = *(unsigned int *)(v21 + 12);
              *(_QWORD *)(v21 + 16) += v36;
              if ( (_DWORD)v37 == *(_DWORD *)(v21 + 8) && (*(_BYTE *)(v21 + 4) & 4) == 0 )
              {
                qsort((void *)(v21 + 24), (unsigned int)v37, 8uLL, MiTbFlushSort);
                MiCompressTbFlushList(v21);
                v110 = *(unsigned int *)(v21 + 12);
                if ( (_DWORD)v110 == *(_DWORD *)(v21 + 8) )
                  break;
              }
              if ( !v65 )
                goto LABEL_99;
            }
            if ( v65 )
            {
              *(_BYTE *)(v21 + 5) = 1;
              *(_QWORD *)(v21 + 16) = v110;
            }
          }
          else
          {
            *(_BYTE *)(v21 + 5) = 1;
          }
          goto LABEL_99;
        }
      }
LABEL_211:
      LODWORD(v142) = 1;
      goto LABEL_212;
    }
    if ( (v22 & 2) != 0 && (*(_BYTE *)(v20 + 187) & 1) == 0 && dword_140C4E768 )
    {
      if ( v23 < 0xFFFFF68000000000uLL || v23 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v26 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v27 = *(_QWORD *)v26;
        if ( v26 >= 0xFFFFF6FB7DBED000uLL
          && v26 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v27 & 1) != 0
          && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          v28 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v28 )
          {
            v29 = *((_QWORD *)&v28->Flink + ((v26 >> 3) & 0x1FF));
            v30 = HIBYTE(*(_QWORD *)v26);
            if ( (v29 & 0x20) == 0 )
              v30 = HIBYTE(v27);
            HIBYTE(v27) = v30;
            if ( (v29 & 0x42) != 0 )
              HIBYTE(v27) = v30;
          }
        }
        if ( (HIBYTE(v27) & 0xF) == 7 )
          goto LABEL_75;
        v20 = v133;
      }
      if ( (*(_BYTE *)a2 & 0x20) != 0 )
        MiLogPageAccess(v20, a2);
    }
LABEL_75:
    v31 = v3;
    if ( MiPteInShadowRange((unsigned __int64)&v143)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      v32 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v32 )
      {
        v31 = v3 | 0x20;
        v34 = *((_QWORD *)&v32->Flink + (((unsigned __int64)&v143 >> 3) & 0x1FF));
        if ( (v34 & 0x20) == 0 )
          v31 = v3;
        if ( (v34 & 0x42) != 0 )
          v31 |= 0x42uLL;
      }
    }
    v35 = 48 * ((v31 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    Process = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(v35 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
      if ( (v22 & 1) != 0 && (unsigned int)MiGetPfnPriority(v35) - 3 <= 2 )
        MiLockSetPfnPriority(Process, 2LL);
      if ( (v22 & 4) != 0
        && !*(_QWORD *)(v19 + 88)
        && (v3 & 0x42) == 0
        && (unsigned int)MI_PFN_IS_PROTO(v35, v32, v33)
        && (*(_BYTE *)(v35 + 34) & 0x10) == 0
        && (unsigned int)MiGetPfnPriority(Process) < 5 )
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
      goto LABEL_292;
    }
    if ( (v3 & 0x3E0) == 0 )
      KeBugCheckEx(0x1Au, 0x41792uLL, a2, v3, 0LL);
    v116 = *(unsigned __int16 *)(v20 + 174);
    v144 = v3;
    v125 = *(_QWORD *)(qword_140C4E588 + 8 * v116);
    if ( (v3 & 4) != 0 || (v3 & 2) != 0 )
      v126 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v144);
    else
      v126 = 0LL;
    v144 = v126;
    if ( v126 )
      MiReleasePageFileInfo(v125, v126, 0LL);
    if ( (*(_BYTE *)(v133 + 184) & 7) != 0 )
      goto LABEL_333;
    if ( (v22 & 0x80u) != 0 )
    {
      if ( qword_140C4DE80 && (v3 & 0x10) == 0 )
        LOWORD(v3) = ~(_WORD)qword_140C4DE80 & v3;
      if ( (v3 & 0x400) != 0 || (v3 & 0x800) != 0 || (v3 & 4) != 0 )
LABEL_333:
        ++*(_QWORD *)(*(_QWORD *)(v19 + 16) + 24LL);
    }
    v122 = ZeroPte;
    v123 = 0xFFFFF6FB7DBED000uLL;
    if ( a2 < 0xFFFFF6FB7DBED000uLL )
      goto LABEL_345;
    v124 = 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_336;
  }
  v113 = v3;
  if ( qword_140C4DE80 && (v3 & 0x10) == 0 )
    v113 = v3 & ~qword_140C4DE80;
  v114 = v113 >> 16;
  v115 = v3;
  if ( qword_140C4DE80 && (v3 & 0x10) == 0 )
    v115 = v3 & ~qword_140C4DE80;
  v116 = 0xFFFFFFFFLL;
  if ( HIDWORD(v115) != 0xFFFFFFFF && (v3 & 0x800) != 0 )
  {
    v117 = MiDecrementCombinedPte(v20, v114);
LABEL_310:
    if ( v117 == 3 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v19 + 16) + 8LL);
    }
    else if ( v117 == 5 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
    }
    v8 = 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_315;
  }
  if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12] )
  {
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v3) )
    {
      CloneAddress = MiLocateCloneAddress(v119, v118);
      if ( CloneAddress )
      {
        v117 = MiDecrementCloneBlockReference(CloneAddress, v121);
        goto LABEL_310;
      }
    }
  }
LABEL_315:
  v122 = ZeroPte;
  v123 = 0xFFFFF6FB7DBED000uLL;
  if ( a2 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_345;
  v124 = v8;
LABEL_336:
  if ( a2 <= v124 )
  {
    if ( (unsigned int)MiPteHasShadow(v116, v122) )
    {
      if ( !HIBYTE(word_140C4DF48) && (v122 & 1) != 0 )
        v122 |= 0x8000000000000000uLL;
      *(_QWORD *)a2 = v122;
      MiWritePteShadow(a2, v122);
      v123 = 0xFFFFF6FB7DBED000uLL;
      goto LABEL_346;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v122 & 1) != 0 )
      v122 |= 0x8000000000000000uLL;
  }
LABEL_345:
  *(_QWORD *)a2 = v122;
LABEL_346:
  if ( (v22 & 0x80u) != 0 && (a2 < v123 || a2 > 0xFFFFF6FB7DBEDFFFuLL) )
  {
    v127 = (unsigned __int64 *)(((v23 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    PteShadow = *v127;
    v129 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v127 >= v123 && (unsigned __int64)v127 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow(v127, *v127);
      v129 = 0xFFFFF6FB7DBED7F8uLL;
    }
    v145 = PteShadow;
    v130 = &v145;
    if ( (unsigned __int64)&v145 >= v123 )
    {
      v130 = &v145;
      if ( (unsigned __int64)&v145 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(&v145, PteShadow);
    }
    v131 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v132 = HIWORD(*(_DWORD *)(v131 + 16)) & 0x3FF;
    if ( (*(_DWORD *)(v131 + 16) & 0x3FF0000) == 0 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v131, v132, 1uLL);
    v139 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v131 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v139, (__int64)v130, v129, v132);
      while ( *(__int64 *)(v131 + 24) < 0 );
    }
    *(_QWORD *)(v131 + 16) ^= ((unsigned int)*(_QWORD *)(v131 + 16) ^ (((unsigned int)(*(_QWORD *)(v131 + 16) >> 16) - 1) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v131 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
