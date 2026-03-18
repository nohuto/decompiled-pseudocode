/*
 * XREFs of MiDeleteSystemPagableVm @ 0x140252640
 * Callers:
 *     MmFreePoolMemory @ 0x14025307C (MmFreePoolMemory.c)
 *     MiDeleteBootRange @ 0x1403B1188 (MiDeleteBootRange.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiFreeInitializationCode @ 0x1407491CC (MiFreeInitializationCode.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C4EE0 (MmReturnChargesToLockPagedPool.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D6DD0 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiDeleteTransitionPte @ 0x1402419A0 (MiDeleteTransitionPte.c)
 *     MiTerminateWsleCluster @ 0x140241DE0 (MiTerminateWsleCluster.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140247160 (MI_WSLE_LOG_ACCESS.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     MiReleasePageFileSpace @ 0x1402525F0 (MiReleasePageFileSpace.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14025A290 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiAppendWsleCluster @ 0x1402B0C50 (MiAppendWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiDeleteValidSystemPage @ 0x1402B6220 (MiDeleteValidSystemPage.c)
 *     MiInitializeTbFlushStamps @ 0x1402B68D0 (MiInitializeTbFlushStamps.c)
 *     MiWriteWsle @ 0x1402E0090 (MiWriteWsle.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140315C30 (MI_PROTO_FORMAT_COMBINED.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiReturnSystemCharges @ 0x1403456C8 (MiReturnSystemCharges.c)
 *     MiDecrementCombinedPte @ 0x140364C34 (MiDecrementCombinedPte.c)
 *     MiImageProtoChargedCommit @ 0x140378200 (MiImageProtoChargedCommit.c)
 *     MiIsPfnSystemCharged @ 0x14037A998 (MiIsPfnSystemCharged.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiDriverPageIsDangling @ 0x140530324 (MiDriverPageIsDangling.c)
 */

