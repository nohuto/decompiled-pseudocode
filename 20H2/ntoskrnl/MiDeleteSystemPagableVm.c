/*
 * XREFs of MiDeleteSystemPagableVm @ 0x140236D90
 * Callers:
 *     MmFreePoolMemory @ 0x140237AB4 (MmFreePoolMemory.c)
 *     MiDeleteBootRange @ 0x1403B3AF8 (MiDeleteBootRange.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiFreeInitializationCode @ 0x140757DAC (MiFreeInitializationCode.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408CAD20 (MmReturnChargesToLockPagedPool.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DCC10 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140236AC8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiDeleteValidSystemPage @ 0x1402AC570 (MiDeleteValidSystemPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAppendWsleCluster @ 0x1402B8D20 (MiAppendWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsleCluster @ 0x1402BF020 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiDeleteTransitionPte @ 0x1402C7050 (MiDeleteTransitionPte.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402CFBA0 (MI_WSLE_LOG_ACCESS.c)
 *     MiPageTableLockIsContended @ 0x1402CFD90 (MiPageTableLockIsContended.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiInitializeTbFlushStamps @ 0x1403018E0 (MiInitializeTbFlushStamps.c)
 *     MiWriteWsle @ 0x14030D2E4 (MiWriteWsle.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReturnSystemCharges @ 0x140316A18 (MiReturnSystemCharges.c)
 *     MiReleasePageFileSpace @ 0x14034D3F4 (MiReleasePageFileSpace.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiDecrementCombinedPte @ 0x140366C14 (MiDecrementCombinedPte.c)
 *     MiImageProtoChargedCommit @ 0x14037A0A0 (MiImageProtoChargedCommit.c)
 *     MiIsPfnSystemCharged @ 0x14037C6C8 (MiIsPfnSystemCharged.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiDriverPageIsDangling @ 0x140533CF4 (MiDriverPageIsDangling.c)
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
  unsigned __int64 valid; // rdi
  char v12; // r8
  int v13; // r9d
  int v14; // esi
  __int64 v15; // r13
  __int64 v16; // rdx
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
  __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  int IsContended; // eax
  unsigned __int8 v54; // [rsp+30h] [rbp-D0h]
  __int64 v55; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v56; // [rsp+40h] [rbp-C0h]
  int v57; // [rsp+48h] [rbp-B8h]
  int v58; // [rsp+4Ch] [rbp-B4h]
  BOOL v59; // [rsp+50h] [rbp-B0h]
  int v60; // [rsp+54h] [rbp-ACh]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  int v62; // [rsp+60h] [rbp-A0h] BYREF
  int v63; // [rsp+64h] [rbp-9Ch]
  __int64 v64; // [rsp+68h] [rbp-98h]
  unsigned __int64 v65; // [rsp+70h] [rbp-90h]
  _QWORD v66[3]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v67; // [rsp+90h] [rbp-70h] BYREF
  __int128 v68; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v69; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-48h]
  __int64 v71; // [rsp+C0h] [rbp-40h]
  _QWORD v72[3]; // [rsp+C8h] [rbp-38h] BYREF
  int v73; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v74; // [rsp+E4h] [rbp-1Ch]
  __int16 v75; // [rsp+E6h] [rbp-1Ah]
  __int64 v76; // [rsp+E8h] [rbp-18h]
  __int64 v77; // [rsp+F0h] [rbp-10h]
  __int64 v78; // [rsp+F8h] [rbp-8h]
  __int128 v79; // [rsp+100h] [rbp+0h]
  __int128 v80; // [rsp+110h] [rbp+10h]
  __int128 v81; // [rsp+120h] [rbp+20h]
  __int128 v82; // [rsp+130h] [rbp+30h]
  __int128 v83; // [rsp+140h] [rbp+40h]
  __int128 v84; // [rsp+150h] [rbp+50h]
  __int128 v85; // [rsp+160h] [rbp+60h]
  __int128 v86; // [rsp+170h] [rbp+70h]
  __int128 v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+190h] [rbp+90h]
  int v89; // [rsp+210h] [rbp+110h]

  v64 = a1;
  v6 = a1;
  v71 = a2;
  v69 = 0LL;
  v75 = 0;
  v88 = 0LL;
  v59 = 0;
  v67 = 0LL;
  v68 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  if ( a2 )
    v59 = (*(_DWORD *)(a2 + 56) & 0x800) != 0;
  v9 = 10;
  v56 = 0LL;
  v10 = 0;
  v63 = a5 & 1;
  valid = 0LL;
  v57 = 0;
  if ( (a5 & 1) == 0 )
    v9 = 14;
  DWORD2(v68) = v9;
  v60 = a5 & 4;
  if ( (a5 & 4) != 0 )
    DWORD2(v68) = v9 | 0x10;
  v12 = *(_BYTE *)(v6 + 184) & 7;
  v13 = 0;
  v70 = 0LL;
  v58 = 0;
  if ( (unsigned __int8)(v12 - 3) > 1u )
  {
    if ( (a5 & 2) != 0 )
    {
      if ( dword_140C4E6A8 )
        v10 = 1;
      v57 = v10;
    }
    v13 = 2;
    v58 = 2;
  }
  v14 = a5 & 8;
  v89 = v14;
  v15 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v6 + 174));
  v61 = v15;
  v76 = 20LL;
  v73 = v13;
  v74 = 0;
  v77 = 0LL;
  v78 = 0LL;
  if ( !v14 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v66[2] = (unsigned int)a4;
    v66[0] = 0LL;
    v66[1] = (__int64)(a3 << 25) >> 16;
    if ( v12 == 4 )
    {
      v66[0] = 6LL;
    }
    else if ( v12 == 3 )
    {
      v66[0] = 4LL;
    }
    else
    {
      v66[0] = v66[0] & 0xFFF0000000000007uLL | (16
                                               * (KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] & 0xFFFFFFFFFFFFLL)) | 7;
    }
    v72[1] = 24LL;
    v72[0] = v66;
    EtwTraceKernelEvent((unsigned int)v72, 1, 536870913, 633, 289413890);
  }
  v65 = a3 + 8 * a4;
  v17 = MiLockWorkingSetShared(v6);
  v54 = v17;
  while ( a3 < v65 )
  {
    if ( valid )
    {
      if ( (a3 & 0xFFF) != 0 )
        goto LABEL_27;
      MiFlushTbList(&v73, v16);
      a6[1] += MiTerminateWsleCluster(&v67);
      MiUnlockPageTableInternal(v6);
    }
    valid = MiLockLowestValidPageTable(v6, a3, &v69);
    v56 = valid;
    if ( valid != ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(v6);
      valid = 0LL;
      v56 = 0LL;
      a3 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      continue;
    }
LABEL_27:
    v18 = MI_READ_PTE_LOCK_FREE(a3);
    v55 = v18;
    v19 = v18;
    if ( !v18 )
      goto LABEL_133;
    if ( (v18 & 1) != 0 )
    {
      v20 = (__int64)((a3 << 25) - v70) >> 16;
      v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v55) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v22 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v21 + 40) >> 39) & 0x3FFLL));
      if ( v89 )
      {
        if ( (unsigned int)MiIsPfnSystemCharged(v21) )
        {
          v62 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v62);
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
          *(_BYTE *)(v21 + 35) &= ~0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v15 = v61;
          if ( v22 == v61 )
            ++a6[1];
          goto LABEL_132;
        }
LABEL_131:
        v15 = v61;
LABEL_132:
        v14 = v89;
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
        LOWORD(v19) = v55;
      }
      v32 = HIBYTE(v24) & 0xF | (16 * ((v24 >> 60) & 7));
      v33 = v32 & 0xF;
      if ( (v32 & 0xF) == 9 )
      {
        MiWriteWsle(Process, v20, v32 & 0xF0 | 0xAu);
        v6 = v64;
        MiDeleteValidSystemPage(v64, a3, v60 | 0x10u, a6);
        if ( v63 )
          goto LABEL_63;
        v55 = 0LL;
        MiInitializeTbFlushStamps(&v55);
        v34 = v55;
        if ( MiPteInShadowRange(a3) )
        {
          if ( (unsigned int)MiPteHasShadow(v36, v35, v37, v38) )
          {
            if ( !HIBYTE(word_140C4DE88) && (v34 & 1) != 0 )
              v34 |= 0x8000000000000000uLL;
            *(_QWORD *)a3 = v34;
            MiWritePteShadow(a3, v34);
LABEL_59:
            v16 = qword_140C4DDC0;
            v39 = v55;
            if ( qword_140C4DDC0 && (v55 & 0x10) == 0 )
              v39 = v55 & ~qword_140C4DDC0;
            if ( (v39 & 0xFFFFFFFF00000000uLL) == 0 )
LABEL_63:
              MiInsertTbFlushEntry(&v73, v20, 1LL, 0LL);
LABEL_77:
            ++*a6;
            v15 = v61;
            if ( v58 == 2 )
              MiReturnSystemCharges(v61, 1LL, 1LL);
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
      v6 = v64;
      if ( v57 )
        MI_WSLE_LOG_ACCESS(v64, a3);
      if ( !(unsigned int)MiAppendWsleCluster(&v67, v6, a3) )
      {
        a6[1] += MiTerminateWsleCluster(&v67);
        MiAppendWsleCluster(&v67, v6, a3);
      }
      if ( !(unsigned int)MI_PFN_IS_PROTO(v21) )
        goto LABEL_75;
      v40 = *(_QWORD *)(v21 + 16);
      if ( (v40 & 0x400) == 0 || (v19 & 0x200) != 0 )
        goto LABEL_75;
      if ( qword_140C4DDC0 && (v40 & 0x10) == 0 )
        v40 &= ~qword_140C4DDC0;
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
        v46 = MiLockTransitionLeafPage(a3, 0LL);
        if ( !v46 )
          goto LABEL_140;
        if ( v14 )
        {
          if ( (unsigned int)MiIsPfnSystemCharged(v46) )
          {
            *(_BYTE *)(v47 + 35) &= ~0x20u;
            ++a6[1];
          }
          _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          if ( v60 && (unsigned int)MiIsPfnSystemCharged(v46) )
          {
            MiDriverPageIsDangling();
            *(_BYTE *)(v46 + 35) &= ~0x20u;
          }
          if ( (unsigned int)MiDeleteTransitionPte(a3, v46) == 3 )
            ++a6[1];
          ++a6[3];
        }
        goto LABEL_133;
      }
      if ( !v14 && (v18 & 0x3E0) != 0 )
      {
        MiReleasePageFileSpace(v15, v18, 1LL);
        v48 = ZeroPte;
        if ( MiPteInShadowRange(a3) )
        {
          if ( (unsigned int)MiPteHasShadow(v49, v16, v50, v51) )
          {
            if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
              v48 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)a3 = v48;
            MiWritePteShadow(a3, v48);
            ++a6[3];
            goto LABEL_133;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v48 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a3 = v48;
        ++a6[3];
      }
      goto LABEL_133;
    }
    if ( v14 )
      goto LABEL_133;
    if ( (v18 & 2) == 0 )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v18) )
      {
        ++a6[3];
        if ( qword_140C4DDC0 )
        {
          if ( (v19 & 0x10) != 0 )
            v19 &= ~0x10uLL;
          else
            v19 &= ~qword_140C4DDC0;
        }
        v41 = **(_QWORD **)((((v19 >> 16) - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        if ( (unsigned int)MiDecrementCombinedPte(v6, v19 >> 16) == 3 && v41 == v15 )
          ++a6[1];
        goto LABEL_97;
      }
      if ( !v59 )
      {
        if ( qword_140C4DDC0 )
        {
          if ( (v19 & 0x10) != 0 )
            v19 &= ~0x10uLL;
          else
            v19 &= ~qword_140C4DDC0;
        }
        if ( !(unsigned int)MiImageProtoChargedCommit(v71, v19 >> 16) )
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
        if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
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
    if ( a3 == v65 || (a3 & 0x78) != 0 )
    {
      valid = v56;
LABEL_140:
      v17 = v54;
      continue;
    }
    IsContended = MiWorkingSetIsContended(v6);
    valid = v56;
    if ( !IsContended && !(unsigned int)MiPageTableLockIsContended(v6, v56) && !KeShouldYieldProcessor() )
      goto LABEL_140;
    MiFlushTbList(&v73, v16);
    a6[1] += MiTerminateWsleCluster(&v67);
    MiUnlockPageTableInternal(v6);
    v17 = v54;
    MiUnlockWorkingSetShared(v6, v54);
    valid = 0LL;
    v56 = 0LL;
    MiLockWorkingSetShared(v6);
  }
  MiFlushTbList(&v73, v16);
  if ( valid )
  {
    a6[1] += MiTerminateWsleCluster(&v67);
    MiUnlockPageTableInternal(v6);
  }
  return MiUnlockWorkingSetShared(v6, v17);
}
