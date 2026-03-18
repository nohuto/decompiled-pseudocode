/*
 * XREFs of MiDeletePteRun @ 0x140298E00
 * Callers:
 *     MiDeleteVaTail @ 0x14029AD00 (MiDeleteVaTail.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403EDE30 (MiDeleteEmptyPageTableTail.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14022956C (IS_PTE_NOT_DEMAND_ZERO.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiIdentifyPfn @ 0x14025F2A0 (MiIdentifyPfn.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiDeleteClusterPage @ 0x14028DDB0 (MiDeleteClusterPage.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteBatch @ 0x14029A5F0 (MiDeleteBatch.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     MiReleasePageFileSpace @ 0x1402AB620 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x1402AC860 (MiTryDeleteTransitionPte.c)
 *     MiInsertProtectedStandbyPage @ 0x1402D9CF0 (MiInsertProtectedStandbyPage.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiDereferenceIoPages @ 0x1402FA7E8 (MiDereferenceIoPages.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiDecrementCombinedPte @ 0x140364274 (MiDecrementCombinedPte.c)
 *     MiDoubleUnlockMdlPage @ 0x14037CB18 (MiDoubleUnlockMdlPage.c)
 *     MiIsPfnLocked @ 0x14037E278 (MiIsPfnLocked.c)
 *     MiPteIsSessionDynamicBuffer @ 0x140388B58 (MiPteIsSessionDynamicBuffer.c)
 *     MiWriteTopLevelPxe @ 0x14039A9EC (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403ED924 (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x1405276CC (MiShowBadMapper.c)
 *     MiDecrementCloneBlockReference @ 0x140554398 (MiDecrementCloneBlockReference.c)
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
  unsigned int v12; // r9d
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
  ULONG_PTR v31; // rbx
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // r8
  unsigned __int64 v37; // r9
  int v38; // ebx
  BOOL v39; // r15d
  ULONG_PTR v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r11
  ULONG_PTR v43; // r15
  ULONG_PTR v44; // rdi
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r10
  struct _LIST_ENTRY *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rbx
  char v57; // dl
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rdi
  unsigned __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rbx
  signed __int8 v67; // cf
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // edi
  unsigned __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v75; // r10d
  unsigned __int64 v76; // rdi
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rdx
  struct _LIST_ENTRY *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v82; // r12
  __int64 v83; // r9
  unsigned __int64 v84; // rdi
  int v85; // r8d
  int v86; // edx
  unsigned __int64 ValidPte; // rax
  __int64 v88; // rdx
  _KPROCESS *v89; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 v91; // rbx
  unsigned __int64 *MmInternal; // r15
  unsigned __int64 UltraMapping; // r11
  unsigned __int64 *v94; // r8
  __int64 v95; // r12
  __int64 v96; // r8
  unsigned __int64 v97; // r11
  __int64 v98; // rax
  struct _LIST_ENTRY *v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rdx
  char v104; // al
  char v105; // al
  char v106; // al
  __int64 v107; // rbx
  __int64 v108; // rax
  __int64 v109; // rdi
  int v110; // eax
  __int64 v111; // rcx
  __int64 v112; // rax
  char v113; // al
  unsigned int v114; // edx
  unsigned __int64 v115; // r8
  __int64 v116; // r8
  __int64 v117; // rdx
  int v118; // r11d
  __int16 v119; // bx
  __int64 v120; // r9
  unsigned __int64 v121; // rbx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 result; // rax
  __int64 v125; // rdx
  __int64 v126; // r8
  unsigned __int64 v127; // r9
  unsigned int v128; // [rsp+30h] [rbp-D0h]
  _QWORD *v130; // [rsp+40h] [rbp-C0h]
  char v131; // [rsp+48h] [rbp-B8h]
  __int64 v132; // [rsp+50h] [rbp-B0h]
  int v133; // [rsp+60h] [rbp-A0h]
  unsigned int v134; // [rsp+64h] [rbp-9Ch]
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v136; // [rsp+70h] [rbp-90h]
  int v137; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h]
  __int64 v139; // [rsp+88h] [rbp-78h] BYREF
  BOOL v140; // [rsp+90h] [rbp-70h]
  int v141; // [rsp+94h] [rbp-6Ch]
  __int64 v142; // [rsp+98h] [rbp-68h]
  int v143; // [rsp+A0h] [rbp-60h] BYREF
  int v144; // [rsp+A4h] [rbp-5Ch] BYREF
  int v145; // [rsp+A8h] [rbp-58h] BYREF
  int v146; // [rsp+ACh] [rbp-54h] BYREF
  unsigned __int64 v147; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v148; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v149; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v150; // [rsp+C8h] [rbp-38h]
  __int64 v151; // [rsp+D0h] [rbp-30h]
  __int64 v152; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v153; // [rsp+E0h] [rbp-20h]
  ULONG_PTR v154; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v155; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v156; // [rsp+F8h] [rbp-8h]
  __int64 v157; // [rsp+100h] [rbp+0h]
  __int128 v158; // [rsp+108h] [rbp+8h] BYREF
  __int64 v159; // [rsp+118h] [rbp+18h]
  __int128 v160; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v161[8]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v162[2]; // [rsp+1B0h] [rbp+B0h] BYREF

  v2 = *(_QWORD **)(a2 + 16);
  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v159 = 0LL;
  v131 = *(_BYTE *)(a2 + 108);
  v6 = *(_QWORD *)(a2 + 88);
  v7 = *(unsigned int *)(a2 + 104);
  v153 = v6;
  v158 = 0LL;
  v130 = v2;
  v160 = 0LL;
  v155 = v3;
  memset(v161, 0, sizeof(v161));
  v156 = v4;
  v134 = v7;
  v8 = 0LL;
  v9 = (__int64)(v3 << 25) >> 16;
  if ( v9 < 0xFFFFF68000000000uLL || (v10 = 1, v9 > 0xFFFFF6FFFFFFFFFFuLL) )
    v10 = 0;
  v11 = a1 - 1664;
  v12 = 0;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    v11 = 0LL;
  v133 = v10;
  v13 = 0LL;
  v132 = v11;
  v151 = *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v137 = 0;
  v128 = 0;
  v142 = 0LL;
  v152 = 0LL;
  if ( v3 <= v4 )
  {
    v14 = a1;
    while ( 1 )
    {
      v15 = *(_QWORD *)v3;
      Process = 0xFFFFF6FB7DBED7F8uLL;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v7)
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
        v7 = v134;
      }
      if ( v15 )
      {
        v20 = v7 & 0x80;
        v141 = v20;
        if ( (v7 & 0x80) != 0 && (v3 < 0xFFFFF6FB7DBED000uLL || v3 > 0xFFFFF6FB7DBEDFFFuLL) )
        {
          v128 = ++v12;
          if ( !v13 )
          {
            v7 = ((((__int64)((v3 << 25) - v8) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
            v21 = *(_QWORD *)v7;
            if ( v7 >= 0xFFFFF6FB7DBED000uLL
              && v7 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(Process, v7)
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
            v147 = v21;
            if ( (unsigned __int64)&v147 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)&v147 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(&v147, v7)
              && (v21 & 1) != 0
              && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
            {
              v7 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v7 )
              {
                v24 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)&v147 >> 3) & 0x1FF));
                v7 = v21 | 0x20;
                if ( (v24 & 0x20) == 0 )
                  v7 = v21;
                v21 = v7;
                if ( (v24 & 0x42) != 0 )
                  v21 = v7 | 0x42;
              }
            }
            v8 = (v21 >> 12) & 0xFFFFFFFFFLL;
            v152 = 48 * v8 - 0x58000000000LL;
          }
        }
        v25 = v12;
        if ( (v15 & 0x400) != 0 )
        {
          LODWORD(v26) = 0;
          v136 = 0LL;
          v27 = v15 & 0xFFFFFFFFFFFFFBFEuLL | 1;
          BugCheckParameter2 = 0LL;
          BugCheckParameter3 = v27;
          v28 = 0LL;
          v154 = 0LL;
          if ( (unsigned __int64)&BugCheckParameter3 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&BugCheckParameter3 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(&BugCheckParameter3, v7)
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
          v157 = 48 * v31;
          if ( (*(_QWORD *)(48 * v31 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
            goto LABEL_314;
          v26 = v32 - 0x58000000000LL;
          if ( (v134 & 0x60) != 0 && !v10 )
          {
            MiDeleteBatch(&v160);
            if ( !(unsigned int)MiIsPfnLocked(v32 - 0x58000000000LL) )
              MiShowBadMapper(v31);
            if ( (v134 & 0x40) != 0 )
              MiDoubleUnlockMdlPage(v32 - 0x58000000000LL);
            v35 = 48 * MiGetContainingPageTable(v3) - 0x58000000000LL;
            v38 = 4;
            LODWORD(v26) = 0;
            v39 = 0;
            goto LABEL_292;
          }
          if ( v32 == 0x58000000000LL )
          {
LABEL_314:
            MiDeleteBatch(&v160);
            MiDereferenceIoPages(1LL, v31, 1LL);
            v35 = 48 * MiGetContainingPageTable(v3) - 0x58000000000LL;
            v38 = 4;
            v39 = v26;
            goto LABEL_292;
          }
          if ( (*(_BYTE *)(a1 + 184) & 7) == 0
            && !v10
            && (v31 & 0xF) == 0
            && ((__int64)(v156 - v3) >> 3) + 1 >= 16
            && (unsigned int)MiDeleteClusterPage(v3, (__int64)&v160) == 1 )
          {
            v14 = a1;
            v12 = v25 + 15;
            v3 += 120LL;
            if ( !v20 )
              v12 = v25;
            v128 = v12;
LABEL_368:
            v2 = v130;
            goto LABEL_369;
          }
          v40 = *(_QWORD *)(v26 + 8) | 0x8000000000000000uLL;
          if ( (unsigned int)MI_PFN_IS_PROTO(v32 - 0x58000000000LL, *(_QWORD *)(v26 + 8), v8) )
          {
            if ( (*(_QWORD *)(v26 + 40) & 0x1000000000LL) != 0 || v41 <= 0 )
            {
              v45 = 0xFFFFF68000000000uLL;
              if ( v3 <= 0xFFFFF6BFFFFFFF78uLL && v3 >= 0xFFFFF68000000000uLL && *(_QWORD *)(v42 + 1264) )
              {
                v154 = v40;
                BugCheckParameter2 = MiLocateCloneAddress(v42, v40);
                v44 = BugCheckParameter2;
                if ( BugCheckParameter2 )
                {
                  v46 = MiDeleteBatch(&v160);
                  v45 = (unsigned __int64)v130;
                  v130[1] += v46;
                }
              }
              else
              {
                v44 = 0LL;
              }
              v43 = 0LL;
            }
            else
            {
              v136 = v40;
              v43 = v40;
              v44 = 0LL;
              v130[1] += MiDeleteBatch(&v160);
            }
            v47 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v37 = 0xFFFFF6FB7DBED000uLL;
            v48 = *(_QWORD *)v47;
            v49 = 0xFFFFF6FB7DBED7F8uLL;
            if ( v47 >= 0xFFFFF6FB7DBED000uLL
              && v47 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(v45, v47)
              && (v48 & 1) != 0
              && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
            {
              v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v50 )
              {
                v51 = *((_QWORD *)&v50->Flink + ((v47 >> 3) & 0x1FF));
                v47 = v48 | 0x20;
                if ( (v51 & 0x20) == 0 )
                  v47 = v48;
                v48 = v47;
                if ( (v51 & 0x42) != 0 )
                  v48 = v47 | 0x42;
              }
            }
            v148 = v48;
            if ( (unsigned __int64)&v148 >= v37
              && (unsigned __int64)&v148 <= v49
              && (unsigned int)MiPteHasShadow(&v148, v47)
              && (v48 & 1) != 0
              && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
            {
              v47 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v47 )
              {
                v52 = *(_QWORD *)(v47 + 8 * (((unsigned __int64)&v148 >> 3) & 0x1FF));
                v47 = v48 | 0x20;
                if ( (v52 & 0x20) == 0 )
                  v47 = v48;
                v48 = v47;
                if ( (v52 & 0x42) != 0 )
                  v48 = v47 | 0x42;
              }
            }
            v53 = (v48 >> 12) & 0xFFFFFFFFFLL;
            v54 = 48 * v53 - 0x58000000000LL;
            v150 = v54;
            if ( !(_BYTE)v160 )
              goto LABEL_116;
            if ( v54 != *((_QWORD *)&v160 + 1)
              || *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL)) != v151
              || _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
            {
              v130[1] += MiDeleteBatch(&v160);
            }
            LOBYTE(v55) = v160;
            if ( !(_BYTE)v160 )
            {
LABEL_116:
              *((_QWORD *)&v160 + 1) = v54;
              v143 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v143, v47, v53, v37);
                while ( *(__int64 *)(v26 + 24) < 0 );
              }
              LOBYTE(v55) = v160;
            }
            v56 = a1;
            if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
            {
              v57 = *(_BYTE *)(v26 + 34);
              if ( (v57 & 7) == 6
                && (*(_DWORD *)(v26 + 16) & 0x400LL) == 0
                && ((BugCheckParameter3 & 0x42) != 0 || (v57 & 0x10) != 0)
                && !v43
                && !v44 )
              {
                v55 = (unsigned __int8)v55;
                *((_QWORD *)v161 + (unsigned __int8)v55) = BugCheckParameter3;
                if ( !(_BYTE)v160 )
                {
                  v55 = (*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL;
                  v142 = *(_QWORD *)(qword_140C4E588 + 8 * v55);
                }
                v58 = ZeroPte;
                if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
                {
                  if ( (unsigned int)MiPteHasShadow(v55, ZeroPte) )
                  {
                    if ( !HIBYTE(word_140C4DF48) && (v58 & 1) != 0 )
                      v58 |= 0x8000000000000000uLL;
                    *(_QWORD *)v3 = v58;
                    MiWritePteShadow(v3, v58);
LABEL_140:
                    LOBYTE(v160) = v160 + 1;
                    if ( (_BYTE)v160 == 16 )
                    {
                      v59 = MiDeleteBatch(&v160);
                      v2 = v130;
                      v14 = a1;
                      v12 = v128;
                      v130[1] += v59;
                      goto LABEL_369;
                    }
                    v14 = a1;
                    goto LABEL_367;
                  }
                  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                    && (v58 & 1) != 0 )
                  {
                    v58 |= 0x8000000000000000uLL;
                  }
                }
                *(_QWORD *)v3 = v58;
                goto LABEL_140;
              }
            }
            if ( (_BYTE)v55 )
            {
              BYTE1(v160) = 1;
              v60 = MiDeleteBatch(&v160);
              v61 = v130;
              BYTE1(v160) = 0;
              v130[1] += v60;
            }
            else
            {
              v61 = v130;
            }
          }
          else
          {
            if ( v26 == qword_140C4ECA0 )
            {
              v62 = ZeroPte;
              if ( MiPteInShadowRange(v3) )
              {
                if ( (unsigned int)MiPteHasShadow(v64, v63) )
                {
                  if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
                    v62 = ZeroPte | 0x8000000000000000uLL;
                  *(_QWORD *)v3 = v62;
                  MiWritePteShadow(v3, v62);
                  v14 = a1;
                  goto LABEL_367;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (ZeroPte & 1) != 0 )
                {
                  v62 = ZeroPte | 0x8000000000000000uLL;
                }
              }
              v14 = a1;
              *(_QWORD *)v3 = v62;
LABEL_367:
              v12 = v128;
              goto LABEL_368;
            }
            v61 = v130;
            v130[1] += MiDeleteBatch(&v160);
            if ( v40 != v3 )
              KeBugCheckEx(0x1Au, 0x403uLL, v3, BugCheckParameter3, *(_QWORD *)(v26 + 8));
            v66 = 48 * (*(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL);
            ++v130[3];
            v144 = 0;
            v67 = _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL);
            v150 = v66 - 0x58000000000LL;
            if ( v67 )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v144, v65, v53, v37);
                while ( *(__int64 *)(v26 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
            }
            *(_QWORD *)(v26 + 24) |= 0x4000000000000000uLL;
            if ( v131 && v133 )
            {
              v158 = 0LL;
              v159 = 0LL;
              MiIdentifyPfn((__m128i *)(v32 - 0x58000000000LL), (unsigned __int64 *)&v158);
              v137 = 1;
            }
            v56 = a1;
            if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && ((*(_QWORD *)(v26 + 40) >> 60) & 7) == 2 )
              *(_QWORD *)(v26 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
          }
          v68 = *(unsigned __int8 *)(v26 + 34);
          if ( (v68 & 7) != 6 )
            MiBadShareCount(v32 - 0x58000000000LL);
          v142 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL));
          if ( (BugCheckParameter3 & 0x42) != 0 && (v68 & 0x10) == 0 )
          {
            v53 = (unsigned __int8)v68;
            if ( (*(_DWORD *)(v26 + 16) & 0x400LL) == 0 && (v68 & 8) == 0 )
            {
              v69 = MiCapturePageFileInfoInline(v26 + 16, 1LL);
              v53 = *(unsigned __int8 *)(v26 + 34);
              v28 = v69;
            }
            LOBYTE(v53) = v53 | 0x10;
            *(_BYTE *)(v26 + 34) = v53;
          }
          if ( (*(_BYTE *)(v56 + 184) & 7) != 0 && (unsigned int)MI_PFN_IS_PROTO(v32 - 0x58000000000LL, v68, v53) )
          {
            v70 = *(_QWORD *)(v26 + 16);
            if ( (v70 & 0x400) == 0 || (BugCheckParameter3 & 0x200) != 0 )
              goto LABEL_181;
            if ( qword_140C4DE80 && (v70 & 0x10) == 0 )
              v70 &= ~qword_140C4DE80;
            if ( (*(_DWORD *)(*(_QWORD *)(v70 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_181:
              ++v61[3];
          }
          v71 = v133;
          v36 = 0LL;
          v140 = 0;
          v38 = 4;
          v39 = 0;
          v34 = 0x3FFFFFFFFFFFFFFFLL;
          if ( v133 && v141 )
          {
            v39 = (*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000;
            v140 = v39;
          }
          v33 = *(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v26 + 24) = v33;
          if ( (v33 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
          {
            if ( v133 )
            {
              v38 = 2;
              if ( (v134 & 0x100) == 0 )
                *(_QWORD *)v26 &= ~1uLL;
            }
LABEL_287:
            if ( v39 )
              MiChargeCommit(v142, 1uLL, 4u);
            _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            LODWORD(v26) = 0;
            if ( v137 )
            {
              v162[1] = 24LL;
              v162[0] = &v158;
              EtwTraceKernelEvent((unsigned int)v162, 1, 536870913, 631, 289413890);
              v137 = 0;
            }
            v35 = v150;
LABEL_292:
            if ( v35 )
            {
              v145 = v26;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v145, v33, v36, v37);
                while ( *(__int64 *)(v35 + 24) < 0 );
              }
              if ( (*(_BYTE *)(v35 + 34) & 7) != 6 )
                MiBadShareCount(v35);
              v34 = *(_QWORD *)(v35 + 24);
              *(_QWORD *)(v35 + 24) = v34 ^ (v34 ^ ((v34 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0x3FFFFFFFFFFFFFFFLL;
              if ( (v34 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
                MiPfnShareCountIsZero(v35, 0LL, 0x3FFFFFFFFFFFFFFFLL);
              _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v109 = v142;
            if ( v28 )
              MiReleasePageFileInfo(v142, v28, 1LL);
            if ( v136 )
            {
              v110 = MiDecrementCombinedPte(v132 + 1664, v136);
              goto LABEL_317;
            }
            if ( BugCheckParameter2 )
            {
              v110 = MiDecrementCloneBlockReference(BugCheckParameter2, v154);
LABEL_317:
              v38 = v110;
            }
            if ( v39 )
              goto LABEL_325;
            if ( v38 == 3 )
            {
              if ( (*(_BYTE *)(a1 + 184) & 7) == 0 || v109 == v151 )
              {
                v2 = v130;
                ++v130[1];
                goto LABEL_326;
              }
LABEL_325:
              v2 = v130;
              goto LABEL_326;
            }
            v2 = v130;
            if ( v38 == 5 )
              ++v130[2];
LABEL_326:
            if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && !(unsigned int)MiPteIsSessionDynamicBuffer(v3) )
              ++*v2;
            if ( v3 < 0xFFFFF6FB7DBED000uLL || v3 > 0xFFFFF6FB7DBEDFFFuLL || (*(_BYTE *)(a1 + 184) & 7) == 0 )
            {
              v117 = ZeroPte;
              if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                if ( (unsigned int)MiPteHasShadow(v34, ZeroPte) )
                {
                  if ( !HIBYTE(word_140C4DF48) && (v117 & 1) != 0 )
                    v117 |= 0x8000000000000000uLL;
                  *(_QWORD *)v3 = v117;
                  MiWritePteShadow(v3, v117);
                  v12 = v128;
                  v14 = a1;
                  goto LABEL_369;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v117 & 1) != 0 )
                {
                  v117 |= 0x8000000000000000uLL;
                }
              }
              v14 = a1;
              v12 = v128;
              *(_QWORD *)v3 = v117;
LABEL_369:
              v8 = 0LL;
              goto LABEL_370;
            }
            MiWriteTopLevelPxe(v3, ZeroPte);
            v14 = a1;
            goto LABEL_333;
          }
          if ( !(unsigned int)MI_PFN_IS_PROTO(v32 - 0x58000000000LL, v33, 0LL) )
            goto LABEL_258;
          v76 = *(_QWORD *)(v26 + 16);
          v77 = v26 + 16;
          v139 = v74;
          if ( v26 + 16 >= 0xFFFFF6FB7DBED000uLL
            && v77 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(v73, v77)
            && (v76 & 1) != 0
            && ((v76 & 0x20) == 0 || (v76 & 0x42) == 0) )
          {
            v79 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v79 )
            {
              v80 = *((_QWORD *)&v79->Flink + ((v78 >> 3) & 0x1FF));
              v81 = v76 | 0x20;
              if ( (v80 & 0x20) == 0 )
                v81 = v76;
              v76 = v81;
              if ( (v80 & 0x42) != 0 )
                v76 = v81 | 0x42;
            }
          }
          v82 = *(_QWORD *)(v26 + 8);
          v83 = *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL;
          v84 = v76 >> 5;
          v85 = v75;
          v86 = *(unsigned __int8 *)(48 * v83 - 0x57FFFFFFFDELL) >> 6;
          if ( !v86 || v86 == 3 )
          {
            v85 = 12;
          }
          else if ( v86 == 2 )
          {
            v85 = 28;
          }
          ValidPte = MiMakeValidPte(0LL, *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL, v85 | 0xA0000000, v83);
          CurrentPrcb = KeGetCurrentPrcb();
          v91 = ValidPte;
          MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
          if ( !MmInternal
            || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
                v89 = (_KPROCESS *)0xFFFFF68000000000LL,
                v94 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                MmInternal[1543] = (unsigned __int64)v94,
                !UltraMapping) )
          {
            UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                         + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
            v94 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          }
          if ( (unsigned __int64)v94 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v94 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)MiPteHasShadow(v89, v88) )
            {
              if ( !HIBYTE(word_140C4DF48) && (v91 & 1) != 0 )
                v91 |= 0x8000000000000000uLL;
              *v94 = v91;
              MiWritePteShadow(v94, v91);
LABEL_220:
              v95 = (v82 >> 3) & 0x1FF;
              v96 = *(_QWORD *)(UltraMapping + 8 * v95);
              v97 = UltraMapping + 8 * v95;
              if ( v97 >= 0xFFFFF6FB7DBED000uLL
                && v97 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow(v89, v88)
                && (v96 & 1) != 0
                && ((v96 & 0x20) == 0 || (v96 & 0x42) == 0) )
              {
                v88 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v88 )
                {
                  v98 = *(_QWORD *)(v88 + 8 * ((v97 >> 3) & 0x1FF));
                  v88 = v96 | 0x20;
                  if ( (v98 & 0x20) == 0 )
                    v88 = v96;
                  v96 = v88;
                  if ( (v98 & 0x42) != 0 )
                    v96 = v88 | 0x42;
                }
              }
              v139 = v96;
              if ( (unsigned __int64)&v139 >= 0xFFFFF6FB7DBED000uLL
                && (unsigned __int64)&v139 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow(&v139, v88)
                && (v96 & 1) != 0
                && ((v96 & 0x20) == 0 || (v96 & 0x42) == 0) )
              {
                v99 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v99 )
                {
                  v100 = *((_QWORD *)&v99->Flink + (((unsigned __int64)&v139 >> 3) & 0x1FF));
                  v101 = v96 | 0x20;
                  if ( (v100 & 0x20) == 0 )
                    v101 = v96;
                  v96 = v101;
                  if ( (v100 & 0x42) != 0 )
                    v96 = v101 | 0x42;
                }
              }
              v102 = v96 & 0xFFFFFFFFF000LL | (32 * (v84 & 0x1F | 0x40));
              if ( qword_140C4DE80 )
              {
                if ( (v102 & qword_140C4DE80) != 0 )
                  v102 |= 0x10uLL;
                else
                  v102 |= qword_140C4DE80;
              }
              v139 = v102;
              if ( v97 >= 0xFFFFF6FB7DBED000uLL && v97 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                if ( (unsigned int)MiPteHasShadow(qword_140C4DE80, v102) )
                {
                  if ( !HIBYTE(word_140C4DF48) && (v102 & 1) != 0 )
                    v102 |= 0x8000000000000000uLL;
                  *(_QWORD *)v97 = v102;
                  MiWritePteShadow(v97, v102);
LABEL_257:
                  LOBYTE(v102) = 17;
                  MiUnmapPageInHyperSpaceWorker(v97, v102, 0x80000000);
                  v72 = *(_QWORD *)(v26 + 24);
                  v74 = 0LL;
                  v39 = v140;
                  v32 = v157;
                  v3 = v155;
                  v71 = v133;
                  v75 = 4;
LABEL_258:
                  --*(_WORD *)(v26 + 32);
                  v103 = (v72 >> 62) & 1;
                  if ( *(_WORD *)(v26 + 32) )
                  {
                    v104 = *(_BYTE *)(v26 + 34);
                    if ( (_DWORD)v103 )
                    {
                      v105 = v104 | 7;
                    }
                    else if ( (v104 & 0x10) != 0 )
                    {
                      v105 = v104 & 0xF8 | 3;
                    }
                    else
                    {
                      v105 = v104 & 0xF8 | 2;
                    }
                    *(_BYTE *)(v26 + 34) = v105;
                    if ( (*(_DWORD *)(v26 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v26 + 16) )
                      *(_BYTE *)(*(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL)) + 675LL) = 1;
                    v38 = 3;
                    if ( v71 && v141 )
                      v39 = 1;
                    if ( (unsigned int)MI_PFN_IS_PROTO(v26, v103, v74) && !v136 && !BugCheckParameter2 )
                      v38 = 4;
                  }
                  else
                  {
                    if ( (_DWORD)v103 )
                    {
                      v106 = *(_BYTE *)(v26 + 35);
                      if ( (v106 & 0x10) != 0 )
                        *(_BYTE *)(v26 + 35) = v106 & 0xEF;
                      v107 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL));
                      v149 = *(_QWORD *)(v26 + 16);
                      if ( (v149 & 0x400) == 0 )
                      {
                        v108 = (v149 & 4) != 0 || (v149 & 2) != 0 ? MI_READ_PTE_LOCK_FREE((unsigned __int64)&v149) : v74;
                        v149 = v108;
                        if ( v108 )
                          MiReleasePageFileInfo(v107, v108, 0LL);
                      }
                      MiInsertPageInFreeOrZeroedList(v32 / 48, 2);
                    }
                    else
                    {
                      v111 = *(_QWORD *)(v26 + 16);
                      v112 = -9LL;
                      if ( (v111 & 0x400) != 0 )
                        v112 = -2049LL;
                      *(_QWORD *)(v26 + 16) = v111 & v112;
                      v113 = *(_BYTE *)(v26 + 34);
                      if ( (v113 & 0x10) != 0 )
                      {
                        v114 = 136;
                        if ( v153 != 1 )
                          v114 = 8;
                        MiInsertPageInList(v26, v114);
                      }
                      else
                      {
                        v115 = v153;
                        *(_BYTE *)(v26 + 34) = v113 & 0xF8 | 2;
                        if ( v115 <= 1 || (unsigned int)MiGetPfnPriority(v26) >= 5 )
                          MiInsertPageInList(v26, v75);
                        else
                          MiInsertProtectedStandbyPage(v116, v26);
                      }
                    }
                    v38 = 4;
                  }
                  goto LABEL_287;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v102 & 1) != 0 )
                {
                  v102 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)v97 = v102;
              goto LABEL_257;
            }
            v89 = KeGetCurrentThread()->ApcState.Process;
            if ( (HIDWORD(v89[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v91 & 1) != 0 )
              v91 |= 0x8000000000000000uLL;
          }
          *v94 = v91;
          goto LABEL_220;
        }
        v2[1] += MiDeleteBatch(&v160);
        v118 = MiTryDeleteTransitionPte(v3);
        if ( v118 == 1 )
        {
          BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v3);
          v119 = BugCheckParameter3;
          MiReleasePageFileSpace(v151, BugCheckParameter3, 1LL, v120);
          if ( (*(_BYTE *)(v14 + 184) & 7) != 0 )
          {
            ++v2[3];
            if ( !(unsigned int)MiPteIsSessionDynamicBuffer(v3) )
              ++*v2;
          }
          else if ( IS_PTE_NOT_DEMAND_ZERO(v119) )
          {
            ++v2[3];
          }
          v121 = ZeroPte;
          if ( MiPteInShadowRange(v3) )
          {
            if ( (unsigned int)MiPteHasShadow(v123, v122) )
            {
              if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
                v121 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)v3 = v121;
              MiWritePteShadow(v3, v121);
              goto LABEL_333;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v121 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v3 = v121;
LABEL_333:
          v12 = v128;
          goto LABEL_369;
        }
        ++v2[3];
        if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && !(unsigned int)MiPteIsSessionDynamicBuffer(v3) )
          ++*v2;
        v14 = a1;
        v12 = v128;
        v8 = 0LL;
        if ( v118 == 3 )
          ++v2[1];
      }
LABEL_370:
      v13 = v152;
      v3 += 8LL;
      v155 = v3;
      if ( v3 > v156 )
        break;
      v10 = v133;
      v7 = v134;
    }
  }
  result = MiDeleteBatch(&v160);
  if ( v128 )
  {
    v127 = HIWORD(*(_DWORD *)(v13 + 16)) & 0x3FF;
    if ( v127 < v128 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v13, v127, v128);
    v146 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
      {
        KeYieldProcessorEx(&v146, v125, v126, v127);
        result = *(_QWORD *)(v13 + 24);
      }
      while ( result < 0 );
    }
    *(_QWORD *)(v13 + 16) ^= ((unsigned int)*(_QWORD *)(v13 + 16) ^ (((unsigned int)(*(_QWORD *)(v13 + 16) >> 16) - v128) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