__int64 __fastcall MiDeleteSystemPagableVm(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  __int64 v6; // r14
  int v9; // eax
  int v10; // ecx
  __int64 valid; // rdi
  char v12; // r8
  int v13; // r9d
  int v14; // esi
  __int64 v15; // r13
  _KPROCESS *v16; // rdx
  unsigned __int8 v17; // bl
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned __int64 *v23; // rcx
  unsigned __int64 v24; // rdi
  __int64 v25; // rdx
  _KPROCESS *Process; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  char v32; // al
  char v33; // di
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdi
  unsigned __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  ULONG_PTR v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  unsigned __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  int IsContended; // eax
  unsigned __int8 v55; // [rsp+30h] [rbp-D0h]
  __int64 v56; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+40h] [rbp-C0h]
  int v58; // [rsp+48h] [rbp-B8h]
  int v59; // [rsp+4Ch] [rbp-B4h]
  BOOL v60; // [rsp+50h] [rbp-B0h]
  int v61; // [rsp+54h] [rbp-ACh]
  __int64 v62; // [rsp+58h] [rbp-A8h]
  int v63; // [rsp+60h] [rbp-A0h] BYREF
  int v64; // [rsp+64h] [rbp-9Ch]
  __int64 v65; // [rsp+68h] [rbp-98h]
  unsigned __int64 v66; // [rsp+70h] [rbp-90h]
  _QWORD v67[3]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v68; // [rsp+90h] [rbp-70h] BYREF
  __int128 v69; // [rsp+A0h] [rbp-60h]
  __int64 v70; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-48h]
  __int64 v72; // [rsp+C0h] [rbp-40h]
  _QWORD v73[3]; // [rsp+C8h] [rbp-38h] BYREF
  int v74; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v75; // [rsp+E4h] [rbp-1Ch]
  __int16 v76; // [rsp+E6h] [rbp-1Ah]
  __int64 v77; // [rsp+E8h] [rbp-18h]
  __int64 v78; // [rsp+F0h] [rbp-10h]
  __int64 v79; // [rsp+F8h] [rbp-8h]
  __int128 v80; // [rsp+100h] [rbp+0h]
  __int128 v81; // [rsp+110h] [rbp+10h]
  __int128 v82; // [rsp+120h] [rbp+20h]
  __int128 v83; // [rsp+130h] [rbp+30h]
  __int128 v84; // [rsp+140h] [rbp+40h]
  __int128 v85; // [rsp+150h] [rbp+50h]
  __int128 v86; // [rsp+160h] [rbp+60h]
  __int128 v87; // [rsp+170h] [rbp+70h]
  __int128 v88; // [rsp+180h] [rbp+80h]
  __int64 v89; // [rsp+190h] [rbp+90h]
  int v90; // [rsp+210h] [rbp+110h]

  v65 = a1;
  v6 = a1;
  v72 = a2;
  v70 = 0LL;
  v76 = 0;
  v89 = 0LL;
  v60 = 0;
  v68 = 0LL;
  v69 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  if ( a2 )
    v60 = (*(_DWORD *)(a2 + 56) & 0x800) != 0;
  v9 = 10;
  v57 = 0LL;
  v10 = 0;
  v64 = a5 & 1;
  valid = 0LL;
  v58 = 0;
  if ( (a5 & 1) == 0 )
    v9 = 14;
  DWORD2(v69) = v9;
  v61 = a5 & 4;
  if ( (a5 & 4) != 0 )
    DWORD2(v69) = v9 | 0x10;
  v12 = *(_BYTE *)(v6 + 184) & 7;
  v13 = 0;
  v71 = 0LL;
  v59 = 0;
  if ( (unsigned __int8)(v12 - 3) > 1u )
  {
    if ( (a5 & 2) != 0 )
    {
      if ( dword_140C4E628 )
        v10 = 1;
      v58 = v10;
    }
    v13 = 2;
    v59 = 2;
  }
  v14 = a5 & 8;
  v90 = v14;
  v15 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(v6 + 174));
  v62 = v15;
  v77 = 20LL;
  v74 = v13;
  v75 = 0;
  v78 = 0LL;
  v79 = 0LL;
  if ( !v14 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v67[2] = (unsigned int)a4;
    v67[0] = 0LL;
    v67[1] = (__int64)(a3 << 25) >> 16;
    if ( v12 == 4 )
    {
      v67[0] = 6LL;
    }
    else if ( v12 == 3 )
    {
      v67[0] = 4LL;
    }
    else
    {
      v67[0] = v67[0] & 0xFFF0000000000007uLL | (16
                                               * (KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] & 0xFFFFFFFFFFFFLL)) | 7;
    }
    v73[1] = 24LL;
    v73[0] = v67;
    EtwTraceKernelEvent((int)v73, 1, 0x20000001u, 633, 289413890);
  }
  v66 = a3 + 8 * a4;
  v17 = MiLockWorkingSetShared(v6);
  v55 = v17;
  while ( a3 < v66 )
  {
    if ( valid )
    {
      if ( (a3 & 0xFFF) != 0 )
        goto LABEL_27;
      MiFlushTbList((__int64)&v74, v16);
      a6[1] += MiTerminateWsleCluster((__int64 *)&v68);
      MiUnlockPageTableInternal(v6, valid);
    }
    valid = MiLockLowestValidPageTable(v6, a3, &v70);
    v57 = valid;
    if ( valid != ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(v6, valid);
      valid = 0LL;
      v57 = 0LL;
      a3 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      continue;
    }
LABEL_27:
    v18 = MI_READ_PTE_LOCK_FREE(a3);
    v56 = v18;
    v19 = v18;
    if ( !v18 )
      goto LABEL_133;
    if ( (v18 & 1) != 0 )
    {
      v20 = (__int64)((a3 << 25) - v71) >> 16;
      v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v56) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      v22 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v21 + 40) >> 39) & 0x3FFLL));
      if ( v90 )
      {
        if ( (unsigned int)MiIsPfnSystemCharged(v21) )
        {
          v63 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v63, v16);
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
          *(_BYTE *)(v21 + 35) &= ~0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v15 = v62;
          if ( v22 == v62 )
            ++a6[1];
          goto LABEL_132;
        }
