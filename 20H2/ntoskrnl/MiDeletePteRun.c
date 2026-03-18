/*
 * XREFs of MiDeletePteRun @ 0x1402C5480
 * Callers:
 *     MiDeleteVaTail @ 0x1402BF6B0 (MiDeleteVaTail.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403F3600 (MiDeleteEmptyPageTableTail.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     MiTryDeleteTransitionPte @ 0x140236A7C (MiTryDeleteTransitionPte.c)
 *     MiGetPagingFileOffset @ 0x1402397FC (MiGetPagingFileOffset.c)
 *     MiDereferenceIoPages @ 0x140261608 (MiDereferenceIoPages.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiGetContainingPageTable @ 0x14029C940 (MiGetContainingPageTable.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1402ACBC0 (MiInsertProtectedStandbyPage.c)
 *     MiDeleteClusterPage @ 0x1402AEC40 (MiDeleteClusterPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1402C2F20 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteBatch @ 0x1402C6C70 (MiDeleteBatch.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x140344118 (MiLocateCloneAddress.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140349584 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReleasePageFileSpace @ 0x14034D3F4 (MiReleasePageFileSpace.c)
 *     MiDecrementCombinedPte @ 0x140366C14 (MiDecrementCombinedPte.c)
 *     MiDoubleUnlockMdlPage @ 0x14037F308 (MiDoubleUnlockMdlPage.c)
 *     MiIsPfnLocked @ 0x140380A68 (MiIsPfnLocked.c)
 *     MiPteIsSessionDynamicBuffer @ 0x14038BD68 (MiPteIsSessionDynamicBuffer.c)
 *     MiWriteTopLevelPxe @ 0x14039E2CC (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F30EC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x14052B6EC (MiShowBadMapper.c)
 *     MiDecrementCloneBlockReference @ 0x1405583B8 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeletePteRun(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  int v10; // r10d
  __int64 v11; // r11
  __int64 v12; // r9
  ULONG_PTR v13; // r14
  __int64 v14; // r12
  __int64 v15; // rbx
  unsigned __int64 Process; // rcx
  struct _LIST_ENTRY *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // r15d
  unsigned __int64 v21; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // edi
  ULONG_PTR v26; // r14
  ULONG_PTR v27; // rbx
  __int64 v28; // rsi
  struct _LIST_ENTRY *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r12
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // r8
  unsigned __int64 v36; // r9
  int v37; // ebx
  BOOL v38; // r15d
  ULONG_PTR v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r11
  ULONG_PTR v42; // r15
  ULONG_PTR v43; // rdi
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // r10
  struct _LIST_ENTRY *v49; // rax
  __int64 v50; // rax
  struct _LIST_ENTRY *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rbx
  __int64 v56; // rcx
  __int64 v57; // rbx
  char v58; // dl
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rdi
  unsigned __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rbx
  signed __int8 v69; // cf
  char v70; // dl
  char v71; // r8
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // edi
  __int64 v75; // rdx
  unsigned __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  unsigned int v80; // r10d
  unsigned __int64 v81; // rdi
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // rdx
  struct _LIST_ENTRY *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  unsigned __int64 v87; // r12
  __int64 v88; // r9
  unsigned __int64 v89; // rdi
  int v90; // r8d
  int v91; // edx
  unsigned __int64 ValidPte; // rax
  __int64 v93; // rdx
  _KPROCESS *v94; // rcx
  __int64 v95; // r9
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 v97; // rbx
  unsigned __int64 *MmInternal; // r15
  unsigned __int64 UltraMapping; // r11
  unsigned __int64 *v100; // r8
  __int64 v101; // r12
  __int64 v102; // r8
  unsigned __int64 v103; // r11
  __int64 v104; // rax
  struct _LIST_ENTRY *v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // rdx
  __int64 v110; // rdx
  char v111; // al
  char v112; // al
  char v113; // al
  __int64 v114; // rbx
  __int64 v115; // rax
  unsigned __int64 v116; // rdi
  int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // rax
  char v120; // al
  unsigned int v121; // edx
  unsigned __int64 v122; // r8
  __int64 v123; // r8
  __int64 v124; // rdx
  int v125; // r11d
  ULONG_PTR v126; // rbx
  unsigned __int64 v127; // rbx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 result; // rax
  ULONG_PTR v133; // r9
  unsigned int v134; // [rsp+30h] [rbp-D0h]
  _QWORD *v136; // [rsp+40h] [rbp-C0h]
  char v137; // [rsp+48h] [rbp-B8h]
  __int64 v138; // [rsp+50h] [rbp-B0h]
  int v139; // [rsp+60h] [rbp-A0h]
  unsigned int v140; // [rsp+64h] [rbp-9Ch]
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v142; // [rsp+70h] [rbp-90h]
  int v143; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h]
  __int64 v145; // [rsp+88h] [rbp-78h] BYREF
  BOOL v146; // [rsp+90h] [rbp-70h]
  int v147; // [rsp+94h] [rbp-6Ch]
  unsigned __int64 v148; // [rsp+98h] [rbp-68h]
  int v149; // [rsp+A0h] [rbp-60h] BYREF
  int v150; // [rsp+A4h] [rbp-5Ch] BYREF
  int v151; // [rsp+A8h] [rbp-58h] BYREF
  int v152; // [rsp+ACh] [rbp-54h] BYREF
  unsigned __int64 v153; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v154; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v155; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v156; // [rsp+C8h] [rbp-38h]
  __int64 v157; // [rsp+D0h] [rbp-30h]
  __int64 v158; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v159; // [rsp+E0h] [rbp-20h]
  ULONG_PTR v160; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v161; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v162; // [rsp+F8h] [rbp-8h]
  __int64 v163; // [rsp+100h] [rbp+0h]
  __int128 v164; // [rsp+108h] [rbp+8h] BYREF
  __int64 v165; // [rsp+118h] [rbp+18h]
  __int128 v166; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v167[8]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v168[2]; // [rsp+1B0h] [rbp+B0h] BYREF

  v2 = *(_QWORD **)(a2 + 16);
  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v165 = 0LL;
  v137 = *(_BYTE *)(a2 + 108);
  v6 = *(_QWORD *)(a2 + 88);
  v7 = *(unsigned int *)(a2 + 104);
  v159 = v6;
  v164 = 0LL;
  v136 = v2;
  v166 = 0LL;
  v161 = v3;
  memset(v167, 0, sizeof(v167));
  v162 = v4;
  v140 = v7;
  v8 = 0LL;
  v9 = (__int64)(v3 << 25) >> 16;
  if ( v9 < 0xFFFFF68000000000uLL || (v10 = 1, v9 > 0xFFFFF6FFFFFFFFFFuLL) )
    v10 = 0;
  v11 = a1 - 1664;
  v12 = 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    v11 = 0LL;
  v139 = v10;
  v13 = 0LL;
  v138 = v11;
  v157 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v143 = 0;
  v134 = 0;
  v148 = 0LL;
  v158 = 0LL;
  if ( v3 <= v4 )
  {
    v14 = a1;
    while ( 1 )
    {
      v15 = *(_QWORD *)v3;
      Process = 0xFFFFF6FB7DBED7F8uLL;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v7, v8, v12)
          && (v15 & 1) != 0
          && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v17 = *(struct _LIST_ENTRY **)(Process + 1928);
          if ( v17 )
          {
            v18 = *((_QWORD *)&v17->Flink + ((v3 >> 3) & 0x1FF));
            v19 = v15 | 0x20;
            Process = (unsigned __int8)v18;
            LOBYTE(Process) = v18 & 0x20;
            if ( (v18 & 0x20) == 0 )
              v19 = v15;
            v15 = v19;
            if ( (v18 & 0x42) != 0 )
              v15 = v19 | 0x42;
          }
        }
        v7 = v140;
      }
      if ( v15 )
      {
        v20 = v7 & 0x80;
        v147 = v20;
        if ( (v7 & 0x80) != 0 && (v3 < 0xFFFFF6FB7DBED000uLL || v3 > 0xFFFFF6FB7DBEDFFFuLL) )
        {
          v12 = (unsigned int)(v12 + 1);
          v134 = v12;
          if ( !v13 )
          {
            v7 = ((((__int64)((v3 << 25) - v8) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
            v21 = *(_QWORD *)v7;
            if ( v7 >= 0xFFFFF6FB7DBED000uLL
              && v7 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(Process, v7, v21, v12)
              && (v21 & 1) != 0
              && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v23 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
                v7 = v21 | 0x20;
                if ( (v23 & 0x20) == 0 )
                  v7 = v21;
                v21 = v7;
                if ( (v23 & 0x42) != 0 )
                  v21 = v7 | 0x42;
              }
            }
            v153 = v21;
            if ( (unsigned __int64)&v153 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)&v153 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(&v153, v7, v21, v12)
              && (v21 & 1) != 0
              && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
            {
              v7 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v7 )
              {
                v24 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)&v153 >> 3) & 0x1FF));
                v7 = v21 | 0x20;
                if ( (v24 & 0x20) == 0 )
                  v7 = v21;
                v21 = v7;
                if ( (v24 & 0x42) != 0 )
                  v21 = v7 | 0x42;
              }
            }
            v8 = (v21 >> 12) & 0xFFFFFFFFFLL;
            v158 = 48 * v8 - 0x58000000000LL;
          }
        }
        v25 = v12;
        if ( (v15 & 0x400) != 0 )
        {
          LODWORD(v26) = 0;
          v142 = 0LL;
          v27 = v15 & 0xFFFFFFFFFFFFFBFEuLL | 1;
          BugCheckParameter2 = 0LL;
          BugCheckParameter3 = v27;
          v28 = 0LL;
          v160 = 0LL;
          if ( (unsigned __int64)&BugCheckParameter3 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&BugCheckParameter3 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(&BugCheckParameter3, v7, v8, v12)
            && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
          {
            v29 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v29 )
            {
              v30 = *((_QWORD *)&v29->Flink + (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
              if ( (v30 & 0x20) != 0 )
                v27 |= 0x20uLL;
              if ( (v30 & 0x42) != 0 )
                v27 |= 0x42uLL;
            }
            else
            {
              v27 = BugCheckParameter3;
            }
          }
          v31 = (v27 >> 12) & 0xFFFFFFFFFLL;
          v32 = 48 * v31;
          v163 = 48 * v31;
          if ( (*(_QWORD *)(48 * v31 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
            goto LABEL_314;
          v26 = v32 - 0x58000000000LL;
          if ( (v140 & 0x60) != 0 && !v10 )
          {
            MiDeleteBatch(&v166);
            if ( !(unsigned int)MiIsPfnLocked(v32 - 0x58000000000LL) )
              MiShowBadMapper(v31);
            if ( (v140 & 0x40) != 0 )
              MiDoubleUnlockMdlPage(v32 - 0x58000000000LL);
            v34 = 48 * MiGetContainingPageTable(v3) - 0x58000000000LL;
            v37 = 4;
            LODWORD(v26) = 0;
            v38 = 0;
            goto LABEL_292;
          }
          if ( v32 == 0x58000000000LL )
          {
LABEL_314:
            MiDeleteBatch(&v166);
            MiDereferenceIoPages(1, v31, 1uLL);
            v34 = 48 * MiGetContainingPageTable(v3) - 0x58000000000LL;
            v37 = 4;
            v38 = v26;
            goto LABEL_292;
          }
          if ( (*(_BYTE *)(a1 + 184) & 7) == 0
            && !v10
            && (v31 & 0xF) == 0
            && ((__int64)(v162 - v3) >> 3) + 1 >= 16
            && (unsigned int)MiDeleteClusterPage(v3, (__int64)&v166) == 1 )
          {
            v14 = a1;
            v12 = v25 + 15;
            v3 += 120LL;
            if ( !v20 )
              v12 = v25;
            v134 = v12;
LABEL_368:
            v2 = v136;
            goto LABEL_369;
          }
          v39 = *(_QWORD *)(v26 + 8) | 0x8000000000000000uLL;
          if ( (unsigned int)MI_PFN_IS_PROTO(v32 - 0x58000000000LL) )
          {
            if ( (*(_QWORD *)(v26 + 40) & 0x1000000000LL) != 0 || v40 <= 0 )
            {
              v44 = 0xFFFFF68000000000uLL;
              if ( v3 <= 0xFFFFF6BFFFFFFF78uLL && v3 >= 0xFFFFF68000000000uLL && *(_QWORD *)(v41 + 1264) )
              {
                v160 = v39;
                BugCheckParameter2 = MiLocateCloneAddress(v41, v39);
                v43 = BugCheckParameter2;
                if ( BugCheckParameter2 )
                {
                  v45 = MiDeleteBatch(&v166);
                  v44 = (unsigned __int64)v136;
                  v136[1] += v45;
                }
              }
              else
              {
                v43 = 0LL;
              }
              v42 = 0LL;
            }
            else
            {
              v142 = v39;
              v42 = v39;
              v43 = 0LL;
              v136[1] += MiDeleteBatch(&v166);
            }
            v46 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v36 = 0xFFFFF6FB7DBED000uLL;
            v47 = *(_QWORD *)v46;
            v48 = 0xFFFFF6FB7DBED7F8uLL;
            if ( v46 >= 0xFFFFF6FB7DBED000uLL
              && v46 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(v44, v46, v47, 0xFFFFF6FB7DBED000uLL)
              && (v47 & 1) != 0
              && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
            {
              v49 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v49 )
              {
                v50 = *((_QWORD *)&v49->Flink + ((v46 >> 3) & 0x1FF));
                v46 = v47 | 0x20;
                if ( (v50 & 0x20) == 0 )
                  v46 = v47;
                v47 = v46;
                if ( (v50 & 0x42) != 0 )
                  v47 = v46 | 0x42;
              }
            }
            v154 = v47;
            if ( (unsigned __int64)&v154 >= v36
              && (unsigned __int64)&v154 <= v48
              && (unsigned int)MiPteHasShadow(&v154, v46, v47, v36)
              && (v47 & 1) != 0
              && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
            {
              v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v51 )
              {
                v52 = *((_QWORD *)&v51->Flink + (((unsigned __int64)&v154 >> 3) & 0x1FF));
                v53 = v47 | 0x20;
                if ( (v52 & 0x20) == 0 )
                  v53 = v47;
                v47 = v53;
                if ( (v52 & 0x42) != 0 )
                  v47 = v53 | 0x42;
              }
            }
            v54 = (v47 >> 12) & 0xFFFFFFFFFLL;
            v55 = 48 * v54 - 0x58000000000LL;
            v156 = v55;
            if ( !(_BYTE)v166 )
              goto LABEL_116;
            if ( v55 != *((_QWORD *)&v166 + 1)
              || *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL)) != v157
              || _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
            {
              v136[1] += MiDeleteBatch(&v166);
            }
            LOBYTE(v56) = v166;
            if ( !(_BYTE)v166 )
            {
LABEL_116:
              *((_QWORD *)&v166 + 1) = v55;
              v149 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v149);
                while ( *(__int64 *)(v26 + 24) < 0 );
              }
              LOBYTE(v56) = v166;
            }
            v57 = a1;
            if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
            {
              v58 = *(_BYTE *)(v26 + 34);
              if ( (v58 & 7) == 6
                && (*(_DWORD *)(v26 + 16) & 0x400LL) == 0
                && ((BugCheckParameter3 & 0x42) != 0 || (v58 & 0x10) != 0)
                && !v42
                && !v43 )
              {
                v56 = (unsigned __int8)v56;
                *((_QWORD *)v167 + (unsigned __int8)v56) = BugCheckParameter3;
                if ( !(_BYTE)v166 )
                {
                  v56 = (*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL;
                  v148 = *(_QWORD *)(qword_140C4E4C8 + 8 * v56);
                }
                v59 = ZeroPte;
                if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
                {
                  if ( (unsigned int)MiPteHasShadow(v56, ZeroPte, v54, v36) )
                  {
                    if ( !HIBYTE(word_140C4DE88) && (v59 & 1) != 0 )
                      v59 |= 0x8000000000000000uLL;
                    *(_QWORD *)v3 = v59;
                    MiWritePteShadow(v3, v59);
LABEL_140:
                    LOBYTE(v166) = v166 + 1;
                    if ( (_BYTE)v166 == 16 )
                    {
                      v60 = MiDeleteBatch(&v166);
                      v2 = v136;
                      v14 = a1;
                      v12 = v134;
                      v136[1] += v60;
                      goto LABEL_369;
                    }
                    v14 = a1;
                    goto LABEL_367;
                  }
                  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                    && (v59 & 1) != 0 )
                  {
                    v59 |= 0x8000000000000000uLL;
                  }
                }
                *(_QWORD *)v3 = v59;
                goto LABEL_140;
              }
            }
            if ( (_BYTE)v56 )
            {
              BYTE1(v166) = 1;
              v61 = MiDeleteBatch(&v166);
              v62 = v136;
              BYTE1(v166) = 0;
              v136[1] += v61;
            }
            else
            {
              v62 = v136;
            }
          }
          else
          {
            if ( v26 == qword_140C4EBE0 )
            {
              v63 = ZeroPte;
              if ( MiPteInShadowRange(v3) )
              {
                if ( (unsigned int)MiPteHasShadow(v65, v64, v66, v67) )
                {
                  if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
                    v63 = ZeroPte | 0x8000000000000000uLL;
                  *(_QWORD *)v3 = v63;
                  MiWritePteShadow(v3, v63);
                  v14 = a1;
                  goto LABEL_367;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (ZeroPte & 1) != 0 )
                {
                  v63 = ZeroPte | 0x8000000000000000uLL;
                }
              }
              v14 = a1;
              *(_QWORD *)v3 = v63;
LABEL_367:
              v12 = v134;
              goto LABEL_368;
            }
            v62 = v136;
            v136[1] += MiDeleteBatch(&v166);
            if ( v39 != v3 )
              KeBugCheckEx(0x1Au, 0x403uLL, v3, BugCheckParameter3, *(_QWORD *)(v26 + 8));
            v68 = 48 * (*(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL);
            ++v136[3];
            v150 = 0;
            v69 = _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL);
            v156 = v68 - 0x58000000000LL;
            if ( v69 )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v150);
                while ( *(__int64 *)(v26 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
            }
            *(_QWORD *)(v26 + 24) |= 0x4000000000000000uLL;
            if ( v137 && v139 )
            {
              v164 = 0LL;
              v165 = 0LL;
              MiIdentifyPfn((__m128i *)(v32 - 0x58000000000LL), (unsigned __int64 *)&v164);
              v143 = 1;
            }
            v57 = a1;
            if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && ((*(_QWORD *)(v26 + 40) >> 60) & 7) == 2 )
              *(_QWORD *)(v26 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
          }
          v70 = *(_BYTE *)(v26 + 34);
          if ( (v70 & 7) != 6 )
            MiBadShareCount(v32 - 0x58000000000LL);
          v148 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL));
          if ( (BugCheckParameter3 & 0x42) != 0 && (v70 & 0x10) == 0 )
          {
            v71 = v70;
            if ( (*(_DWORD *)(v26 + 16) & 0x400LL) == 0 && (v70 & 8) == 0 )
            {
              v72 = MiCapturePageFileInfoInline(v26 + 16, 1LL);
              v71 = *(_BYTE *)(v26 + 34);
              v28 = v72;
            }
            *(_BYTE *)(v26 + 34) = v71 | 0x10;
          }
          if ( (*(_BYTE *)(v57 + 184) & 7) != 0 && (unsigned int)MI_PFN_IS_PROTO(v32 - 0x58000000000LL) )
          {
            v73 = *(_QWORD *)(v26 + 16);
            if ( (v73 & 0x400) == 0 || (BugCheckParameter3 & 0x200) != 0 )
              goto LABEL_181;
            if ( qword_140C4DDC0 && (v73 & 0x10) == 0 )
              v73 &= ~qword_140C4DDC0;
            if ( (*(_DWORD *)(*(_QWORD *)(v73 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_181:
              ++v62[3];
          }
          v74 = v139;
          v35 = 0LL;
          v146 = 0;
          v37 = 4;
          v38 = 0;
          v33 = 0x3FFFFFFFFFFFFFFFLL;
          if ( v139 && v147 )
          {
            v38 = (*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000;
            v146 = v38;
          }
          v75 = *(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v26 + 24) = v75;
          if ( (v75 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
          {
            if ( v139 )
            {
              v37 = 2;
              if ( (v140 & 0x100) == 0 )
                *(_QWORD *)v26 &= ~1uLL;
            }
LABEL_287:
            if ( v38 )
              MiChargeCommit(v148, 1uLL, 4u);
            _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            LODWORD(v26) = 0;
            if ( v143 )
            {
              v168[1] = 24LL;
              v168[0] = &v164;
              EtwTraceKernelEvent((unsigned int)v168, 1, 536870913, 631, 289413890);
              v143 = 0;
            }
            v34 = v156;
LABEL_292:
            if ( v34 )
            {
              v151 = v26;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v151);
                while ( *(__int64 *)(v34 + 24) < 0 );
              }
              if ( (*(_BYTE *)(v34 + 34) & 7) != 6 )
                MiBadShareCount(v34);
              v33 = *(_QWORD *)(v34 + 24);
              v35 = 0x3FFFFFFFFFFFFFFFLL;
              *(_QWORD *)(v34 + 24) = v33 ^ (v33 ^ ((v33 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0x3FFFFFFFFFFFFFFFLL;
              if ( (v33 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
                MiPfnShareCountIsZero(v34, 0LL);
              _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v116 = v148;
            if ( v28 )
              MiReleasePageFileInfo(v148, v28, 1LL);
            if ( v142 )
            {
              v117 = MiDecrementCombinedPte(v138 + 1664, v142);
              goto LABEL_317;
            }
            if ( BugCheckParameter2 )
            {
              v117 = MiDecrementCloneBlockReference(BugCheckParameter2, v160);
LABEL_317:
              v37 = v117;
            }
            if ( v38 )
              goto LABEL_325;
            if ( v37 == 3 )
            {
              if ( (*(_BYTE *)(a1 + 184) & 7) == 0 || v116 == v157 )
              {
                v2 = v136;
                ++v136[1];
                goto LABEL_326;
              }
LABEL_325:
              v2 = v136;
              goto LABEL_326;
            }
            v2 = v136;
            if ( v37 == 5 )
              ++v136[2];
LABEL_326:
            if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && !(unsigned int)MiPteIsSessionDynamicBuffer(v3) )
              ++*v2;
            if ( v3 < 0xFFFFF6FB7DBED000uLL || v3 > 0xFFFFF6FB7DBEDFFFuLL || (*(_BYTE *)(a1 + 184) & 7) == 0 )
            {
              v124 = ZeroPte;
              if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                if ( (unsigned int)MiPteHasShadow(v33, ZeroPte, v35, v36) )
                {
                  if ( !HIBYTE(word_140C4DE88) && (v124 & 1) != 0 )
                    v124 |= 0x8000000000000000uLL;
                  *(_QWORD *)v3 = v124;
                  MiWritePteShadow(v3, v124);
                  v12 = v134;
                  v14 = a1;
                  goto LABEL_369;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v124 & 1) != 0 )
                {
                  v124 |= 0x8000000000000000uLL;
                }
              }
              v14 = a1;
              v12 = v134;
              *(_QWORD *)v3 = v124;
LABEL_369:
              v8 = 0LL;
              goto LABEL_370;
            }
            MiWriteTopLevelPxe(v3, ZeroPte);
            v14 = a1;
            goto LABEL_333;
          }
          if ( !(unsigned int)MI_PFN_IS_PROTO(v32 - 0x58000000000LL) )
            goto LABEL_258;
          v81 = *(_QWORD *)(v26 + 16);
          v82 = v26 + 16;
          v145 = v78;
          if ( v26 + 16 >= 0xFFFFF6FB7DBED000uLL
            && v82 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(v77, v82, v78, v79)
            && (v81 & 1) != 0
            && ((v81 & 0x20) == 0 || (v81 & 0x42) == 0) )
          {
            v84 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v84 )
            {
              v85 = *((_QWORD *)&v84->Flink + ((v83 >> 3) & 0x1FF));
              v86 = v81 | 0x20;
              if ( (v85 & 0x20) == 0 )
                v86 = v81;
              v81 = v86;
              if ( (v85 & 0x42) != 0 )
                v81 = v86 | 0x42;
            }
          }
          v87 = *(_QWORD *)(v26 + 8);
          v88 = *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL;
          v89 = v81 >> 5;
          v90 = v80;
          v91 = *(unsigned __int8 *)(48 * v88 - 0x57FFFFFFFDELL) >> 6;
          if ( !v91 || v91 == 3 )
          {
            v90 = 12;
          }
          else if ( v91 == 2 )
          {
            v90 = 28;
          }
          ValidPte = MiMakeValidPte(0LL, *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL, v90 | 0xA0000000, v88);
          CurrentPrcb = KeGetCurrentPrcb();
          v97 = ValidPte;
          MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
          if ( !MmInternal
            || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
                v94 = (_KPROCESS *)0xFFFFF68000000000LL,
                v100 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                MmInternal[1543] = (unsigned __int64)v100,
                !UltraMapping) )
          {
            UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                         + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
            v100 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          }
          if ( (unsigned __int64)v100 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v100 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)MiPteHasShadow(v94, v93, v100, v95) )
            {
              if ( !HIBYTE(word_140C4DE88) && (v97 & 1) != 0 )
                v97 |= 0x8000000000000000uLL;
              *v100 = v97;
              MiWritePteShadow(v100, v97);
LABEL_220:
              v101 = (v87 >> 3) & 0x1FF;
              v102 = *(_QWORD *)(UltraMapping + 8 * v101);
              v103 = UltraMapping + 8 * v101;
              if ( v103 >= 0xFFFFF6FB7DBED000uLL
                && v103 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow(v94, v93, v102, v95)
                && (v102 & 1) != 0
                && ((v102 & 0x20) == 0 || (v102 & 0x42) == 0) )
              {
                v93 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v93 )
                {
                  v104 = *(_QWORD *)(v93 + 8 * ((v103 >> 3) & 0x1FF));
                  v93 = v102 | 0x20;
                  if ( (v104 & 0x20) == 0 )
                    v93 = v102;
                  v102 = v93;
                  if ( (v104 & 0x42) != 0 )
                    v102 = v93 | 0x42;
                }
              }
              v145 = v102;
              if ( (unsigned __int64)&v145 >= 0xFFFFF6FB7DBED000uLL
                && (unsigned __int64)&v145 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow(&v145, v93, v102, v95)
                && (v102 & 1) != 0
                && ((v102 & 0x20) == 0 || (v102 & 0x42) == 0) )
              {
                v105 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v105 )
                {
                  v106 = *((_QWORD *)&v105->Flink + (((unsigned __int64)&v145 >> 3) & 0x1FF));
                  v107 = v102 | 0x20;
                  if ( (v106 & 0x20) == 0 )
                    v107 = v102;
                  v102 = v107;
                  if ( (v106 & 0x42) != 0 )
                    v102 = v107 | 0x42;
                }
              }
              v108 = v102 & 0xFFFFFFFFF000LL;
              v109 = v108 | (32 * (v89 & 0x1F | 0x40));
              if ( qword_140C4DDC0 )
              {
                if ( (v109 & qword_140C4DDC0) != 0 )
                  v109 |= 0x10uLL;
                else
                  v109 |= qword_140C4DDC0;
              }
              v145 = v109;
              if ( v103 >= 0xFFFFF6FB7DBED000uLL && v103 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                if ( (unsigned int)MiPteHasShadow(qword_140C4DDC0, v109, v108, v95) )
                {
                  if ( !HIBYTE(word_140C4DE88) && (v109 & 1) != 0 )
                    v109 |= 0x8000000000000000uLL;
                  *(_QWORD *)v103 = v109;
                  MiWritePteShadow(v103, v109);
LABEL_257:
                  MiUnmapPageInHyperSpaceWorker(v103, 0x11u, 0x80000000);
                  v76 = *(_QWORD *)(v26 + 24);
                  v78 = 0LL;
                  v38 = v146;
                  v32 = v163;
                  v3 = v161;
                  v74 = v139;
                  v80 = 4;
LABEL_258:
                  --*(_WORD *)(v26 + 32);
                  v110 = (v76 >> 62) & 1;
                  if ( *(_WORD *)(v26 + 32) )
                  {
                    v111 = *(_BYTE *)(v26 + 34);
                    if ( (_DWORD)v110 )
                    {
                      v112 = v111 | 7;
                    }
                    else if ( (v111 & 0x10) != 0 )
                    {
                      v112 = v111 & 0xF8 | 3;
                    }
                    else
                    {
                      v112 = v111 & 0xF8 | 2;
                    }
                    *(_BYTE *)(v26 + 34) = v112;
                    if ( (*(_DWORD *)(v26 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v26 + 16) )
                      *(_BYTE *)(*(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL)) + 675LL) = 1;
                    v37 = 3;
                    if ( v74 && v147 )
                      v38 = 1;
                    if ( (unsigned int)MI_PFN_IS_PROTO(v26) && !v142 && !BugCheckParameter2 )
                      v37 = 4;
                  }
                  else
                  {
                    if ( (_DWORD)v110 )
                    {
                      v113 = *(_BYTE *)(v26 + 35);
                      if ( (v113 & 0x10) != 0 )
                        *(_BYTE *)(v26 + 35) = v113 & 0xEF;
                      v114 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL));
                      v155 = *(_QWORD *)(v26 + 16);
                      if ( (v155 & 0x400) == 0 )
                      {
                        v115 = (v155 & 4) != 0 || (v155 & 2) != 0 ? MI_READ_PTE_LOCK_FREE((unsigned __int64)&v155) : v78;
                        v155 = v115;
                        if ( v115 )
                          MiReleasePageFileInfo(v114, v115, 0LL);
                      }
                      MiInsertPageInFreeOrZeroedList(v32 / 48, 2);
                    }
                    else
                    {
                      v118 = *(_QWORD *)(v26 + 16);
                      v119 = -9LL;
                      if ( (v118 & 0x400) != 0 )
                        v119 = -2049LL;
                      *(_QWORD *)(v26 + 16) = v118 & v119;
                      v120 = *(_BYTE *)(v26 + 34);
                      if ( (v120 & 0x10) != 0 )
                      {
                        v121 = 136;
                        if ( v159 != 1 )
                          v121 = 8;
                        MiInsertPageInList(v26, v121);
                      }
                      else
                      {
                        v122 = v159;
                        *(_BYTE *)(v26 + 34) = v120 & 0xF8 | 2;
                        if ( v122 <= 1 || (unsigned int)MiGetPfnPriority(v26) >= 5 )
                          MiInsertPageInList(v26, v80);
                        else
                          MiInsertProtectedStandbyPage(v123, v26);
                      }
                    }
                    v37 = 4;
                  }
                  goto LABEL_287;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v109 & 1) != 0 )
                {
                  v109 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)v103 = v109;
              goto LABEL_257;
            }
            v94 = KeGetCurrentThread()->ApcState.Process;
            if ( (HIDWORD(v94[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v97 & 1) != 0 )
              v97 |= 0x8000000000000000uLL;
          }
          *v100 = v97;
          goto LABEL_220;
        }
        v2[1] += MiDeleteBatch(&v166);
        v125 = MiTryDeleteTransitionPte(v3);
        if ( v125 == 1 )
        {
          BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v3);
          v126 = BugCheckParameter3;
          MiReleasePageFileSpace(v157, BugCheckParameter3, 1LL);
          if ( (*(_BYTE *)(v14 + 184) & 7) != 0 )
          {
            ++v2[3];
            if ( !(unsigned int)MiPteIsSessionDynamicBuffer(v3) )
              ++*v2;
          }
          else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v126) )
          {
            ++v2[3];
          }
          v127 = ZeroPte;
          if ( MiPteInShadowRange(v3) )
          {
            if ( (unsigned int)MiPteHasShadow(v129, v128, v130, v131) )
            {
              if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
                v127 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)v3 = v127;
              MiWritePteShadow(v3, v127);
              goto LABEL_333;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v127 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v3 = v127;
LABEL_333:
          v12 = v134;
          goto LABEL_369;
        }
        ++v2[3];
        if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && !(unsigned int)MiPteIsSessionDynamicBuffer(v3) )
          ++*v2;
        v14 = a1;
        v12 = v134;
        v8 = 0LL;
        if ( v125 == 3 )
          ++v2[1];
      }
LABEL_370:
      v13 = v158;
      v3 += 8LL;
      v161 = v3;
      if ( v3 > v162 )
        break;
      v10 = v139;
      v7 = v140;
    }
  }
  result = MiDeleteBatch(&v166);
  if ( v134 )
  {
    v133 = HIWORD(*(_DWORD *)(v13 + 16)) & 0x3FF;
    if ( v133 < v134 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v13, v133, v134);
    v152 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
      {
        KeYieldProcessorEx(&v152);
        result = *(_QWORD *)(v13 + 24);
      }
      while ( result < 0 );
    }
    *(_QWORD *)(v13 + 16) ^= ((unsigned int)*(_QWORD *)(v13 + 16) ^ (((unsigned int)(*(_QWORD *)(v13 + 16) >> 16) - v134) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
