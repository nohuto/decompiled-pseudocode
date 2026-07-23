/*
 * XREFs of MiDeletePteRun @ 0x1402DB4B0
 * Callers:
 *     MiDeleteVaTail @ 0x140345880 (MiDeleteVaTail.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403F4E40 (MiDeleteEmptyPageTableTail.c)
 * Callees:
 *     MiDereferenceIoPages @ 0x1402183E8 (MiDereferenceIoPages.c)
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiTryDeleteTransitionPte @ 0x140224A38 (MiTryDeleteTransitionPte.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteBatch @ 0x1402DCCA0 (MiDeleteBatch.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1403341C0 (MiInsertProtectedStandbyPage.c)
 *     MiDeleteClusterPage @ 0x140336580 (MiDeleteClusterPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiIdentifyPfn @ 0x140353FA0 (MiIdentifyPfn.c)
 *     MiDecrementCombinedPte @ 0x140367074 (MiDecrementCombinedPte.c)
 *     MiDoubleUnlockMdlPage @ 0x14037F698 (MiDoubleUnlockMdlPage.c)
 *     MiIsPfnLocked @ 0x140380DF8 (MiIsPfnLocked.c)
 *     MiPteIsSessionDynamicBuffer @ 0x14038C608 (MiPteIsSessionDynamicBuffer.c)
 *     MiWriteTopLevelPxe @ 0x14039E05C (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F4934 (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x14052D42C (MiShowBadMapper.c)
 *     MiDecrementCloneBlockReference @ 0x14055A0C8 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeletePteRun(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  ULONG_PTR v3; // r13
  ULONG_PTR v4; // rbx
  unsigned __int64 v6; // rax
  int v7; // edx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  int v10; // r10d
  __int64 v11; // r11
  unsigned int v12; // r9d
  ULONG_PTR v13; // r14
  __int64 v14; // r12
  __int64 v15; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r15d
  unsigned __int64 *v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdx
  struct _LIST_ENTRY *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  struct _LIST_ENTRY *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // edi
  __int64 v30; // r14
  ULONG_PTR v31; // rbx
  unsigned __int64 v32; // rsi
  struct _LIST_ENTRY *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // r12
  __int64 v37; // rdi
  int v38; // ebx
  BOOL v39; // r15d
  ULONG_PTR v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r11
  ULONG_PTR v44; // r15
  ULONG_PTR v45; // rdi
  unsigned __int64 *v46; // rdx
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r10
  unsigned __int64 v50; // rdx
  struct _LIST_ENTRY *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  struct _LIST_ENTRY *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rbx
  unsigned __int8 v58; // cl
  __int64 v59; // rbx
  char v60; // dl
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rdi
  unsigned __int64 v65; // rbx
  __int64 v66; // rbx
  signed __int8 v67; // cf
  char v68; // dl
  char v69; // r8
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // edi
  __int64 v73; // rdx
  unsigned __int64 v74; // rdx
  __int64 v75; // r8
  unsigned int v76; // r10d
  unsigned __int64 v77; // rdi
  unsigned __int64 v78; // rdx
  struct _LIST_ENTRY *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v82; // r12
  unsigned __int64 v83; // rdi
  int v84; // r8d
  int v85; // edx
  __int64 ValidPte; // rax
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v88; // rbx
  unsigned __int64 *MmInternal; // r15
  unsigned __int64 UltraMapping; // r11
  __int64 *v91; // r8
  __int64 v92; // r12
  __int64 v93; // r8
  unsigned __int64 v94; // r11
  struct _LIST_ENTRY *v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rdx
  struct _LIST_ENTRY *v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // rdx
  char v103; // al
  char v104; // al
  char v105; // al
  __int64 v106; // rbx
  unsigned __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rdi
  int v110; // eax
  __int64 v111; // rcx
  __int64 v112; // rax
  char v113; // al
  __int64 v114; // rdx
  unsigned __int64 v115; // r8
  __int64 v116; // r8
  __int64 v117; // rdx
  int v118; // r11d
  ULONG_PTR v119; // rbx
  unsigned __int64 v120; // rbx
  __int64 result; // rax
  ULONG_PTR v122; // r9
  unsigned int v123; // [rsp+30h] [rbp-D0h]
  _QWORD *v125; // [rsp+40h] [rbp-C0h]
  char v126; // [rsp+48h] [rbp-B8h]
  __int64 v127; // [rsp+50h] [rbp-B0h]
  int v128; // [rsp+60h] [rbp-A0h]
  __int16 v129; // [rsp+64h] [rbp-9Ch]
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v131; // [rsp+70h] [rbp-90h]
  int v132; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h]
  __int64 v134; // [rsp+88h] [rbp-78h] BYREF
  BOOL v135; // [rsp+90h] [rbp-70h]
  int v136; // [rsp+94h] [rbp-6Ch]
  __int64 v137; // [rsp+98h] [rbp-68h]
  int v138; // [rsp+A0h] [rbp-60h] BYREF
  int v139; // [rsp+A4h] [rbp-5Ch] BYREF
  int v140; // [rsp+A8h] [rbp-58h] BYREF
  int v141; // [rsp+ACh] [rbp-54h] BYREF
  unsigned __int64 v142; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v143; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v144; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v145; // [rsp+C8h] [rbp-38h]
  __int64 v146; // [rsp+D0h] [rbp-30h]
  __int64 v147; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v148; // [rsp+E0h] [rbp-20h]
  ULONG_PTR v149; // [rsp+E8h] [rbp-18h]
  ULONG_PTR v150; // [rsp+F0h] [rbp-10h]
  ULONG_PTR v151; // [rsp+F8h] [rbp-8h]
  __int64 v152; // [rsp+100h] [rbp+0h]
  __int128 v153; // [rsp+108h] [rbp+8h] BYREF
  __int64 v154; // [rsp+118h] [rbp+18h]
  __int128 v155; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v156[8]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v157[2]; // [rsp+1B0h] [rbp+B0h] BYREF

  v2 = *(_QWORD **)(a2 + 16);
  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v154 = 0LL;
  v126 = *(_BYTE *)(a2 + 108);
  v6 = *(_QWORD *)(a2 + 88);
  v7 = *(_DWORD *)(a2 + 104);
  v148 = v6;
  v153 = 0LL;
  v125 = v2;
  v155 = 0LL;
  v150 = v3;
  memset(v156, 0, sizeof(v156));
  v151 = v4;
  v129 = v7;
  v8 = 0LL;
  v9 = (__int64)(v3 << 25) >> 16;
  if ( v9 < 0xFFFFF68000000000uLL || (v10 = 1, v9 > 0xFFFFF6FFFFFFFFFFuLL) )
    v10 = 0;
  v11 = a1 - 1664;
  v12 = 0;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    v11 = 0LL;
  v128 = v10;
  v13 = 0LL;
  v127 = v11;
  v146 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v132 = 0;
  v123 = 0;
  v137 = 0LL;
  v147 = 0LL;
  if ( v3 <= v4 )
  {
    v14 = a1;
    while ( 1 )
    {
      v15 = *(_QWORD *)v3;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow() && (v15 & 1) != 0 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v17 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
            v18 = v15 | 0x20;
            if ( (v17 & 0x20) == 0 )
              v18 = v15;
            v15 = v18;
            if ( (v17 & 0x42) != 0 )
              v15 = v18 | 0x42;
          }
        }
        LOBYTE(v7) = v129;
      }
      if ( v15 )
      {
        v19 = v7 & 0x80;
        v136 = v19;
        if ( (v7 & 0x80) != 0 && (v3 < 0xFFFFF6FB7DBED000uLL || v3 > 0xFFFFF6FB7DBEDFFFuLL) )
        {
          v123 = ++v12;
          if ( !v13 )
          {
            v20 = (unsigned __int64 *)(((((__int64)((v3 << 25) - v8) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
            v21 = *v20;
            if ( (unsigned __int64)v20 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow()
              && (v21 & 1) != 0
              && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
            {
              v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v23 )
              {
                v24 = *((_QWORD *)&v23->Flink + ((v22 >> 3) & 0x1FF));
                v25 = v21 | 0x20;
                if ( (v24 & 0x20) == 0 )
                  v25 = v21;
                v21 = v25;
                if ( (v24 & 0x42) != 0 )
                  v21 = v25 | 0x42;
              }
            }
            v142 = v21;
            if ( (unsigned __int64)&v142 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)&v142 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow()
              && (v21 & 1) != 0
              && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
            {
              v26 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v26 )
              {
                v27 = *((_QWORD *)&v26->Flink + (((unsigned __int64)&v142 >> 3) & 0x1FF));
                v28 = v21 | 0x20;
                if ( (v27 & 0x20) == 0 )
                  v28 = v21;
                v21 = v28;
                if ( (v27 & 0x42) != 0 )
                  v21 = v28 | 0x42;
              }
            }
            v147 = 48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          }
        }
        v29 = v12;
        if ( (v15 & 0x400) != 0 )
        {
          LODWORD(v30) = 0;
          v131 = 0LL;
          v31 = v15 & 0xFFFFFFFFFFFFFBFEuLL | 1;
          BugCheckParameter2 = 0LL;
          BugCheckParameter3 = v31;
          v32 = 0LL;
          v149 = 0LL;
          if ( (unsigned __int64)&BugCheckParameter3 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&BugCheckParameter3 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow()
            && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
          {
            v33 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v33 )
            {
              v34 = *((_QWORD *)&v33->Flink + (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
              if ( (v34 & 0x20) != 0 )
                v31 |= 0x20uLL;
              if ( (v34 & 0x42) != 0 )
                v31 |= 0x42uLL;
            }
            else
            {
              v31 = BugCheckParameter3;
            }
          }
          v35 = (v31 >> 12) & 0xFFFFFFFFFLL;
          v36 = 48 * v35;
          v152 = 48 * v35;
          if ( (*(_QWORD *)(48 * v35 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
            goto LABEL_314;
          v30 = v36 - 0x58000000000LL;
          if ( (v129 & 0x60) != 0 && !v10 )
          {
            MiDeleteBatch(&v155);
            if ( !(unsigned int)MiIsPfnLocked(v36 - 0x58000000000LL) )
              MiShowBadMapper(v35);
            if ( (v129 & 0x40) != 0 )
              MiDoubleUnlockMdlPage(v36 - 0x58000000000LL);
            v37 = 48 * MiGetContainingPageTable(v3) - 0x58000000000LL;
            v38 = 4;
            LODWORD(v30) = 0;
            v39 = 0;
            goto LABEL_292;
          }
          if ( v36 == 0x58000000000LL )
          {
LABEL_314:
            MiDeleteBatch(&v155);
            MiDereferenceIoPages(1, v35, 1uLL);
            v37 = 48 * MiGetContainingPageTable(v3) - 0x58000000000LL;
            v38 = 4;
            v39 = v30;
            goto LABEL_292;
          }
          if ( (*(_BYTE *)(a1 + 184) & 7) == 0
            && !v10
            && (v35 & 0xF) == 0
            && ((__int64)(v151 - v3) >> 3) + 1 >= 16
            && (unsigned int)MiDeleteClusterPage(v3) == 1 )
          {
            v14 = a1;
            v12 = v29 + 15;
            v3 += 120LL;
            if ( !v19 )
              v12 = v29;
            v123 = v12;
LABEL_368:
            v2 = v125;
            goto LABEL_369;
          }
          v40 = *(_QWORD *)(v30 + 8) | 0x8000000000000000uLL;
          if ( (unsigned int)MI_PFN_IS_PROTO(v36 - 0x58000000000LL) )
          {
            if ( (*(_QWORD *)(v30 + 40) & 0x1000000000LL) != 0 || v41 <= 0 )
            {
              if ( v3 <= 0xFFFFF6BFFFFFFF78uLL && v3 >= 0xFFFFF68000000000uLL && *(_QWORD *)(v43 + 1264) )
              {
                v149 = v40;
                BugCheckParameter2 = MiLocateCloneAddress(v43, v40, v42);
                v45 = BugCheckParameter2;
                if ( BugCheckParameter2 )
                  v125[1] += MiDeleteBatch(&v155);
              }
              else
              {
                v45 = 0LL;
              }
              v44 = 0LL;
            }
            else
            {
              v131 = v40;
              v44 = v40;
              v45 = 0LL;
              v125[1] += MiDeleteBatch(&v155);
            }
            v46 = (unsigned __int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v47 = 0xFFFFF6FB7DBED000uLL;
            v48 = *v46;
            v49 = 0xFFFFF6FB7DBED7F8uLL;
            if ( (unsigned __int64)v46 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v46 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow()
              && (v48 & 1) != 0
              && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
            {
              v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v51 )
              {
                v52 = *((_QWORD *)&v51->Flink + ((v50 >> 3) & 0x1FF));
                v53 = v48 | 0x20;
                if ( (v52 & 0x20) == 0 )
                  v53 = v48;
                v48 = v53;
                if ( (v52 & 0x42) != 0 )
                  v48 = v53 | 0x42;
              }
            }
            v143 = v48;
            if ( (unsigned __int64)&v143 >= v47
              && (unsigned __int64)&v143 <= v49
              && (unsigned int)MiPteHasShadow()
              && (v48 & 1) != 0
              && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
            {
              v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v54 )
              {
                v55 = *((_QWORD *)&v54->Flink + (((unsigned __int64)&v143 >> 3) & 0x1FF));
                v56 = v48 | 0x20;
                if ( (v55 & 0x20) == 0 )
                  v56 = v48;
                v48 = v56;
                if ( (v55 & 0x42) != 0 )
                  v48 = v56 | 0x42;
              }
            }
            v57 = 48 * ((v48 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v145 = v57;
            if ( !(_BYTE)v155 )
              goto LABEL_116;
            if ( v57 != *((_QWORD *)&v155 + 1)
              || *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v30 + 40) >> 39) & 0x3FFLL)) != v146
              || _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
            {
              v125[1] += MiDeleteBatch(&v155);
            }
            v58 = v155;
            if ( !(_BYTE)v155 )
            {
LABEL_116:
              *((_QWORD *)&v155 + 1) = v57;
              v138 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v138);
                while ( *(__int64 *)(v30 + 24) < 0 );
              }
              v58 = v155;
            }
            v59 = a1;
            if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
            {
              v60 = *(_BYTE *)(v30 + 34);
              if ( (v60 & 7) == 6
                && (*(_DWORD *)(v30 + 16) & 0x400LL) == 0
                && ((BugCheckParameter3 & 0x42) != 0 || (v60 & 0x10) != 0)
                && !v44
                && !v45 )
              {
                *((_QWORD *)v156 + v58) = BugCheckParameter3;
                if ( !(_BYTE)v155 )
                  v137 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v30 + 40) >> 39) & 0x3FFLL));
                v61 = ZeroPte;
                if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
                {
                  if ( (unsigned int)MiPteHasShadow() )
                  {
                    if ( !HIBYTE(word_140C4E048) && (v61 & 1) != 0 )
                      v61 |= 0x8000000000000000uLL;
                    *(_QWORD *)v3 = v61;
                    MiWritePteShadow(v3, v61);
LABEL_140:
                    LOBYTE(v155) = v155 + 1;
                    if ( (_BYTE)v155 == 16 )
                    {
                      v62 = MiDeleteBatch(&v155);
                      v2 = v125;
                      v14 = a1;
                      v12 = v123;
                      v125[1] += v62;
                      goto LABEL_369;
                    }
                    v14 = a1;
                    goto LABEL_367;
                  }
                  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                    && (v61 & 1) != 0 )
                  {
                    v61 |= 0x8000000000000000uLL;
                  }
                }
                *(_QWORD *)v3 = v61;
                goto LABEL_140;
              }
            }
            if ( v58 )
            {
              BYTE1(v155) = 1;
              v63 = MiDeleteBatch(&v155);
              v64 = v125;
              BYTE1(v155) = 0;
              v125[1] += v63;
            }
            else
            {
              v64 = v125;
            }
          }
          else
          {
            if ( v30 == qword_140C4EDA0 )
            {
              v65 = ZeroPte;
              if ( (unsigned int)MiPteInShadowRange(v3) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
                    v65 = ZeroPte | 0x8000000000000000uLL;
                  *(_QWORD *)v3 = v65;
                  MiWritePteShadow(v3, v65);
                  v14 = a1;
                  goto LABEL_367;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (ZeroPte & 1) != 0 )
                {
                  v65 = ZeroPte | 0x8000000000000000uLL;
                }
              }
              v14 = a1;
              *(_QWORD *)v3 = v65;
LABEL_367:
              v12 = v123;
              goto LABEL_368;
            }
            v64 = v125;
            v125[1] += MiDeleteBatch(&v155);
            if ( v40 != v3 )
              KeBugCheckEx(0x1Au, 0x403uLL, v3, BugCheckParameter3, *(_QWORD *)(v30 + 8));
            v66 = 48 * (*(_QWORD *)(v30 + 40) & 0xFFFFFFFFFLL);
            ++v125[3];
            v139 = 0;
            v67 = _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL);
            v145 = v66 - 0x58000000000LL;
            if ( v67 )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v139);
                while ( *(__int64 *)(v30 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) );
            }
            *(_QWORD *)(v30 + 24) |= 0x4000000000000000uLL;
            if ( v126 && v128 )
            {
              v153 = 0LL;
              v154 = 0LL;
              MiIdentifyPfn(v36 - 0x58000000000LL, &v153);
              v132 = 1;
            }
            v59 = a1;
            if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && ((*(_QWORD *)(v30 + 40) >> 60) & 7) == 2 )
              *(_QWORD *)(v30 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
          }
          v68 = *(_BYTE *)(v30 + 34);
          if ( (v68 & 7) != 6 )
            MiBadShareCount(v36 - 0x58000000000LL);
          v137 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v30 + 40) >> 39) & 0x3FFLL));
          if ( (BugCheckParameter3 & 0x42) != 0 && (v68 & 0x10) == 0 )
          {
            v69 = v68;
            if ( (*(_DWORD *)(v30 + 16) & 0x400LL) == 0 && (v68 & 8) == 0 )
            {
              v70 = MiCapturePageFileInfoInline((unsigned __int64 *)(v30 + 16), 1, 0);
              v69 = *(_BYTE *)(v30 + 34);
              v32 = v70;
            }
            *(_BYTE *)(v30 + 34) = v69 | 0x10;
          }
          if ( (*(_BYTE *)(v59 + 184) & 7) != 0 && (unsigned int)MI_PFN_IS_PROTO(v36 - 0x58000000000LL) )
          {
            v71 = *(_QWORD *)(v30 + 16);
            if ( (v71 & 0x400) == 0 || (BugCheckParameter3 & 0x200) != 0 )
              goto LABEL_181;
            if ( qword_140C4DF80 && (v71 & 0x10) == 0 )
              v71 &= ~qword_140C4DF80;
            if ( (*(_DWORD *)(*(_QWORD *)(v71 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_181:
              ++v64[3];
          }
          v72 = v128;
          v135 = 0;
          v38 = 4;
          v39 = 0;
          if ( v128 && v136 )
          {
            v39 = (*(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000;
            v135 = v39;
          }
          v73 = *(_QWORD *)(v30 + 24) ^ (*(_QWORD *)(v30 + 24) ^ (*(_QWORD *)(v30 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v30 + 24) = v73;
          if ( (v73 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
          {
            if ( v128 )
            {
              v38 = 2;
              if ( (v129 & 0x100) == 0 )
                *(_QWORD *)v30 &= ~1uLL;
            }
LABEL_287:
            if ( v39 )
              MiChargeCommit(v137, 1uLL, 4u);
            _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            LODWORD(v30) = 0;
            if ( v132 )
            {
              v157[1] = 24LL;
              v157[0] = &v153;
              EtwTraceKernelEvent((int)v157, 1, 0x20000001u, 631, 289413890);
              v132 = 0;
            }
            v37 = v145;
LABEL_292:
            if ( v37 )
            {
              v140 = v30;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v140);
                while ( *(__int64 *)(v37 + 24) < 0 );
              }
              if ( (*(_BYTE *)(v37 + 34) & 7) != 6 )
                MiBadShareCount(v37);
              v108 = (*(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
              *(_QWORD *)(v37 + 24) ^= (*(_QWORD *)(v37 + 24) ^ v108) & 0x3FFFFFFFFFFFFFFFLL;
              if ( !v108 )
                MiPfnShareCountIsZero(v37, 0LL);
              _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v109 = v137;
            if ( v32 )
              MiReleasePageFileInfo(v137, v32, 1);
            if ( v131 )
            {
              v110 = MiDecrementCombinedPte(v127 + 1664, v131);
              goto LABEL_317;
            }
            if ( BugCheckParameter2 )
            {
              v110 = MiDecrementCloneBlockReference(BugCheckParameter2, v149);
LABEL_317:
              v38 = v110;
            }
            if ( v39 )
              goto LABEL_325;
            if ( v38 == 3 )
            {
              if ( (*(_BYTE *)(a1 + 184) & 7) == 0 || v109 == v146 )
              {
                v2 = v125;
                ++v125[1];
                goto LABEL_326;
              }
LABEL_325:
              v2 = v125;
              goto LABEL_326;
            }
            v2 = v125;
            if ( v38 == 5 )
              ++v125[2];
LABEL_326:
            if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && !(unsigned int)MiPteIsSessionDynamicBuffer(v3) )
              ++*v2;
            if ( v3 < 0xFFFFF6FB7DBED000uLL || v3 > 0xFFFFF6FB7DBEDFFFuLL || (*(_BYTE *)(a1 + 184) & 7) == 0 )
            {
              v117 = ZeroPte;
              if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  if ( !HIBYTE(word_140C4E048) && (v117 & 1) != 0 )
                    v117 |= 0x8000000000000000uLL;
                  *(_QWORD *)v3 = v117;
                  MiWritePteShadow(v3, v117);
                  v12 = v123;
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
              v12 = v123;
              *(_QWORD *)v3 = v117;
LABEL_369:
              v8 = 0LL;
              goto LABEL_370;
            }
            MiWriteTopLevelPxe(v3, ZeroPte);
            v14 = a1;
            goto LABEL_333;
          }
          if ( !(unsigned int)MI_PFN_IS_PROTO(v36 - 0x58000000000LL) )
            goto LABEL_258;
          v77 = *(_QWORD *)(v30 + 16);
          v134 = v75;
          if ( (unsigned __int64)(v30 + 16) >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)(v30 + 16) <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow()
            && (v77 & 1) != 0
            && ((v77 & 0x20) == 0 || (v77 & 0x42) == 0) )
          {
            v79 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v79 )
            {
              v80 = *((_QWORD *)&v79->Flink + ((v78 >> 3) & 0x1FF));
              v81 = v77 | 0x20;
              if ( (v80 & 0x20) == 0 )
                v81 = v77;
              v77 = v81;
              if ( (v80 & 0x42) != 0 )
                v77 = v81 | 0x42;
            }
          }
          v82 = *(_QWORD *)(v30 + 8);
          v83 = v77 >> 5;
          v84 = v76;
          v85 = *(unsigned __int8 *)(48 * (*(_QWORD *)(v30 + 40) & 0xFFFFFFFFFLL) - 0x57FFFFFFFDELL) >> 6;
          if ( !v85 || v85 == 3 )
          {
            v84 = 12;
          }
          else if ( v85 == 2 )
          {
            v84 = 28;
          }
          ValidPte = MiMakeValidPte(0LL, *(_QWORD *)(v30 + 40) & 0xFFFFFFFFFLL, v84 | 0xA0000000);
          CurrentPrcb = KeGetCurrentPrcb();
          v88 = ValidPte;
          MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
          if ( !MmInternal
            || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
                v91 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                MmInternal[1543] = (unsigned __int64)v91,
                !UltraMapping) )
          {
            UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                         + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
            v91 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          }
          if ( (unsigned __int64)v91 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v91 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E048) && (v88 & 1) != 0 )
                v88 |= 0x8000000000000000uLL;
              *v91 = v88;
              MiWritePteShadow((__int64)v91, v88);
LABEL_220:
              v92 = (v82 >> 3) & 0x1FF;
              v93 = *(_QWORD *)(UltraMapping + 8 * v92);
              v94 = UltraMapping + 8 * v92;
              if ( v94 >= 0xFFFFF6FB7DBED000uLL
                && v94 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow()
                && (v93 & 1) != 0
                && ((v93 & 0x20) == 0 || (v93 & 0x42) == 0) )
              {
                v95 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v95 )
                {
                  v96 = *((_QWORD *)&v95->Flink + ((v94 >> 3) & 0x1FF));
                  v97 = v93 | 0x20;
                  if ( (v96 & 0x20) == 0 )
                    v97 = v93;
                  v93 = v97;
                  if ( (v96 & 0x42) != 0 )
                    v93 = v97 | 0x42;
                }
              }
              v134 = v93;
              if ( (unsigned __int64)&v134 >= 0xFFFFF6FB7DBED000uLL
                && (unsigned __int64)&v134 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow()
                && (v93 & 1) != 0
                && ((v93 & 0x20) == 0 || (v93 & 0x42) == 0) )
              {
                v98 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v98 )
                {
                  v99 = *((_QWORD *)&v98->Flink + (((unsigned __int64)&v134 >> 3) & 0x1FF));
                  v100 = v93 | 0x20;
                  if ( (v99 & 0x20) == 0 )
                    v100 = v93;
                  v93 = v100;
                  if ( (v99 & 0x42) != 0 )
                    v93 = v100 | 0x42;
                }
              }
              v101 = v93 & 0xFFFFFFFFF000LL | (32 * (v83 & 0x1F | 0x40));
              if ( qword_140C4DF80 )
              {
                if ( (v101 & qword_140C4DF80) != 0 )
                  v101 |= 0x10uLL;
                else
                  v101 |= qword_140C4DF80;
              }
              v134 = v101;
              if ( v94 >= 0xFFFFF6FB7DBED000uLL && v94 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  if ( !HIBYTE(word_140C4E048) && (v101 & 1) != 0 )
                    v101 |= 0x8000000000000000uLL;
                  *(_QWORD *)v94 = v101;
                  MiWritePteShadow(v94, v101);
LABEL_257:
                  LOBYTE(v101) = 17;
                  MiUnmapPageInHyperSpaceWorker(v94, v101, 0x80000000LL);
                  v74 = *(_QWORD *)(v30 + 24);
                  v75 = 0LL;
                  v39 = v135;
                  v36 = v152;
                  v3 = v150;
                  v72 = v128;
                  v76 = 4;
LABEL_258:
                  --*(_WORD *)(v30 + 32);
                  v102 = (v74 >> 62) & 1;
                  if ( *(_WORD *)(v30 + 32) )
                  {
                    v103 = *(_BYTE *)(v30 + 34);
                    if ( (_DWORD)v102 )
                    {
                      v104 = v103 | 7;
                    }
                    else if ( (v103 & 0x10) != 0 )
                    {
                      v104 = v103 & 0xF8 | 3;
                    }
                    else
                    {
                      v104 = v103 & 0xF8 | 2;
                    }
                    *(_BYTE *)(v30 + 34) = v104;
                    if ( (*(_DWORD *)(v30 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v30 + 16) )
                      *(_BYTE *)(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v30 + 40) >> 39) & 0x3FFLL)) + 675LL) = 1;
                    v38 = 3;
                    if ( v72 && v136 )
                      v39 = 1;
                    if ( (unsigned int)MI_PFN_IS_PROTO(v30) && !v131 && !BugCheckParameter2 )
                      v38 = 4;
                  }
                  else
                  {
                    if ( (_DWORD)v102 )
                    {
                      v105 = *(_BYTE *)(v30 + 35);
                      if ( (v105 & 0x10) != 0 )
                        *(_BYTE *)(v30 + 35) = v105 & 0xEF;
                      v106 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v30 + 40) >> 39) & 0x3FFLL));
                      v144 = *(_QWORD *)(v30 + 16);
                      if ( (v144 & 0x400) == 0 )
                      {
                        v107 = (v144 & 4) != 0 || (v144 & 2) != 0 ? MI_READ_PTE_LOCK_FREE(&v144) : v75;
                        v144 = v107;
                        if ( v107 )
                          MiReleasePageFileInfo(v106, v107, 0);
                      }
                      MiInsertPageInFreeOrZeroedList(v36 / 48, 2);
                    }
                    else
                    {
                      v111 = *(_QWORD *)(v30 + 16);
                      v112 = -9LL;
                      if ( (v111 & 0x400) != 0 )
                        v112 = -2049LL;
                      *(_QWORD *)(v30 + 16) = v111 & v112;
                      v113 = *(_BYTE *)(v30 + 34);
                      if ( (v113 & 0x10) != 0 )
                      {
                        v114 = 136LL;
                        if ( v148 != 1 )
                          v114 = 8LL;
                        MiInsertPageInList(v30, v114);
                      }
                      else
                      {
                        v115 = v148;
                        *(_BYTE *)(v30 + 34) = v113 & 0xF8 | 2;
                        if ( v115 <= 1 || (unsigned int)MiGetPfnPriority(v30) >= 5 )
                          MiInsertPageInList(v30, v76);
                        else
                          MiInsertProtectedStandbyPage(v116, v30);
                      }
                    }
                    v38 = 4;
                  }
                  goto LABEL_287;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v101 & 1) != 0 )
                {
                  v101 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)v94 = v101;
              goto LABEL_257;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v88 & 1) != 0 )
            {
              v88 |= 0x8000000000000000uLL;
            }
          }
          *v91 = v88;
          goto LABEL_220;
        }
        v2[1] += MiDeleteBatch(&v155);
        v118 = MiTryDeleteTransitionPte(v3);
        if ( v118 == 1 )
        {
          BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v3);
          v119 = BugCheckParameter3;
          MiReleasePageFileSpace(v146, BugCheckParameter3, 1LL);
          if ( (*(_BYTE *)(v14 + 184) & 7) != 0 )
          {
            ++v2[3];
            if ( !(unsigned int)MiPteIsSessionDynamicBuffer(v3) )
              ++*v2;
          }
          else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v119) )
          {
            ++v2[3];
          }
          v120 = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(v3) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
                v120 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)v3 = v120;
              MiWritePteShadow(v3, v120);
              goto LABEL_333;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v120 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v3 = v120;
LABEL_333:
          v12 = v123;
          goto LABEL_369;
        }
        ++v2[3];
        if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && !(unsigned int)MiPteIsSessionDynamicBuffer(v3) )
          ++*v2;
        v14 = a1;
        v12 = v123;
        v8 = 0LL;
        if ( v118 == 3 )
          ++v2[1];
      }
LABEL_370:
      v13 = v147;
      v3 += 8LL;
      v150 = v3;
      if ( v3 > v151 )
        break;
      v10 = v128;
      LOBYTE(v7) = v129;
    }
  }
  result = MiDeleteBatch(&v155);
  if ( v123 )
  {
    v122 = HIWORD(*(_DWORD *)(v13 + 16)) & 0x3FF;
    if ( v122 < v123 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v13, v122, v123);
    v141 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
      {
        KeYieldProcessorEx(&v141);
        result = *(_QWORD *)(v13 + 24);
      }
      while ( result < 0 );
    }
    *(_QWORD *)(v13 + 16) ^= ((unsigned int)*(_QWORD *)(v13 + 16) ^ (((unsigned int)(*(_QWORD *)(v13 + 16) >> 16) - v123) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