LABEL_131:
        v15 = v62;
LABEL_132:
        v14 = v90;
        goto LABEL_133;
      }
      v23 = (unsigned __int64 *)(((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v24 = *v23;
      if ( MiPteInShadowRange((unsigned __int64)v23)
        && (unsigned int)MiPteHasShadow(Process, v25, v27, v28)
        && (v24 & 1) != 0
        && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        Flink = Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v30 = v24 | 0x20;
          v31 = *((_QWORD *)&Flink->Flink + ((((v20 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
          Process = (_KPROCESS *)(unsigned __int8)v31;
          LOBYTE(Process) = v31 & 0x20;
          if ( (v31 & 0x20) == 0 )
            v30 = v24;
          v24 = v30;
          if ( (v31 & 0x42) != 0 )
            v24 = v30 | 0x42;
        }
        LOWORD(v19) = v56;
      }
      v32 = HIBYTE(v24) & 0xF | (16 * ((v24 >> 60) & 7));
      v33 = v32 & 0xF;
      if ( (v32 & 0xF) == 9 )
      {
        MiWriteWsle(Process, v20, v32 & 0xF0 | 0xAu);
        v6 = v65;
        MiDeleteValidSystemPage(v65, a3, v61 | 0x10u, a6);
        if ( v64 )
          goto LABEL_63;
        v56 = 0LL;
        MiInitializeTbFlushStamps(&v56);
        v34 = v56;
        if ( MiPteInShadowRange(a3) )
        {
          if ( (unsigned int)MiPteHasShadow(v36, v35, v37, v38) )
          {
            if ( !HIBYTE(word_140C4DE08) && (v34 & 1) != 0 )
              v34 |= 0x8000000000000000uLL;
            *(_QWORD *)a3 = v34;
            MiWritePteShadow(a3, v34);
LABEL_59:
            v16 = (_KPROCESS *)qword_140C4DD40;
            v39 = v56;
            if ( qword_140C4DD40 && (v56 & 0x10) == 0 )
              v39 = v56 & ~qword_140C4DD40;
            if ( (v39 & 0xFFFFFFFF00000000uLL) == 0 )
LABEL_63:
              MiInsertTbFlushEntry(&v74, v20, 1LL, 0LL);
LABEL_77:
            ++*a6;
            v15 = v62;
            if ( v59 == 2 )
              MiReturnSystemCharges(v62, 1LL, 1LL);
            goto LABEL_132;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v34 & 1) != 0 )
          {
            v34 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a3 = v34;
        goto LABEL_59;
      }
      v6 = v65;
      if ( v58 )
        MI_WSLE_LOG_ACCESS(v65, a3);
      if ( !(unsigned int)MiAppendWsleCluster(&v68, v6, a3) )
      {
        a6[1] += MiTerminateWsleCluster((__int64 *)&v68);
        MiAppendWsleCluster(&v68, v6, a3);
      }
      if ( !(unsigned int)MI_PFN_IS_PROTO(v21) )
        goto LABEL_75;
      v40 = *(_QWORD *)(v21 + 16);
      if ( (v40 & 0x400) == 0 || (v19 & 0x200) != 0 )
        goto LABEL_75;
      if ( qword_140C4DD40 && (v40 & 0x10) == 0 )
        v40 &= ~qword_140C4DD40;
      if ( (*(_DWORD *)(*(_QWORD *)(v40 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_75:
        ++a6[3];
      if ( v33 != 8 )
        goto LABEL_131;
      goto LABEL_77;
    }
    if ( (v18 & 0x400) == 0 )
    {
      if ( (v18 & 0x800) != 0 )
      {
        v46 = MiLockTransitionLeafPage(a3);
        if ( !v46 )
          goto LABEL_140;
        if ( v14 )
        {
          if ( (unsigned int)MiIsPfnSystemCharged(v46) )
          {
            *(_BYTE *)(v48 + 35) &= ~0x20u;
            ++a6[1];
          }
          _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          if ( v61 && (unsigned int)MiIsPfnSystemCharged(v46) )
          {
            MiDriverPageIsDangling();
            *(_BYTE *)(v46 + 35) &= ~0x20u;
          }
          LOBYTE(v47) = 17;
          if ( (unsigned int)MiDeleteTransitionPte(a3, v46, v47, 1) == 3 )
            ++a6[1];
          ++a6[3];
        }
        goto LABEL_133;
      }
      if ( !v14 && (v18 & 0x3E0) != 0 )
      {
        MiReleasePageFileSpace(v15, v18);
        v49 = ZeroPte;
        if ( MiPteInShadowRange(a3) )
        {
          if ( (unsigned int)MiPteHasShadow(v50, v16, v51, v52) )
          {
            if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
              v49 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)a3 = v49;
            MiWritePteShadow(a3, v49);
            ++a6[3];
            goto LABEL_133;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v49 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a3 = v49;
        ++a6[3];
      }
      goto LABEL_133;
    }
    if ( v14 )
      goto LABEL_133;
    if ( (v18 & 2) == 0 )
    {
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v18) )
      {
        ++a6[3];
        if ( qword_140C4DD40 )
        {
          if ( (v19 & 0x10) != 0 )
            v19 &= ~0x10uLL;
          else
            v19 &= ~qword_140C4DD40;
        }
        v41 = **(_QWORD **)((((v19 >> 16) - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        if ( (unsigned int)MiDecrementCombinedPte(v6, v19 >> 16) == 3 && v41 == v15 )
          ++a6[1];
        goto LABEL_97;
      }
      if ( !v60 )
      {
        if ( qword_140C4DD40 )
        {
          if ( (v19 & 0x10) != 0 )
            v19 &= ~0x10uLL;
          else
            v19 &= ~qword_140C4DD40;
        }
        if ( !(unsigned int)MiImageProtoChargedCommit(v72, v19 >> 16) )
          goto LABEL_97;
      }
    }
    ++a6[3];
LABEL_97:
    v42 = ZeroPte;
    if ( MiPteInShadowRange(a3) )
    {
      if ( (unsigned int)MiPteHasShadow(v43, v16, v44, v45) )
      {
        if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
          v42 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)a3 = v42;
        MiWritePteShadow(a3, v42);
        goto LABEL_133;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v42 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a3 = v42;
LABEL_133:
    a3 += 8LL;
    if ( a3 == v66 || (a3 & 0x78) != 0 )
    {
      valid = v57;
LABEL_140:
      v17 = v55;
      continue;
    }
    IsContended = MiWorkingSetIsContended(v6);
    valid = v57;
    if ( !IsContended && !(unsigned int)MiPageTableLockIsContended(v6, v57) && !KeShouldYieldProcessor() )
      goto LABEL_140;
    MiFlushTbList((__int64)&v74, v16);
    a6[1] += MiTerminateWsleCluster((__int64 *)&v68);
    MiUnlockPageTableInternal(v6, valid);
    v17 = v55;
    MiUnlockWorkingSetShared(v6, v55);
    valid = 0LL;
    v57 = 0LL;
    MiLockWorkingSetShared(v6);
  }
  MiFlushTbList((__int64)&v74, v16);
  if ( valid )
  {
    a6[1] += MiTerminateWsleCluster((__int64 *)&v68);
    MiUnlockPageTableInternal(v6, valid);
  }
  return MiUnlockWorkingSetShared(v6, v17);
}
