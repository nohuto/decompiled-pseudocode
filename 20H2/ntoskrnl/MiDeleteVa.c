/*
 * XREFs of MiDeleteVa @ 0x1402BAF60
 * Callers:
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiIsPageTableDeletable @ 0x140236000 (MiIsPageTableDeletable.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     MiLockSetPfnPriority @ 0x14023AE9C (MiLockSetPfnPriority.c)
 *     MiFlushTbListEarly @ 0x14023DC3C (MiFlushTbListEarly.c)
 *     MiUnmapFrameBuffer @ 0x14025E8B8 (MiUnmapFrameBuffer.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiRemoveWsle @ 0x1402BC4C0 (MiRemoveWsle.c)
 *     MiLogPageAccess @ 0x1402BDB30 (MiLogPageAccess.c)
 *     MiTerminateWsleCluster @ 0x1402BF020 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiEvictPageTableLock @ 0x1402CC400 (MiEvictPageTableLock.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     MiUnlockWsle @ 0x1402D3E4C (MiUnlockWsle.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCountWslesInPageTable @ 0x1402ED8D0 (MiCountWslesInPageTable.c)
 *     MiCompressTbFlushList @ 0x140306530 (MiCompressTbFlushList.c)
 *     MiRotatedToFrameBuffer @ 0x14030F8A8 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x140344118 (MiLocateCloneAddress.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiCreateDecayPfn @ 0x140351B30 (MiCreateDecayPfn.c)
 *     MiDecrementCombinedPte @ 0x140366C14 (MiDecrementCombinedPte.c)
 *     MiDeletePhysmemPte @ 0x14037E3BC (MiDeletePhysmemPte.c)
 *     MiWriteTopLevelPxe @ 0x14039E2CC (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2150 (qsort.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiDeleteVadAwePtes @ 0x14054A034 (MiDeleteVadAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x14054DE8C (MiDeleteLargeUserPde.c)
 *     MiDecrementCloneBlockReference @ 0x1405583B8 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v3; // rbx
  unsigned __int64 v5; // r9
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
  _KPROCESS *v19; // r8
  __int64 v20; // r14
  int v21; // r12d
  unsigned __int64 v22; // r15
  __int64 Process; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  struct _LIST_ENTRY *v27; // rax
  __int64 v28; // rax
  char v29; // r8^7
  unsigned __int64 v30; // rdi
  struct _LIST_ENTRY *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r9
  _KPROCESS *v38; // r13
  unsigned __int64 v39; // rbx
  int v40; // r10d
  __int64 *v41; // r8
  __int64 v42; // rdx
  unsigned __int64 v43; // r11
  unsigned __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rax
  char v47; // r8^7
  __int64 v48; // r12
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r9
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  struct _LIST_ENTRY *v56; // r8
  __int64 v57; // rax
  __int64 v58; // r8
  bool v59; // zf
  unsigned __int64 v60; // r11
  __int64 v61; // rax
  int v62; // r13d
  __int64 v63; // rdi
  unsigned int v64; // eax
  __int64 v65; // rdi
  unsigned __int64 v66; // r12
  unsigned __int64 v67; // rdx
  struct _LIST_ENTRY *v68; // r8
  __int64 v69; // rax
  __int64 v70; // r8
  _BYTE *v71; // r9
  unsigned __int8 WsleContents; // r13
  unsigned __int64 v73; // rdx
  struct _LIST_ENTRY *v74; // r8
  __int64 v75; // rax
  __int64 v76; // r8
  int v77; // eax
  __int64 v78; // r9
  int v79; // r10d
  int v80; // ecx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // r8
  unsigned __int64 v84; // r10
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // r9
  char v87; // r11
  int v88; // r9d
  unsigned __int64 v89; // r10
  unsigned __int64 v90; // rdx
  struct _LIST_ENTRY *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  unsigned __int64 *v94; // r12
  unsigned int v95; // r10d
  __int64 v96; // r11
  __int64 v97; // rax
  __int64 v98; // rax
  unsigned __int64 v99; // rax
  __int64 v100; // rax
  unsigned __int64 v101; // rdx
  __int64 v103; // rdx
  __int64 v104; // rdx
  unsigned __int64 v105; // rax
  __int64 v106; // rcx
  int v107; // eax
  __int64 v108; // rdx
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v110; // rdx
  __int64 v111; // rdx
  ULONG_PTR v112; // r9
  unsigned __int64 v113; // rax
  __int64 v114; // rdi
  __int64 v115; // rax
  __int64 *v116; // r15
  unsigned __int64 PteShadow; // rax
  ULONG_PTR v118; // rbx
  _KPROCESS *v119; // [rsp+30h] [rbp-69h]
  int v120; // [rsp+38h] [rbp-61h]
  char v122; // [rsp+40h] [rbp-59h]
  int v123; // [rsp+40h] [rbp-59h]
  __int64 v124; // [rsp+48h] [rbp-51h]
  int v125; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v126; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v127; // [rsp+60h] [rbp-39h] BYREF
  __int64 v128; // [rsp+68h] [rbp-31h]
  ULONG_PTR v129; // [rsp+70h] [rbp-29h] BYREF
  ULONG_PTR v130; // [rsp+78h] [rbp-21h] BYREF
  unsigned __int64 v131; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int64 v132; // [rsp+88h] [rbp-11h] BYREF
  _DWORD v133[8]; // [rsp+90h] [rbp-9h] BYREF

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
  v129 = v3;
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
  v19 = *(_KPROCESS **)(a1 + 24);
  v20 = *(_QWORD *)(a1 + 16);
  v124 = v18;
  v21 = *(_DWORD *)(v18 + 104);
  v119 = v19;
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
      if ( !(unsigned int)MiIsPageTableDeletable(a1, a2, (__int64)v19) )
        return 0LL;
      v19 = v119;
      v5 = a3;
    }
    if ( (v19->Affinity.Bitmap[12] & 7) != 0 )
    {
      MiInsertTbFlushEntry(v20, (__int64)(a2 << 25) >> 16, 1LL, 0);
      if ( (v21 & 0x100) == 0 )
      {
        v37 = 0xFFFFF68000000000uLL;
        if ( v22 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          if ( !(unsigned int)MiEvictPageTableLock(v119, a2, v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400, (int)a3 > 1) )
            return 0LL;
          goto LABEL_279;
        }
      }
      goto LABEL_97;
    }
    Process = 0xFFFFF6FFFFFFFFFFuLL;
    if ( (_DWORD)v5 )
      goto LABEL_95;
    if ( (v21 & 0x800) != 0 )
    {
      MiDeleteLargeUserPde(a1, a2, 0LL);
      MiFlushTbListEarly(v20, 0LL);
      return 0LL;
    }
    if ( (v21 & 0x10) != 0 )
    {
      v24 = MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 32LL), a2, v18 + 112, v5);
      MiInsertTbFlushEntry(v20, (__int64)(a2 << 25) >> 16, v24, 0);
      goto LABEL_279;
    }
    if ( (v21 & 0x60) != 0 )
    {
      MiDeletePhysmemPte(a1, a2);
      goto LABEL_279;
    }
    if ( (v21 & 8) != 0 )
    {
      if ( (unsigned int)MiRotatedToFrameBuffer(a2) == 1 )
      {
        v132 = 0LL;
        MiUnmapFrameBuffer((unsigned __int64 *)a2, 3, 0, &v132);
        MiInsertTbFlushEntry(v20, (__int64)(a2 << 25) >> 16, 1LL, 0);
        goto LABEL_279;
      }
      v19 = v119;
      Process = 0xFFFFF6FFFFFFFFFFuLL;
    }
    if ( (v21 & 0x90) != 0x80 )
    {
LABEL_95:
      if ( (v21 & 0x100) != 0 )
      {
        MiInsertTbFlushEntry(v20, (__int64)(a2 << 25) >> 16, 1LL, 0);
LABEL_97:
        v38 = v119;
LABEL_98:
        v39 = v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v129 = v39;
        if ( a3 == 3 && (v38->Affinity.Bitmap[12] & 7) != 0 )
        {
          MiWriteTopLevelPxe(a2, v39);
        }
        else if ( a2 >= 0xFFFFF6FB7DBED000uLL
               && a2 <= 0xFFFFF6FB7DBED7F8uLL
               && (unsigned int)MiPteHasShadow(v35, v34, v36, v37) )
        {
          *(_QWORD *)a2 = v39;
          MiWritePteShadow(a2, v39);
        }
        else
        {
          *(_QWORD *)a2 = v39;
        }
        goto LABEL_279;
      }
      v40 = 0;
      v128 = 0LL;
      if ( a3 )
        goto LABEL_155;
      v5 = 0xFFFFF68000000000uLL;
      v41 = (__int64 *)(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v42 = *v41;
      v43 = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)v41 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v41 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, v42, v41, 0xFFFFF68000000000uLL)
        && (v42 & 1) != 0
        && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v45 = *(_QWORD *)(Process + 1928);
        if ( v45 )
        {
          v46 = *(_QWORD *)(v45 + 8 * ((v44 >> 3) & 0x1FF));
          v47 = HIBYTE(v42);
          Process = (unsigned __int8)v46;
          LOBYTE(Process) = v46 & 0x20;
          if ( (v46 & 0x20) == 0 )
            v47 = HIBYTE(v42);
          HIBYTE(v42) = v47;
          if ( (v46 & 0x42) != 0 )
            HIBYTE(v42) = v47;
        }
      }
      if ( (HIBYTE(v42) & 0xF) == 8 )
      {
LABEL_155:
        v60 = 0xFFFFFA8000000000uLL;
      }
      else
      {
        v48 = v18 + 120;
        v49 = v5 + ((v22 >> 9) & 0x7FFFFFFFF8LL);
        v50 = *(_QWORD *)v49;
        if ( v49 >= 0xFFFFF6FB7DBED000uLL
          && v49 <= v43
          && (unsigned int)MiPteHasShadow(Process, v50, v49, v5)
          && (v50 & 1) != 0
          && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          v51 = *(_QWORD *)(Process + 1928);
          if ( v51 )
          {
            v52 = *(_QWORD *)(v51 + 8 * ((v49 >> 3) & 0x1FF));
            v49 = v50 | 0x20;
            Process = (unsigned __int8)v52;
            LOBYTE(Process) = v52 & 0x20;
            if ( (v52 & 0x20) == 0 )
              v49 = v50;
            v50 = v49;
            if ( (v52 & 0x42) != 0 )
              v50 = v49 | 0x42;
          }
        }
        v53 = HIBYTE(v50) & 0xFu | (unsigned __int8)(16 * ((v50 >> 60) & 7));
        v54 = *(_QWORD *)a2;
        v122 = v53;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL
          && a2 <= v43
          && (unsigned int)MiPteHasShadow(Process, v54, v49, v53)
          && (v54 & 1) != 0
          && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
        {
          v49 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v49 )
          {
            v55 = *(_QWORD *)(v49 + 8 * ((a2 >> 3) & 0x1FF));
            v49 = v54 | 0x20;
            if ( (v55 & 0x20) == 0 )
              v49 = v54;
            v54 = v49;
            if ( (v55 & 0x42) != 0 )
              v54 = v49 | 0x42;
          }
        }
        v126 = v54;
        if ( (unsigned __int64)&v126 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v126 <= v43
          && (unsigned int)MiPteHasShadow(&v126, v54, v49, v53)
          && (v54 & 1) != 0
          && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
        {
          v56 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v56 )
          {
            v57 = *((_QWORD *)&v56->Flink + (((unsigned __int64)&v126 >> 3) & 0x1FF));
            v58 = v54 | 0x20;
            if ( (v57 & 0x20) == 0 )
              v58 = v54;
            v54 = v58;
            if ( (v57 & 0x42) != 0 )
              v54 = v58 | 0x42;
          }
        }
        v59 = (unsigned int)MI_PFN_IS_PROTO(48 * ((v54 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) == 0;
        v62 = v40;
        v61 = *(_QWORD *)(v48 + 8);
        LOBYTE(v62) = v59;
        if ( !v61 )
          goto LABEL_154;
        v63 = *(_QWORD *)(v48 + 16);
        if ( a2 == v61 + 8 * v63 && (_BYTE)v5 == *(_BYTE *)(v48 + 28) && v62 == (*(_DWORD *)(v48 + 24) & 1) )
        {
          *(_QWORD *)(v48 + 16) = v63 + 1;
          v132 = *(_QWORD *)a2;
          goto LABEL_279;
        }
        if ( (*(_DWORD *)(v48 + 24) & 2) == 0 )
        {
          MiTerminateWsleCluster(v48);
          LOBYTE(v5) = v122;
LABEL_154:
          *(_QWORD *)v48 = v119;
          v64 = *(_DWORD *)(v48 + 24) & 0xFFFFFFFE;
          *(_QWORD *)(v48 + 8) = a2;
          *(_BYTE *)(v48 + 28) = v5;
          *(_DWORD *)(v48 + 24) = v62 | v64;
          *(_QWORD *)(v48 + 16) = 1LL;
          v132 = *(_QWORD *)a2;
LABEL_279:
          v101 = qword_140C4DE10;
          if ( (*(_BYTE *)(v20 + 4) & 2) == 0
            && *(_DWORD *)v20 == 1
            && KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5] )
          {
            v101 = -1LL;
          }
          if ( (*(_DWORD *)(v20 + 12) >= *(_DWORD *)(v20 + 8) || *(_BYTE *)(v20 + 5) || *(_QWORD *)(v20 + 16) > v101)
            && v101 >= 0x400
            && !*(_BYTE *)(v20 + 5) )
          {
            MiFlushTbList(v20, v101);
          }
          v18 = v124;
LABEL_290:
          if ( !*(_QWORD *)v18 )
            *(_QWORD *)v18 = a2;
          *(_QWORD *)(v18 + 8) = a2;
          return 0LL;
        }
      }
      v65 = 1LL;
      v120 = 1;
      v66 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v67 = *(_QWORD *)v66;
      if ( v66 >= 0xFFFFF6FB7DBED000uLL
        && v66 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v67, 0xFFFFF6FB7DBED000uLL, v5)
        && (v67 & 1) != 0
        && ((v67 & 0x20) == 0 || (v67 & 0x42) == 0) )
      {
        v68 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v68 )
        {
          v69 = *((_QWORD *)&v68->Flink + ((v66 >> 3) & 0x1FF));
          v70 = v67 | 0x20;
          if ( (v69 & 0x20) == 0 )
            v70 = v67;
          v67 = v70;
          if ( (v69 & 0x42) != 0 )
            v67 = v70 | 0x42;
        }
      }
      v71 = (_BYTE *)(v60 + 48 * ((v67 >> 12) & 0xFFFFFFFFFLL));
      if ( v22 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        WsleContents = (*v71 >> 1) & 7;
        v123 = v40;
        if ( !(unsigned int)MiEvictPageTableLock(v119, ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, ZeroPte, 0LL) )
          return 0LL;
        goto LABEL_209;
      }
      v73 = *(_QWORD *)v66;
      v123 = 1;
      if ( v66 >= 0xFFFFF6FB7DBED000uLL
        && v66 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v73, 0xFFFFF6FB7DBED000uLL, v71)
        && (v73 & 1) != 0
        && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
      {
        v74 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v74 )
        {
          v75 = *((_QWORD *)&v74->Flink + ((v66 >> 3) & 0x1FF));
          v76 = v73 | 0x20;
          if ( (v75 & 0x20) == 0 )
            v76 = v73;
          v73 = v76;
          if ( (v75 & 0x42) != 0 )
            v73 = v76 | 0x42;
        }
      }
      WsleContents = HIBYTE(v73) & 0xF | (16 * ((v73 >> 60) & 7));
      v77 = MI_PFN_IS_PROTO(v71);
      v80 = v79;
      LOBYTE(v80) = v77 == 0;
      v120 = v80;
      if ( (WsleContents & 0xF) == 8 )
      {
        MiUnlockWsle(v119, (__int64)(a2 << 25) >> 16, v78);
        WsleContents = MiGetWsleContents(v81, (__int64)(a2 << 25) >> 16);
      }
      v82 = ZeroPte;
      v83 = *(_QWORD *)v66;
      v84 = 0xFFFFF6FB7DBED000uLL;
      v85 = 0xFFFFF6FB7DBED000uLL;
      v86 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v66 >= 0xFFFFF6FB7DBED000uLL )
      {
        v85 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v66 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, ZeroPte, v83, 0xFFFFF6FB7DBED7F8uLL) )
            v83 |= 0x20uLL;
        }
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        v83 = 32LL;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v83 & 0x20) != 0 )
      {
        if ( v66 >= v84 && v66 <= v86 )
        {
          if ( (unsigned int)MiPteHasShadow(v85, v82, v83, v86) )
          {
            if ( !HIBYTE(word_140C4DE88) && (v82 & 1) != 0 )
              v82 |= 0x8000000000000000uLL;
            *(_QWORD *)v66 = v82;
            MiWritePteShadow(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v82);
            goto LABEL_209;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v82 & 1) != 0 )
          {
            v82 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v66 = v82;
      }
      else
      {
        v87 = _InterlockedExchange64((volatile __int64 *)v66, v82);
        if ( v66 >= v84 && v66 <= v86 )
          MiWritePteShadow(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v82);
        if ( (v87 & 0x20) == 0 )
        {
LABEL_210:
          v88 = WsleContents;
          v38 = v119;
          MiRemoveWsle((_DWORD)v119, (__int64)(a2 << 25) >> 16, 1, v88, 10, v120);
          if ( v123 )
          {
            v36 = ((v22 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v89 = 0xFFFFF6FB7DBED000uLL;
            v90 = *(_QWORD *)v36;
            v37 = 0xFFFFF6FB7DBED7F8uLL;
            if ( v36 >= 0xFFFFF6FB7DBED000uLL
              && v36 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(v35, v90, v36, 0xFFFFF6FB7DBED7F8uLL)
              && (v90 & 1) != 0
              && ((v90 & 0x20) == 0 || (v90 & 0x42) == 0) )
            {
              v91 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v91 )
              {
                v92 = *((_QWORD *)&v91->Flink + ((v36 >> 3) & 0x1FF));
                v36 = v90 | 0x20;
                if ( (v92 & 0x20) == 0 )
                  v36 = v90;
                v90 = v36;
                if ( (v92 & 0x42) != 0 )
                  v90 = v36 | 0x42;
              }
            }
            v127 = v90;
            v35 = (unsigned __int64)&v127;
            if ( (unsigned __int64)&v127 >= v89 )
            {
              v35 = (unsigned __int64)&v127;
              if ( (unsigned __int64)&v127 <= v37
                && (unsigned int)MiPteHasShadow(&v127, v90, v36, v37)
                && (v90 & 1) != 0
                && ((v90 & 0x20) == 0 || (v90 & 0x42) == 0) )
              {
                v35 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
                v36 = *(_QWORD *)(v35 + 1928);
                if ( v36 )
                {
                  v93 = *(_QWORD *)(v36 + 8 * (((unsigned __int64)&v127 >> 3) & 0x1FF));
                  v36 = v90 | 0x20;
                  v35 = (unsigned __int8)v93;
                  LOBYTE(v35) = v93 & 0x20;
                  if ( (v93 & 0x20) == 0 )
                    v36 = v90;
                  v90 = v36;
                  if ( (v93 & 0x42) != 0 )
                    v90 = v36 | 0x42;
                }
              }
            }
            v34 = (v90 >> 12) & 0xFFFFFFFFFLL;
            v94 = (unsigned __int64 *)(48 * v34 - 0x58000000000LL);
            if ( ((*(_DWORD *)v94 >> 4) & 0x3FF) == 0 )
            {
              MiCountWslesInPageTable(v35, (__int64)(a2 << 25) >> 16, v133);
              LOBYTE(v35) = 8;
              while ( 1 )
              {
                LOBYTE(v35) = v35 - 1;
                v34 = (unsigned int)v133[(unsigned __int8)v35];
                if ( (_DWORD)v34 )
                  break;
                if ( !(_BYTE)v35 )
                  goto LABEL_239;
              }
              v34 &= 0x3FFu;
              v35 = *v94 & 0xFFFFFFFFFFFE000FuLL | (16 * (v34 | ((v35 & 7) << 10)));
              *v94 = v35;
            }
          }
LABEL_239:
          if ( (_DWORD)v128 != 1 )
            goto LABEL_98;
          if ( *(_DWORD *)v20 != 1 )
          {
            v35 = *(unsigned __int8 *)(v20 + 4);
            if ( (v35 & 8) == 0 )
            {
              v37 = 0xFFFFF68000000000uLL;
              if ( v22 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL )
              {
                LOBYTE(v35) = v35 | 8;
                *(_BYTE *)(v20 + 4) = v35;
              }
            }
          }
          v95 = *(_DWORD *)(v20 + 12);
          v36 = *(unsigned __int8 *)(v20 + 4);
          if ( v95 )
          {
            if ( (v36 & 4) == 0 )
            {
              v96 = v20 + 8LL * (v95 - 1);
              v97 = *(_QWORD *)(v96 + 24);
              if ( (v97 & 0xC00) == 0 )
              {
                v37 = *(_QWORD *)(v96 + 24) & 0x3FFLL;
                v35 = v97 & 0xFFFFFFFFFFFFF000uLL;
                v34 = (v97 & 0xFFFFFFFFFFFFF000uLL) + ((v37 + 1) << 12);
                if ( v34 == v22 )
                {
                  v35 = v37 + 1;
                  if ( v37 + 1 >= v37 && v35 <= 0x3FF )
                  {
                    ++*(_QWORD *)(v20 + 16);
                    v35 = v97 ^ ((unsigned __int16)v97 ^ (unsigned __int16)(v97 + 1)) & 0x3FF;
                    *(_QWORD *)(v96 + 24) = v35;
                    goto LABEL_98;
                  }
                }
              }
            }
            if ( (v36 & 4) == 0 )
            {
              v36 = v20 + 8LL * (v95 - 1);
              v98 = *(_QWORD *)(v36 + 24);
              if ( (v98 & 0xC00) == 0 )
              {
                v35 = v22 + 4096;
                v34 = v98 & 0xFFFFFFFFFFFFF000uLL;
                if ( (v98 & 0xFFFFFFFFFFFFF000uLL) == v22 + 4096 )
                {
                  v35 = *(_QWORD *)(v36 + 24) & 0x3FFLL;
                  v34 = v35 + 1;
                  if ( v35 + 1 >= v35 && v34 <= 0x3FF )
                  {
                    ++*(_QWORD *)(v20 + 16);
                    v35 = (v98 - 4096) ^ ((unsigned __int16)(v98 - 4096) ^ (unsigned __int16)(v98 - 4096 + 1)) & 0x3FF;
                    *(_QWORD *)(v36 + 24) = v35;
                    goto LABEL_98;
                  }
                }
              }
            }
          }
          if ( v95 < *(_DWORD *)(v20 + 8) )
          {
            while ( 1 )
            {
              v34 = 1024LL;
              if ( (unsigned __int64)(v65 - 1) <= 0x3FF )
                v34 = v65;
              v65 -= v34;
              v99 = v22 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v34 - 1) & 0x3FF;
              v22 += v34 << 12;
              *(_QWORD *)(v20 + 8LL * (unsigned int)(*(_DWORD *)(v20 + 12))++ + 24) = v99;
              v35 = *(unsigned int *)(v20 + 12);
              *(_QWORD *)(v20 + 16) += v34;
              if ( (_DWORD)v35 == *(_DWORD *)(v20 + 8) && (*(_BYTE *)(v20 + 4) & 4) == 0 )
              {
                qsort((void *)(v20 + 24), (unsigned int)v35, 8uLL, MiTbFlushSort);
                MiCompressTbFlushList(v20);
                v100 = *(unsigned int *)(v20 + 12);
                if ( (_DWORD)v100 == *(_DWORD *)(v20 + 8) )
                  break;
              }
              if ( !v65 )
                goto LABEL_98;
            }
            if ( v65 )
            {
              *(_BYTE *)(v20 + 5) = 1;
              *(_QWORD *)(v20 + 16) = v100;
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
      LODWORD(v128) = 1;
      goto LABEL_210;
    }
    if ( (v21 & 2) != 0 && (v19->Affinity.Bitmap[12] & 0x1000000) == 0 && dword_140C4E6A8 )
    {
      if ( v22 < 0xFFFFF68000000000uLL || v22 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v25 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v26 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL
          && v25 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          v27 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v27 )
          {
            v28 = *((_QWORD *)&v27->Flink + ((v25 >> 3) & 0x1FF));
            v29 = HIBYTE(*(_QWORD *)v25);
            if ( (v28 & 0x20) == 0 )
              v29 = HIBYTE(v26);
            HIBYTE(v26) = v29;
            if ( (v28 & 0x42) != 0 )
              HIBYTE(v26) = v29;
          }
        }
        if ( (HIBYTE(v26) & 0xF) == 7 )
          goto LABEL_74;
        v19 = v119;
      }
      if ( (*(_BYTE *)a2 & 0x20) != 0 )
        MiLogPageAccess(v19, a2);
    }
LABEL_74:
    v30 = v3;
    if ( MiPteInShadowRange((unsigned __int64)&v129)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      v31 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v31 )
      {
        v30 = v3 | 0x20;
        v32 = *((_QWORD *)&v31->Flink + (((unsigned __int64)&v129 >> 3) & 0x1FF));
        if ( (v32 & 0x20) == 0 )
          v30 = v3;
        if ( (v32 & 0x42) != 0 )
          v30 |= 0x42uLL;
      }
    }
    v33 = 48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    Process = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(v33 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
      if ( (v21 & 1) != 0 && (unsigned int)MiGetPfnPriority(v33) - 3 <= 2 )
        MiLockSetPfnPriority(Process, 2);
      if ( (v21 & 4) != 0
        && !*(_QWORD *)(v18 + 88)
        && (v3 & 0x42) == 0
        && (unsigned int)MI_PFN_IS_PROTO(v33)
        && (*(_BYTE *)(v33 + 34) & 0x10) == 0
        && (unsigned int)MiGetPfnPriority(Process) < 5 )
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
    v106 = HIWORD(v19->Affinity.Bitmap[10]);
    v130 = v3;
    v114 = *(_QWORD *)(qword_140C4E4C8 + 8 * v106);
    if ( (v3 & 4) != 0 || (v3 & 2) != 0 )
      v115 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v130);
    else
      v115 = 0LL;
    v130 = v115;
    if ( v115 )
      MiReleasePageFileInfo(v114, v115, 0LL);
    if ( (v119->Affinity.Bitmap[12] & 7) != 0 )
      goto LABEL_331;
    if ( (v21 & 0x80u) != 0 )
    {
      if ( qword_140C4DDC0 && (v3 & 0x10) == 0 )
        LOWORD(v3) = ~(_WORD)qword_140C4DDC0 & v3;
      if ( (v3 & 0x400) != 0 || (v3 & 0x800) != 0 || (v3 & 4) != 0 )
LABEL_331:
        ++*(_QWORD *)(*(_QWORD *)(v18 + 16) + 24LL);
    }
    v111 = ZeroPte;
    v112 = 0xFFFFF6FB7DBED000uLL;
    if ( a2 < 0xFFFFF6FB7DBED000uLL )
      goto LABEL_343;
    v113 = 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_334;
  }
  v103 = v3;
  if ( qword_140C4DDC0 && (v3 & 0x10) == 0 )
    v103 = v3 & ~qword_140C4DDC0;
  v104 = v103 >> 16;
  v105 = v3;
  if ( qword_140C4DDC0 && (v3 & 0x10) == 0 )
    v105 = v3 & ~qword_140C4DDC0;
  v106 = 0xFFFFFFFFLL;
  if ( HIDWORD(v105) != 0xFFFFFFFF && (v3 & 0x800) != 0 )
  {
    v107 = MiDecrementCombinedPte(v19, v104);
LABEL_308:
    if ( v107 == 3 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v18 + 16) + 8LL);
    }
    else if ( v107 == 5 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL);
    }
    v7 = 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_313;
  }
  v19 = KeGetCurrentThread()->ApcState.Process;
  if ( v19[1].Affinity.Bitmap[12] )
  {
    if ( !MiIsPrototypePteVadLookup(v3) )
    {
      CloneAddress = MiLocateCloneAddress(v19, v108);
      if ( CloneAddress )
      {
        v107 = MiDecrementCloneBlockReference(CloneAddress, v110);
        goto LABEL_308;
      }
    }
  }
LABEL_313:
  v111 = ZeroPte;
  v112 = 0xFFFFF6FB7DBED000uLL;
  if ( a2 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_343;
  v113 = v7;
LABEL_334:
  if ( a2 <= v113 )
  {
    if ( (unsigned int)MiPteHasShadow(v106, v111, v19, 0xFFFFF6FB7DBED000uLL) )
    {
      if ( !HIBYTE(word_140C4DE88) && (v111 & 1) != 0 )
        v111 |= 0x8000000000000000uLL;
      *(_QWORD *)a2 = v111;
      MiWritePteShadow(a2, v111);
      v112 = 0xFFFFF6FB7DBED000uLL;
      goto LABEL_344;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v111 & 1) != 0 )
      v111 |= 0x8000000000000000uLL;
  }
LABEL_343:
  *(_QWORD *)a2 = v111;
LABEL_344:
  if ( (v21 & 0x80u) != 0 && (a2 < v112 || a2 > 0xFFFFF6FB7DBEDFFFuLL) )
  {
    v116 = (__int64 *)(((v22 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    PteShadow = *v116;
    if ( (unsigned __int64)v116 >= v112 && (unsigned __int64)v116 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow((unsigned __int64)v116, *v116);
    v131 = PteShadow;
    if ( (unsigned __int64)&v131 >= v112 && (unsigned __int64)&v131 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow((unsigned __int64)&v131, PteShadow);
    v118 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_DWORD *)(v118 + 16) & 0x3FF0000) == 0 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v118, HIWORD(*(_DWORD *)(v118 + 16)) & 0x3FF, 1uLL);
    v125 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v118 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v125);
      while ( *(__int64 *)(v118 + 24) < 0 );
    }
    *(_QWORD *)(v118 + 16) ^= ((unsigned int)*(_QWORD *)(v118 + 16) ^ (((unsigned int)(*(_QWORD *)(v118 + 16) >> 16) - 1) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v118 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
