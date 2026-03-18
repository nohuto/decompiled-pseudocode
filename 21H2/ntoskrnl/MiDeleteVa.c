/*
 * XREFs of MiDeleteVa @ 0x140330730
 * Callers:
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiUnmapFrameBuffer @ 0x14020101C (MiUnmapFrameBuffer.c)
 *     MiEvictPageTableLock @ 0x140229100 (MiEvictPageTableLock.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiCompressTbFlushList @ 0x14022BAE0 (MiCompressTbFlushList.c)
 *     MiLocateCloneAddress @ 0x140234F14 (MiLocateCloneAddress.c)
 *     MiDecrementCombinedPte @ 0x1402399A8 (MiDecrementCombinedPte.c)
 *     MiRotatedToFrameBuffer @ 0x1402433D0 (MiRotatedToFrameBuffer.c)
 *     MiDeletePhysmemPte @ 0x140259000 (MiDeletePhysmemPte.c)
 *     MiUpdateSessionPxeMaster @ 0x14025DD8C (MiUpdateSessionPxeMaster.c)
 *     MiFlushTbListEarly @ 0x140269FA8 (MiFlushTbListEarly.c)
 *     MiGetPfnPriority @ 0x140273234 (MiGetPfnPriority.c)
 *     MiCountWslesInPageTable @ 0x140274720 (MiCountWslesInPageTable.c)
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiIsPageTableDeletable @ 0x1402D01A8 (MiIsPageTableDeletable.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiCreateDecayPfn @ 0x1402E48A0 (MiCreateDecayPfn.c)
 *     MiUnlockWsle @ 0x1402E599C (MiUnlockWsle.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiTerminateWsleCluster @ 0x14032F750 (MiTerminateWsleCluster.c)
 *     MiRemoveWsle @ 0x140331CC0 (MiRemoveWsle.c)
 *     MiLogPageAccess @ 0x140333040 (MiLogPageAccess.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     MiLockSetPfnPriority @ 0x140386110 (MiLockSetPfnPriority.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiDeleteVadAwePtes @ 0x1405AA614 (MiDeleteVadAwePtes.c)
 *     MiWriteTopLevelPxe @ 0x1405AE8FC (MiWriteTopLevelPxe.c)
 *     MiDeleteLargeUserPde @ 0x1405B07F4 (MiDeleteLargeUserPde.c)
 *     MiDecrementCloneBlockReference @ 0x1405BA498 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  unsigned __int64 v6; // r8
  unsigned __int64 v8; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r9
  int v13; // r15d
  unsigned __int64 i; // rsi
  __int64 v15; // rax
  struct _LIST_ENTRY *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  int v21; // r12d
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  _QWORD *v24; // r8
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // r13
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdi
  __int64 v30; // rbx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rax
  struct _LIST_ENTRY *v33; // rcx
  __int64 v34; // rcx
  char v35; // r12
  unsigned __int64 v36; // rax
  struct _LIST_ENTRY *v37; // r8
  __int64 v38; // rcx
  bool v39; // sf
  __int64 v40; // rax
  BOOL v41; // r13d
  __int64 v42; // rcx
  int v43; // r8d
  unsigned int v44; // eax
  __int64 v45; // r15
  unsigned __int64 v46; // rbx
  __int64 v47; // r9
  int v48; // r10d
  unsigned __int8 WsleContents; // r12
  volatile unsigned __int64 v50; // rax
  struct _LIST_ENTRY *v51; // r8
  __int64 v52; // rcx
  _BOOL8 v53; // r13
  __int64 v54; // rcx
  volatile unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r9
  struct _LIST_ENTRY *v57; // r8
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  volatile unsigned __int64 v60; // r8
  unsigned __int64 v61; // r10
  unsigned int v62; // ecx
  char v63; // r11
  unsigned __int64 *v64; // r8
  unsigned __int64 v65; // r10
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // r9
  unsigned __int64 v68; // r8
  struct _LIST_ENTRY *v69; // rax
  __int64 v70; // rax
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *v72; // r8
  __int64 v73; // rax
  unsigned __int64 *v74; // rbx
  char v75; // cl
  int v76; // edx
  char v77; // cl
  unsigned int v78; // r8d
  __int64 v79; // r10
  __int64 v80; // rax
  unsigned __int64 v81; // r9
  __int64 v82; // r9
  __int64 v83; // rax
  unsigned __int64 v84; // rcx
  __int64 v85; // rdx
  unsigned __int64 v86; // rax
  unsigned int v87; // ecx
  __int64 v88; // rax
  struct _LIST_ENTRY *v89; // rdx
  __int64 v90; // rax
  unsigned __int64 v91; // rdx
  unsigned int v92; // r11d
  unsigned __int64 v93; // rax
  __int64 v94; // rdx
  int v95; // eax
  unsigned __int64 v96; // rdx
  __int64 v97; // r8
  _QWORD *CloneAddress; // rax
  ULONG_PTR v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rdi
  unsigned __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // r15
  unsigned __int64 v105; // rdx
  unsigned __int64 v106; // r8
  unsigned __int64 v107; // r10
  unsigned __int64 v108; // r9
  struct _LIST_ENTRY *v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rbx
  ULONG_PTR v114; // r9
  unsigned int v116; // [rsp+30h] [rbp-69h] BYREF
  __int64 v117; // [rsp+38h] [rbp-61h]
  __int64 v118; // [rsp+40h] [rbp-59h]
  unsigned __int64 v119; // [rsp+48h] [rbp-51h]
  int v120; // [rsp+50h] [rbp-49h]
  unsigned __int64 v121; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v122; // [rsp+60h] [rbp-39h] BYREF
  _BOOL8 v123; // [rsp+68h] [rbp-31h]
  unsigned __int64 v124; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int64 v125; // [rsp+78h] [rbp-21h] BYREF
  __int64 v126; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int64 v127; // [rsp+88h] [rbp-11h] BYREF
  _OWORD v128[2]; // [rsp+90h] [rbp-9h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = a3;
  v116 = a3;
  v6 = 0xFFFFF6FB7DBED000uLL;
  v8 = 0xFFFFF6FB7DBED7F8uLL;
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
      v10 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      if ( (v10 & 0x20) != 0 )
        v3 |= 0x20uLL;
      if ( (v10 & 0x42) != 0 )
        v3 |= 0x42uLL;
    }
  }
  v11 = v3;
  v121 = v3;
  if ( !v3 )
  {
    if ( !(_DWORD)v4 )
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
            if ( (v17 & 0x20) != 0 )
              v15 |= 0x20uLL;
            if ( (v17 & 0x42) != 0 )
              v15 |= 0x42uLL;
          }
        }
        if ( v15 )
          break;
        if ( !++v13 )
          break;
      }
      *(_DWORD *)(a1 + 8) = v13 - 1;
    }
    return 0LL;
  }
  v18 = *(_QWORD *)(a1 + 168);
  v19 = *(_QWORD *)(a1 + 24);
  v20 = *(_QWORD *)(a1 + 16);
  v117 = v18;
  v21 = *(_DWORD *)(v18 + 104);
  v118 = v19;
  v22 = (__int64)(a2 << 25) >> 16;
  v119 = v22;
  if ( (v3 & 1) != 0 )
  {
    if ( (int)v4 < 1 )
      goto LABEL_42;
    if ( (v3 & 0x80u) == 0LL )
    {
      if ( !(unsigned int)MiIsPageTableDeletable(a1, a2) )
        return 0LL;
      v19 = v118;
      v4 = v116;
      if ( (*(_BYTE *)(v118 + 184) & 7) == 1 && v116 == 3 )
      {
        MiUpdateSessionPxeMaster(v118, ZeroPte);
        v19 = v118;
        v4 = v116;
      }
      v18 = v117;
LABEL_42:
      if ( (*(_BYTE *)(v19 + 184) & 7) != 0 )
      {
        MiInsertTbFlushEntry(v20, v119, 1LL, 0);
        if ( (v21 & 0x100) == 0 && v119 >= 0xFFFFF68000000000uLL && v119 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          if ( !(unsigned int)MiEvictPageTableLock(v118, a2, v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400, (int)v116 > 1) )
            return 0LL;
          goto LABEL_260;
        }
        goto LABEL_83;
      }
      if ( (_DWORD)v4 )
      {
        v27 = v117;
        goto LABEL_81;
      }
      if ( (v21 & 0x800) != 0 )
      {
        MiDeleteLargeUserPde(a1, a2, 0LL);
        MiFlushTbListEarly(v20, 0);
        return 0LL;
      }
      if ( (v21 & 0x10) != 0 )
      {
        v23 = MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 40LL), a2, v18 + 112, v4);
        MiInsertTbFlushEntry(v20, (__int64)(a2 << 25) >> 16, v23, 0);
        goto LABEL_260;
      }
      if ( (v21 & 0x60) != 0 )
      {
        MiDeletePhysmemPte(a1, a2);
        goto LABEL_260;
      }
      if ( (v21 & 8) != 0 )
      {
        if ( MiRotatedToFrameBuffer(a2) )
        {
          v126 = 0LL;
          MiUnmapFrameBuffer((unsigned __int64 *)a2, 3, 0, &v126);
          MiInsertTbFlushEntry(v20, v119, 1LL, 0);
LABEL_260:
          v91 = qword_140C507D0;
          if ( (*(_BYTE *)(v20 + 4) & 2) == 0
            && *(_DWORD *)v20 == 1
            && KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5] )
          {
            v91 = -1LL;
          }
          if ( (*(_DWORD *)(v20 + 12) >= *(_DWORD *)(v20 + 8) || *(_BYTE *)(v20 + 5) || *(_QWORD *)(v20 + 16) > v91)
            && v91 >= 0x400
            && !*(_BYTE *)(v20 + 5) )
          {
            MiFlushTbList(v20);
          }
          goto LABEL_351;
        }
        v19 = v118;
      }
      if ( (v21 & 0x90) != 0x80 )
        goto LABEL_80;
      if ( (v21 & 2) != 0 && (*(_BYTE *)(v19 + 187) & 1) == 0 && dword_140C52B68 )
      {
        if ( v22 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
LABEL_66:
          if ( (*(_BYTE *)a2 & 0x20) != 0 )
            MiLogPageAccess(v19, a2);
          goto LABEL_68;
        }
        v24 = (_QWORD *)(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0 )
        {
          v11 = v121;
        }
        if ( (HIBYTE(*v24) & 0xF) != 7 )
        {
          v19 = v118;
          goto LABEL_66;
        }
      }
LABEL_68:
      v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v121) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
      if ( (*(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        if ( (v21 & 1) != 0 && (unsigned int)MiGetPfnPriority(v25) - 3 <= 2 )
          MiLockSetPfnPriority(v26, 2LL);
        v27 = v117;
        if ( (v21 & 4) != 0
          && !*(_QWORD *)(v117 + 88)
          && (v3 & 0x42) == 0
          && *(__int64 *)(v25 + 40) < 0
          && (*(_BYTE *)(v25 + 34) & 0x10) == 0
          && (unsigned int)MiGetPfnPriority(v25) < 5 )
        {
          *(_QWORD *)(v117 + 88) = MiCreateDecayPfn();
        }
LABEL_81:
        if ( (v21 & 0x100) != 0 )
        {
          MiInsertTbFlushEntry(v20, v119, 1LL, 0);
LABEL_83:
          if ( (v11 & 1) != 0 )
          {
            v28 = v11 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
            v121 = v28;
            if ( v116 == 3 && (*(_BYTE *)(v118 + 184) & 7) != 0 )
            {
              MiWriteTopLevelPxe(a2, v28);
            }
            else if ( MiPteInShadowRange(a2) && (unsigned int)MiPteHasShadow() )
            {
              *(_QWORD *)a2 = v28;
              MiWritePteShadow(a2, v28);
            }
            else
            {
              *(_QWORD *)a2 = v28;
            }
          }
          goto LABEL_260;
        }
        v29 = v119;
        if ( !v116 && (HIBYTE(*(_QWORD *)(((v119 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF) != 8 )
        {
          v30 = v27 + 120;
          v31 = ((v119 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v32 = *(_QWORD *)v31;
          if ( v31 >= 0xFFFFF6FB7DBED000uLL
            && v31 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            v33 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v33 )
            {
              v34 = *((_QWORD *)&v33->Flink + ((v31 >> 3) & 0x1FF));
              if ( (v34 & 0x20) != 0 )
                v32 |= 0x20uLL;
              if ( (v34 & 0x42) != 0 )
                v32 |= 0x42uLL;
            }
          }
          v35 = HIBYTE(v32) & 0xF | (16 * ((v32 >> 60) & 7));
          v36 = *(_QWORD *)a2;
          if ( a2 >= 0xFFFFF6FB7DBED000uLL
            && a2 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v36 & 1) != 0
            && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
          {
            v37 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v37 )
            {
              v38 = *((_QWORD *)&v37->Flink + ((a2 >> 3) & 0x1FF));
              if ( (v38 & 0x20) != 0 )
                v36 |= 0x20uLL;
              if ( (v38 & 0x42) != 0 )
                v36 |= 0x42uLL;
            }
          }
          v127 = v36;
          v39 = *(__int64 *)(48
                           * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v127) >> 12) & 0xFFFFFFFFFFLL)
                           - 0x21FFFFFFFFD8LL) < 0;
          v40 = *(_QWORD *)(v27 + 128);
          v41 = !v39;
          if ( !v40 )
            goto LABEL_120;
          v42 = *(_QWORD *)(v30 + 16);
          if ( a2 == v40 + 8 * v42 && v35 == *(_BYTE *)(v30 + 28) && v41 == (*(_DWORD *)(v30 + 24) & 1) )
          {
            v43 = 1;
            *(_QWORD *)(v30 + 16) = v42 + 1;
            goto LABEL_238;
          }
          if ( (*(_DWORD *)(v30 + 24) & 2) == 0 )
          {
            MiTerminateWsleCluster(v30);
LABEL_120:
            v43 = 1;
            v44 = v41 | *(_DWORD *)(v30 + 24) & 0xFFFFFFFE;
            *(_QWORD *)v30 = v118;
            *(_DWORD *)(v30 + 24) = v44;
            *(_QWORD *)(v30 + 8) = a2;
            *(_QWORD *)(v30 + 16) = 1LL;
            *(_BYTE *)(v30 + 28) = v35;
            goto LABEL_238;
          }
        }
        v45 = 1LL;
        LODWORD(v123) = 1;
        LODWORD(v119) = 0;
        v46 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v47 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v46) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( v29 < 0xFFFFF68000000000uLL || v29 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v50 = *(_QWORD *)v46;
          v48 = 1;
          v120 = 1;
          if ( v46 >= 0xFFFFF6FB7DBED000uLL
            && v46 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v50 & 1) != 0
            && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
          {
            v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v51 )
            {
              v52 = *((_QWORD *)&v51->Flink + ((v46 >> 3) & 0x1FF));
              if ( (v52 & 0x20) != 0 )
                v50 |= 0x20uLL;
              if ( (v52 & 0x42) != 0 )
                v50 |= 0x42uLL;
            }
          }
          v53 = *(_QWORD *)(v47 + 40) >= 0LL;
          WsleContents = HIBYTE(v50) & 0xF | (16 * ((v50 >> 60) & 7));
          v123 = v53;
          if ( (HIBYTE(v50) & 0xF) == 8 )
          {
            MiUnlockWsle(v118, v29, v47);
            WsleContents = MiGetWsleContents(v54, v29);
            v123 = v53;
            v48 = 1;
          }
        }
        else
        {
          v48 = 0;
          v120 = 0;
          WsleContents = (*(_BYTE *)v47 >> 1) & 7;
        }
        v55 = *(_QWORD *)v46;
        v56 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v46 >= 0xFFFFF6FB7DBED000uLL
          && v46 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v55 & 1) != 0
          && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
        {
          v57 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v57 )
          {
            v58 = *((_QWORD *)&v57->Flink + ((v46 >> 3) & 0x1FF));
            if ( (v58 & 0x20) != 0 )
              v55 |= 0x20uLL;
            if ( (v58 & 0x42) != 0 )
              v55 |= 0x42uLL;
          }
        }
        v59 = v55 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        if ( !v48 )
        {
          if ( !(unsigned int)MiEvictPageTableLock(v118, v46, v59, 0) )
            return 0LL;
          goto LABEL_177;
        }
        v60 = *(_QWORD *)v46;
        v61 = 0xFFFFF6FB7DBED000uLL;
        if ( v46 >= 0xFFFFF6FB7DBED000uLL && v46 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
          goto LABEL_172;
        v62 = ((unsigned int)MiFlags >> 27) & 3;
        if ( v62 > 1 )
        {
          if ( (MiFlags & 0x4000000) != 0 )
            _mm_lfence();
        }
        else
        {
          if ( !v62 )
            goto LABEL_172;
          if ( v46 >= 0xFFFFF6FB40000000uLL && v46 <= 0xFFFFF6FB7FFFFFFFuLL && (v60 & 0x80u) == 0LL )
            LOBYTE(v60) = 32;
        }
        if ( (v60 & 0x20) == 0 )
        {
          if ( (MiFlags & 0x4000000) != 0 )
            _mm_lfence();
          v63 = _InterlockedExchange64((volatile __int64 *)v46, v59);
          if ( v46 >= v61 && v46 <= v56 )
            MiWritePteShadow(v46, v59);
          if ( (v63 & 0x20) == 0 )
          {
LABEL_178:
            MiRemoveWsle(v118, v29, 1, WsleContents, 10, v123);
            if ( v120 )
            {
              v64 = (unsigned __int64 *)(((v29 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
              v65 = 0xFFFFF6FB7DBED000uLL;
              v66 = *v64;
              v67 = 0xFFFFF6FB7DBED7F8uLL;
              if ( (unsigned __int64)v64 >= 0xFFFFF6FB7DBED000uLL
                && (unsigned __int64)v64 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow()
                && (v66 & 1) != 0
                && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
              {
                v69 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v69 )
                {
                  v70 = *((_QWORD *)&v69->Flink + ((v68 >> 3) & 0x1FF));
                  if ( (v70 & 0x20) != 0 )
                    v66 |= 0x20uLL;
                  if ( (v70 & 0x42) != 0 )
                    v66 |= 0x42uLL;
                }
              }
              v124 = v66;
              Process = (_KPROCESS *)&v124;
              if ( (unsigned __int64)&v124 >= v65 )
              {
                Process = (_KPROCESS *)&v124;
                if ( (unsigned __int64)&v124 <= v67
                  && (unsigned int)MiPteHasShadow()
                  && (v66 & 1) != 0
                  && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
                {
                  Process = KeGetCurrentThread()->ApcState.Process;
                  v72 = Process[1].ProcessListEntry.Flink;
                  if ( v72 )
                  {
                    v73 = *((_QWORD *)&v72->Flink + (((unsigned __int64)&v124 >> 3) & 0x1FF));
                    if ( (v73 & 0x20) != 0 )
                      v66 |= 0x20uLL;
                    if ( (v73 & 0x42) != 0 )
                      v66 |= 0x42uLL;
                  }
                }
              }
              v74 = (unsigned __int64 *)(48 * ((v66 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
              if ( ((*(_DWORD *)v74 >> 4) & 0x3FF) == 0 )
              {
                MiCountWslesInPageTable((__int64)Process, v29, v128);
                v75 = 8;
                while ( 1 )
                {
                  v76 = *((_DWORD *)v128 + (unsigned __int8)--v75);
                  if ( v76 )
                    break;
                  if ( !v75 )
                    goto LABEL_207;
                }
                *v74 = *v74 & 0xFFFFFFFFFFFE000FuLL | (16 * (v76 & 0x3FF | ((unsigned __int64)(v75 & 7) << 10)));
              }
            }
LABEL_207:
            if ( !(_DWORD)v119 )
              goto LABEL_237;
            if ( *(_DWORD *)v20 != 1 )
            {
              v77 = *(_BYTE *)(v20 + 4);
              if ( (v77 & 8) == 0 && v29 >= 0xFFFFF68000000000uLL && v29 <= 0xFFFFF6FFFFFFFFFFuLL )
                *(_BYTE *)(v20 + 4) = v77 | 8;
            }
            v78 = *(_DWORD *)(v20 + 12);
            if ( v78 && (*(_BYTE *)(v20 + 4) & 4) == 0 )
            {
              v79 = v20 + 8LL * (v78 - 1);
              v80 = *(_QWORD *)(v79 + 24);
              if ( (v80 & 0xC00) == 0 )
              {
                v81 = *(_QWORD *)(v79 + 24) & 0x3FFLL;
                if ( (v80 & 0xFFFFFFFFFFFFF000uLL) + ((v81 + 1) << 12) == v29 && v81 + 1 >= v81 && v81 + 1 <= 0x3FF )
                {
                  ++*(_QWORD *)(v20 + 16);
                  *(_QWORD *)(v79 + 24) = v80 ^ ((unsigned __int16)v80 ^ (unsigned __int16)(v80 + 1)) & 0x3FF;
                  goto LABEL_237;
                }
              }
              v82 = v20 + 8LL * (v78 - 1);
              v83 = *(_QWORD *)(v82 + 24);
              if ( (v83 & 0xC00) == 0 && (v83 & 0xFFFFFFFFFFFFF000uLL) == v29 + 4096 )
              {
                v84 = *(_QWORD *)(v82 + 24) & 0x3FFLL;
                if ( v84 + 1 >= v84 && v84 + 1 <= 0x3FF )
                {
                  ++*(_QWORD *)(v20 + 16);
                  *(_QWORD *)(v82 + 24) = (v83 - 4096) ^ ((unsigned __int16)(v83 - 4096) ^ (unsigned __int16)(v83 - 4096 + 1)) & 0x3FF;
                  goto LABEL_237;
                }
              }
            }
            if ( v78 < *(_DWORD *)(v20 + 8) )
            {
              while ( 1 )
              {
                v85 = 1024LL;
                if ( (unsigned __int64)(v45 - 1) <= 0x3FF )
                  v85 = v45;
                v45 -= v85;
                v86 = v29 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v85 - 1) & 0x3FF;
                v29 += v85 << 12;
                *(_QWORD *)(v20 + 8LL * (unsigned int)(*(_DWORD *)(v20 + 12))++ + 24) = v86;
                v87 = *(_DWORD *)(v20 + 12);
                *(_QWORD *)(v20 + 16) += v85;
                if ( v87 == *(_DWORD *)(v20 + 8) && (*(_BYTE *)(v20 + 4) & 4) == 0 )
                {
                  qsort((void *)(v20 + 24), v87, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
                  MiCompressTbFlushList(v20);
                  v88 = *(unsigned int *)(v20 + 12);
                  if ( (_DWORD)v88 == *(_DWORD *)(v20 + 8) )
                    break;
                }
                if ( !v45 )
                  goto LABEL_237;
              }
              v43 = 0;
              if ( v45 )
              {
                *(_BYTE *)(v20 + 5) = 1;
                *(_QWORD *)(v20 + 16) = v88;
              }
LABEL_238:
              v11 = *(_QWORD *)a2;
              if ( a2 >= 0xFFFFF6FB7DBED000uLL
                && a2 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow()
                && (v11 & 1) != 0
                && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
              {
                v89 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v89 )
                {
                  v90 = *((_QWORD *)&v89->Flink + ((a2 >> 3) & 0x1FF));
                  if ( (v90 & 0x20) != 0 )
                    v11 |= 0x20uLL;
                  if ( (v90 & 0x42) != 0 )
                    v11 |= 0x42uLL;
                }
              }
              if ( v43 )
                goto LABEL_260;
              goto LABEL_83;
            }
            *(_BYTE *)(v20 + 5) = 1;
LABEL_237:
            v43 = 0;
            goto LABEL_238;
          }
LABEL_177:
          LODWORD(v119) = 1;
          goto LABEL_178;
        }
LABEL_172:
        if ( v46 >= v61 && v46 <= v56 && (unsigned int)MiPteHasShadow() )
        {
          *(_QWORD *)v46 = v59;
          MiWritePteShadow(v46, v59);
        }
        else
        {
          *(_QWORD *)v46 = v59;
        }
        goto LABEL_177;
      }
LABEL_80:
      v27 = v117;
      goto LABEL_81;
    }
LABEL_347:
    MiDeleteLargeUserPde(a1, a2, (unsigned int)v4);
    return 0LL;
  }
  v92 = 0;
  if ( (v3 & 0x400) != 0 )
  {
    if ( !qword_140C50780 || (v3 & 0x10) != 0 )
    {
      v93 = v3;
      v94 = v3 >> 16;
    }
    else
    {
      v93 = v3 & ~qword_140C50780;
      v94 = (v3 >> 16) & (~qword_140C50780 >> 16);
      v19 = v118;
    }
    if ( HIDWORD(v93) == 0xFFFFFFFF || (v3 & 0x800) == 0 )
    {
      if ( !KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[12]
        || MiIsPrototypePteVadLookup(v3)
        || (CloneAddress = MiLocateCloneAddress(v97, v96)) == 0LL )
      {
LABEL_287:
        v6 = 0xFFFFF6FB7DBED000uLL;
        goto LABEL_304;
      }
      v95 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v99);
    }
    else
    {
      v95 = MiDecrementCombinedPte(v19, v94);
    }
    if ( v95 == 3 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v117 + 16) + 8LL);
    }
    else if ( v95 == 5 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v117 + 16) + 24LL);
    }
    v92 = 0;
    v8 = 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_287;
  }
  if ( (v3 & 0x800) != 0 )
  {
    if ( (v21 & 0x800) == 0 )
    {
      if ( (v21 & 0x10) == 0 || (v3 & 0x3E0) != 0x300 )
        goto LABEL_352;
      MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 40LL), a2, v18 + 112, v4);
LABEL_351:
      v18 = v117;
LABEL_352:
      if ( !*(_QWORD *)v18 )
        *(_QWORD *)v18 = a2;
      *(_QWORD *)(v18 + 8) = a2;
      return 0LL;
    }
    goto LABEL_347;
  }
  if ( (v3 & 0x3E0) == 0 )
    KeBugCheckEx(0x1Au, 0x41792uLL, a2, v3, 0LL);
  v100 = *(unsigned __int16 *)(v19 + 174);
  v122 = v3;
  v101 = *(_QWORD *)(qword_140C51F48 + 8 * v100);
  if ( (v3 & 4) != 0 || (v3 & 2) != 0 )
  {
    v102 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v122);
    v122 = v102;
    if ( v102 )
      MiReleasePageFileInfo(v101, v102, 0);
    v18 = v117;
    v92 = 0;
    v6 = 0xFFFFF6FB7DBED000uLL;
    v8 = 0xFFFFF6FB7DBED7F8uLL;
  }
  else
  {
    v122 = 0LL;
  }
  if ( (*(_BYTE *)(v118 + 184) & 7) != 0 )
    goto LABEL_303;
  if ( (v21 & 0x80u) != 0 )
  {
    if ( qword_140C50780 && (v3 & 0x10) == 0 )
      LOWORD(v3) = ~(_WORD)qword_140C50780 & v3;
    if ( (v3 & 0x400) != 0 || (v3 & 0x800) != 0 || (v3 & 4) != 0 )
LABEL_303:
      ++*(_QWORD *)(*(_QWORD *)(v18 + 16) + 32LL);
  }
LABEL_304:
  v103 = ZeroPte;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= v8 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C51864) && (v103 & 1) != 0 )
        v103 |= 0x8000000000000000uLL;
      *(_QWORD *)a2 = v103;
      MiWritePteShadow(a2, v103);
      v6 = 0xFFFFF6FB7DBED000uLL;
      goto LABEL_316;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v103 & 1) != 0 )
      v103 |= 0x8000000000000000uLL;
  }
  *(_QWORD *)a2 = v103;
LABEL_316:
  if ( (v21 & 0x80u) != 0 && (a2 < v6 || a2 > 0xFFFFF6FB7DBEDFFFuLL) )
  {
    v104 = (v22 >> 18) & 0x3FFFFFF8;
    v105 = *(_QWORD *)(v104 - 0x904C0000000LL);
    v106 = v104 - 0x904C0000000LL;
    v107 = 0xFFFFF6FB7DBED000uLL;
    v108 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)(v104 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
      && v106 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v105 & 1) != 0
      && ((v105 & 0x20) == 0 || (v105 & 0x42) == 0) )
    {
      v109 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v109 )
      {
        v106 = (v106 >> 3) & 0x1FF;
        v110 = *((_QWORD *)&v109->Flink + v106);
        if ( (v110 & 0x20) != 0 )
          v105 |= 0x20uLL;
        if ( (v110 & 0x42) != 0 )
          v105 |= 0x42uLL;
      }
    }
    v125 = v105;
    if ( (unsigned __int64)&v125 >= v107
      && (unsigned __int64)&v125 <= v108
      && (unsigned int)MiPteHasShadow()
      && (v105 & 1) != 0
      && ((v105 & 0x20) == 0 || (v105 & 0x42) == 0) )
    {
      v106 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v106 )
      {
        v111 = *(_QWORD *)(v106 + 8 * (((unsigned __int64)&v125 >> 3) & 0x1FF));
        if ( (v111 & 0x20) != 0 )
          v105 |= 0x20uLL;
        if ( (v111 & 0x42) != 0 )
          v105 |= 0x42uLL;
      }
    }
    v112 = (v105 >> 12) & 0xFFFFFFFFFFLL;
    v113 = 48 * v112 - 0x220000000000LL;
    v114 = HIWORD(*(_DWORD *)(v113 + 16)) & 0x3FF;
    if ( (*(_DWORD *)(v113 + 16) & 0x3FF0000) == 0 )
      KeBugCheckEx(0x1Au, 0x41790uLL, 48 * v112 - 0x220000000000LL, v114, 1uLL);
    v116 = v92;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v113 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v116, v112, v106, v114);
      while ( *(__int64 *)(v113 + 24) < 0 );
    }
    *(_QWORD *)(v113 + 16) ^= ((unsigned int)*(_QWORD *)(v113 + 16) ^ (((unsigned int)(*(_QWORD *)(v113 + 16) >> 16) - 1) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v113 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
